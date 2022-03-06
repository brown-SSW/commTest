#include <Arduino.h>

void setup()
{
    pinMode(2, OUTPUT);
    Serial2.begin(9600, SERIAL_8N1, 16, 17);
}
void loop()
{
    delay(1000);
    digitalWrite(2, HIGH);
    Serial2.print("n");
    delay(1000);
    digitalWrite(2, LOW);
    Serial2.print("f");
}