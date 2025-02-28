//Distance sensor
#define trigPin 12
#define echoPin 8

//Flashing LED on Arduino board
#define LEDPin 13

//LCD
#include <Wire.h>
#include <LCD.h>
#include <LiquidCrystal_I2C.h>

#define I2C_ADDR  0x27  // Define I2C Address where the PCF8574A is
#define BACKLIGHT_PIN   3
#define En_pin  2
#define Rw_pin  1
#define Rs_pin  0
#define D4_pin  4
#define D5_pin  5
#define D6_pin  6
#define D7_pin  7

int n = 1;

LiquidCrystal_I2C     lcd(I2C_ADDR,En_pin,Rw_pin,Rs_pin,D4_pin,D5_pin,D6_pin,D7_pin);


void setup ()
{
  Serial.begin(9600);
  pinMode(trigPin, OUTPUT);  //The transmit pin of the ultrasonic sensor
  pinMode(echoPin, INPUT);   //The receive pin of the ultrasonic sensor
  pinMode(LEDPin, OUTPUT);   //The LED of the Arduino

  lcd.begin (20,4);  //Size of LCD
 
// Switch on the backlight
  lcd.setBacklightPin(BACKLIGHT_PIN,POSITIVE);
  lcd.setBacklight(HIGH);
  lcd.home ();                // go home

}

void loop()
{
  int duration, distance;
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(100);
  digitalWrite(trigPin, LOW);
  duration = pulseIn(echoPin, HIGH);
  distance =(duration/2.0) / 29.1;

  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("Distance from OB");
  lcd.setCursor(0,1);
  lcd.print(distance);
  lcd.print("cm");

  if (distance>=2)
  {
    lcd.setCursor(0,4);
    //lcd.print("Safe Zone :)");
    digitalWrite(LEDPin,HIGH);
      delay(500);
      digitalWrite(LEDPin,LOW);
      delay(500);
   
  }
    else
  {
      lcd.clear();
      lcd.setCursor(0, 0);
      lcd.print(" STEP AWAY!!! ");
      lcd.setCursor(0, 1);
      lcd.print(" STEP AWAY!!! ");

      // Blink LED 10 times quickly
      for (int i = 0; i < 10; i++) {
          digitalWrite(LEDPin, HIGH);
          delay(50);
          digitalWrite(LEDPin, LOW);
          delay(50);
      }
  }

}