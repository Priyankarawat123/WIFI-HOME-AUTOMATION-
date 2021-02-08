#define BLYNK_PRINT Serial  // command to print serial
#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>
//#include <LiquidCrystal.h>
//LiquidCrystal lcd(D0, D1, D2, D3, D4, D5);
//char auth[] = "71d6ec249b964833bb5026428bc8f5a8";////add token here SME
char auth[] = "lw4FeajDCd3gUAlkQIGjeW059EQkD065";  // 

// Your WiFi credentials.
// Set password to "" for open networks.
char ssid[] = "Redmi";
char pass[] = "12345678";

int device1 = D2, device2 = D7 , device3 = D5, device4 = D6;

BLYNK_WRITE(V1)
{
  int device1_VAL = param.asInt(); // assigning incoming value from pin V1 to a variable
  if(device1_VAL == HIGH)
  {

    digitalWrite(device1,HIGH);

    Serial.println("device1 is turning on");

    }  
    if(device1_VAL == LOW)
  {
    digitalWrite(device1,LOW);
     Serial.println("device1 is turning off");

    }  
}

BLYNK_WRITE(V2)
{
  int device2_VAL = param.asInt(); // assigning incoming value from pin V1 to a variable
  if(device2_VAL == HIGH)
  {
//    lcd.clear();
    digitalWrite(device2,HIGH);
    Serial.println("device2 is turning on");
//    lcd.setCursor(0,1);
//    lcd.print("Device2 ON");
   }
   if(device2_VAL == LOW)
  {
//    lcd.clear();
    digitalWrite(device2,LOW);
    Serial.println("device2 is turning off");
//    lcd.setCursor(0,1);
//    lcd.print("Device2 OFF");
   }
 }
 BLYNK_WRITE(V3)
{
  int device3_VAL = param.asInt(); // assigning incoming value from pin V1 to a variable
  if(device3_VAL == HIGH)
  {
//    lcd.clear();
    digitalWrite(device3,HIGH);
    Serial.println("device3 is turning on");
//    lcd.setCursor(0,1);
//    lcd.print("Device2 ON");
   }
   if(device3_VAL == LOW)
  {
//    lcd.clear();
    digitalWrite(device3,LOW);
    Serial.println("device3 is turning off");
//    lcd.setCursor(0,1);
//    lcd.print("Device2 OFF");
   }
 }
 BLYNK_WRITE(V4)
{
  int device4_VAL = param.asInt(); // assigning incoming value from pin V1 to a variable
  if(device4_VAL == HIGH)
  {
//    lcd.clear();
    digitalWrite(device4,HIGH);
    Serial.println("device4 is turning on");
//    lcd.setCursor(0,1);
//    lcd.print("Device2 ON");
   }
   if(device4_VAL == LOW)
  {
//    lcd.clear();
    digitalWrite(device4,LOW);
    Serial.println("device4 is turning off");
//    lcd.setCursor(0,1);
//    lcd.print("Device2 OFF");
   }
 }

void setup()
{
  Serial.begin(9600);

  Blynk.begin(auth, ssid, pass);
  delay(3000);
  pinMode(device1,OUTPUT);
  pinMode(device2,OUTPUT);
  pinMode(device3,OUTPUT);
  pinMode(device4,OUTPUT);
  digitalWrite(device1,LOW);
  digitalWrite(device2,LOW);
  digitalWrite(device3,LOW);
  digitalWrite(device4,LOW);
}

void loop()
{
  Blynk.run();
}
