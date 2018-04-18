#include <Arduino.h>
#line 1 "C:\\Users\\Asus\\Documents\\Project\\led_control\\led_control.ino"
#line 1 "C:\\Users\\Asus\\Documents\\Project\\led_control\\led_control.ino"
String voice; 
#line 2 "C:\\Users\\Asus\\Documents\\Project\\led_control\\led_control.ino"
void setup();
#line 6 "C:\\Users\\Asus\\Documents\\Project\\led_control\\led_control.ino"
void loop();
#line 2 "C:\\Users\\Asus\\Documents\\Project\\led_control\\led_control.ino"
void setup() {
pinMode(13, OUTPUT);  
Serial.begin(9600);
} 
void loop() {
  while (Serial.available())
  { 
  delay(10); 
  char c = Serial.read(); 
  voice += c; 
  }  
  if (voice.length() > 0)
  {
    Serial.println(voice); 
       if(voice == "on")
       {
         digitalWrite(13, HIGH);
        }  
  if(voice == "off")
  {
   digitalWrite(13, LOW);
    } 
voice="";
}
}


