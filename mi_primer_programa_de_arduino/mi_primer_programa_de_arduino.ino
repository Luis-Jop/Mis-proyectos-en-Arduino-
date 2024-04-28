void setup (){
  pinMode(13, OUTPUT);   // ping 13 como salida.
  }
  void loop(){
    digitalWrite(13, HIGH);   //ping 13 a nivel alto {1}
    delay(500);               // es el tiempo de demora 1 seg.
    digitalWrite(13, LOW);      // ping 13 a nivel bajo {0}
    delay(500);
    
  }
