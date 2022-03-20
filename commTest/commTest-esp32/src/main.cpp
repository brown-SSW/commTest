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
    Serial2.print(1.234);
    Serial2.print(";");
    digitalWrite(2, LOW);
    Serial2.print(9876);
    Serial2.print(";");
}