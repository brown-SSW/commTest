#include <Arduino.h>
void setup()
{
    pinMode(2, OUTPUT);
}
void loop()
{
    digitalWrite(2, (millis() % 1100) < 900);
}