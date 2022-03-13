#include <Adafruit_GFX.h>
#include <Adafruit_LEDBackpack.h>
#include <Arduino.h>
#include <SPI.h>
#include <SoftwareSerial.h>

SoftwareSerial mySerial(2, 3);
Adafruit_7segment display = Adafruit_7segment();

void setup()
{
    pinMode(13, OUTPUT);
    mySerial.begin(9600);
    Serial.begin(115200);
    display.begin(0x70);
}

void loop()
{

    if (mySerial.available() > 0) {
        char inChar = mySerial.read();
        if (inChar == 'f') {
            display.clear();
            display.writeDisplay();
            display.println("your");
            display.writeDisplay();

            digitalWrite(13, LOW);
        }
        if (inChar == 'n') {
            display.clear();
            display.writeDisplay();
            display.println("sus");
            display.writeDisplay();

            digitalWrite(13, HIGH);
        }
    }
    delay(100);
}