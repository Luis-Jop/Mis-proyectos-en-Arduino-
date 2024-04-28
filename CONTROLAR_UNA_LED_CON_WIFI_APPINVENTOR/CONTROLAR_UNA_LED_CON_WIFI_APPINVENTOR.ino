#if defined(ESP32)
  #include <WiFi.h>
#include "soc/soc.h"
#include "soc/rtc_cntl_reg.h"


 
#endif

const char* ssid = "DARK-NET";
const char* password = "familyjop*";

WiFiServer server(80);

String header;

unsigned long lastTime, timeout = 2000;

///////////// CODIGO ///////////////

const int outputPin = 2; // pin de salida
String outputState = "apagado"; //almacenar el estado actual de la salida


void setup() {

 WRITE_PERI_REG(RTC_CNTL_BROWN_OUT_REG, 0); //deshabilitar el detector de caída de tensión
  
  
  Serial.begin(115200);

  pinMode(outputPin, OUTPUT);
  digitalWrite(outputPin, LOW);
  
  Serial.print("Conectando a ");
  Serial.println(ssid);

  WiFi.begin(ssid,password);
  while(WiFi.status() != WL_CONNECTED)
  {
    delay(500);
    Serial.print(".");
  }

  Serial.println("");
  Serial.println("Dispositivo conectado.");
  Serial.println("Direccion IP: ");
  Serial.print(WiFi.localIP());

  server.begin();

}
 






 

 


void loop() {

  WiFiClient client = server.available();

  if(client)
  {
    lastTime = millis();
    
    Serial.println("Nuevo cliente");
    String currentLine = "";

    while(client.connected() && millis() - lastTime <= timeout)
    {

      if(client.available())
      {
        
        char c = client.read();
        Serial.write(c);
        header += c;

        if(c == '\n')
        {
          
          if(currentLine.length() == 0)
          {

            ////////// ENCABEZADO HTTP ////////////
               
            client.println("HTTP/1.1 200 OK");
            client.println("Content-type:text/html");
            client.println("Connection: close");
            client.println();


            if (header.indexOf("GET /on") >= 0) {
              Serial.println("GPIO encendido");
              outputState = "encendido";
              digitalWrite(outputPin, HIGH);
            }                         
            else if (header.indexOf("GET /off") >= 0) {
              Serial.println("GPIO apagado");
              outputState = "apagado";
              digitalWrite(outputPin, LOW);
            } 
            

             //////// PAGINA WEB //////////////
              
            client.println("<!DOCTYPE html><html>");
            client.println("<head><meta name=\"viewport\" content=\"width=device-width, initial-scale=1\">");
            client.println("<link rel=\"icon\" href=\"data:,\">");
            client.println("</head>");

            client.println("<body></body>");

            client.println("</html>");

            client.println();
            break;

            
            /////////////////////////////////////
          }
          else
          {
            currentLine = "";
          }
        }
        else if ( c != '\r')
        {
          currentLine += c;
        }
        
        
      }

      
    }

    header = "";
    client.stop();
    Serial.println("Cliente desconectado.");
    Serial.println("");
  }

}
