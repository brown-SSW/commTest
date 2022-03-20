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
    mySerial.setTimeout(0);
}

void loop()
{

    if (mySerial.available() > 0) {
        display.println(mySerial.parseFloat(), 4);
        mySerial.read();
        display.writeDisplay();
    }
    delay(100);
}