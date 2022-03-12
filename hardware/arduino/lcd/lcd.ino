#include <Wire.h>
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C LCD(0x27, 16, 2);

void setup() {
  LCD.begin();
  Serial.begin(9600);
  LCD.backlight();
}

void loop() {
  LCD.clear();
  LCD.print("Arduino Test");
  LCD.setCursor(0, 1);
  delay(1000);
}
