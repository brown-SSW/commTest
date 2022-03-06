#include <Arduino.h>
#include <SoftwareSerial.h>
SoftwareSerial mySerial(2, 3);
void setup()
{
    pinMode(13, OUTPUT);
    mySerial.begin(9600);
    Serial.begin(115200);
}
void loop()
{
    if (mySerial.available() > 0) {
        char inChar = mySerial.read();
        if (inChar == 'f') {
            digitalWrite(13, LOW);
        }
        if (inChar == 'n') {
            digitalWrite(13, HIGH);
        }
    }
    delay(100);
}