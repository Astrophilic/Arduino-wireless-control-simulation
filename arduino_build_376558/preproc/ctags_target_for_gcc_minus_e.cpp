# 1 "C:\\Users\\Asus\\Documents\\Project\\led_control\\led_control.ino"
# 1 "C:\\Users\\Asus\\Documents\\Project\\led_control\\led_control.ino"
String voice;
void setup() {
pinMode(13, 0x1);
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
         digitalWrite(13, 0x1);
        }
  if(voice == "off")
  {
   digitalWrite(13, 0x0);
    }
voice="";
}
}
