/*
  LiquidCrystal Library - Hello World

 Demonstrates the use a 16x2 LCD display.  The LiquidCrystal
 library works with all LCD displays that are compatible with the
 Hitachi HD44780 driver. There are many of them out there, and you
 can usually tell them by the 16-pin interface.

 This sketch prints "Hello World!" to the LCD
 and shows the time.

  The circuit:
 * LCD RS pin to digital pin 12
 * LCD Enable pin to digital pin 11
 * LCD D4 pin to digital pin 5
 * LCD D5 pin to digital pin 4
 * LCD D6 pin to digital pin 3
 * LCD D7 pin to digital pin 2
 * LCD R/W pin to ground
 * LCD VSS pin to ground
 * LCD VCC pin to 5V
 * 10K resistor:
 * ends to +5V and ground
 * wiper to LCD VO pin (pin 3)

 Library originally added 18 Apr 2008
 by David A. Mellis
 library modified 5 Jul 2009
 by Limor Fried (http://www.ladyada.net)
 example added 9 Jul 2009
 by Tom Igoe
 modified 22 Nov 2010
 by Tom Igoe
 modified 7 Nov 2016
 by Arturo Guadalupi

 This example code is in the public domain.

 http://www.arduino.cc/en/Tutorial/LiquidCrystalHelloWorld

*/

// include the library code:
#include <LiquidCrystal.h>

// initialize the library by associating any needed LCD interface pin
// with the arduino pin number it is connected to
const int rs = 12, en = 11, d4 = 7, d5 = 6, d6 = 5, d7 = 4;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

void setup() {
  // set up the LCD's number of columns and rows:
  lcd.begin(16, 2);
  pinMode(1, OUTPUT);
  pinMode(2, OUTPUT);
   pinMode(3, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(10, INPUT);
  pinMode(9, INPUT);
  // Print a message to the LCD.
  lcd.print("ELECTRIC");
  lcd.print("VEHICLE ");
   delay(1000); 
}

void loop() {
//   digitalWrite(8, LOW); 
lcd.clear();
 int sensorValue = analogRead(A5);
 lcd.print(sensorValue);
if(sensorValue >=500){
  digitalWrite(2, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(100); 
   lcd.clear();
 lcd.print("TEMP 35C");
 delay(500); 
}
if(sensorValue >=1000){
  digitalWrite(2, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(100); 
    lcd.clear();
 lcd.print("TEMP 40C");
 delay(500); 
}
if(sensorValue <=500){
  digitalWrite(2, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(100); 
    lcd.clear();
 lcd.print("TEMP 20");
 delay(500); 
}
 digitalWrite(2, LOW);   // turn the LED on (HIGH is the voltage level)
  delay(100);
    int buttonState1 = digitalRead(10);
  // print out the value you read:
//lcd.clear();
  lcd.setCursor(1, 1);
  lcd.print(buttonState1); 
  
  Serial.println(buttonState1);
  if(buttonState1 ==0){
     lcd.clear();
  digitalWrite(8, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(500); 
   lcd.setCursor(1, 5);
  lcd.print("DC MOTOR");
  digitalWrite(2, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(100);  
  delay(500);   
  }

}
