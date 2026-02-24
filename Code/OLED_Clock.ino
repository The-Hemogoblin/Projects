#include <Wire.h>
#include <SPI.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>
#include <virtuabotixRTC.h>

#define OLED_RESET 4

Adafruit_SSD1306 display(OLED_RESET);
virtuabotixRTC myRTC(0, 1, 2);

void setup() {
  display.begin(SSD1306_SWITCHCAPVCC, 0x3C);
  display.clearDisplay();
  
  // seconds, minutes, hours, day of the week, day of the month, month, year
  myRTC.setDS1302Time(00, 21, 22, 1, 22, 2, 2026);
  Serial.begin(9600);
}

void loop() {
  myRTC.updateTime();
  Serial.print(myRTC.month);
  Serial.print("/");
  Serial.print(myRTC.dayofmonth);
  Serial.print("/");
  Serial.print(myRTC.year);
  Serial.print(" Time: ");
  Serial.print((myRTC.hours)%12);
  Serial.print(":");
  Serial.print(myRTC.minutes);
  Serial.print(":");
  Serial.println(myRTC.seconds);
  
  display.setTextSize(2);
  display.setTextColor(WHITE);
  display.setCursor(0,0);
  display.println("12:53 AM");
  display.display();
}
