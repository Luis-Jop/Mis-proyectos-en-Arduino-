 const int pins[7] = {2, 3, 4, 5, 6, 7, 8};
//                    a  b  c  d  e  f  g
// Paso 2
const byte numbersDisplayAnode[10] = {0b0111111,  // 0
                                      0b0000110,  // 1
                                      0b1011011,  // 2
                                      0b1001111,  // 3
                                      0b1100110,  // 4
                                      0b1101101,  // 5
                                      0b1111101,  // 6
                                      0b0000111,  // 7
                                      0b1111111,  // 8
                                      0b1101111}; // 9
void setup()
{
    // Paso 3
    for (int i = 0; i < 7; i++)
    {
        pinMode(pins[i], OUTPUT);
    }

    // Paso 5
    lightSegments(0);
}

void loop()
{
    // Paso 6
    for (int i = 0; i < 10; i++)
    {
        lightSegments(i);
        delay(2000);
    }
}

// Paso 4
void lightSegments(int number)
{
    byte numberBit = numbersDisplayAnode[number];
    for (int i = 0; i < 7; i++)
    {
        int bit = bitRead(numberBit, i);
        digitalWrite(pins[i], bit);
    }
}
