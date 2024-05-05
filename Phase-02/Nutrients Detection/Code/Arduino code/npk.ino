#include <SoftwareSerial.h>
#include <Wire.h>
#include <LiquidCrystal.h>
#include <stdio.h>


const int rs = 8, en = 9, d4 = 10, d5 = 11, d6 = 12, d7 = 13;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

const int level=4;


#define RE 6
#define DE 7

 
//const byte code[]= {0x01, 0x03, 0x00, 0x1e, 0x00, 0x03, 0x65, 0xCD};
const byte nitro[] = {0x01,0x03, 0x00, 0x1e, 0x00, 0x01, 0xe4, 0x0c};
const byte phos[] = {0x01,0x03, 0x00, 0x1f, 0x00, 0x01, 0xb5, 0xcc};
const byte pota[] = {0x01,0x03, 0x00, 0x20, 0x00, 0x01, 0x85, 0xc0};
 
byte values[11];
SoftwareSerial mod(2,3);
void npk_check();
void soil_check(void);
void setup() {
  Serial.begin(9600);
  lcd.begin(16, 2);
   mod.begin(9600);
  pinMode(RE, OUTPUT);
  pinMode(DE, OUTPUT);
    lcd.clear();
    lcd.setCursor(0,0);
      lcd.print("SOIL NUTRIENTS");
      lcd.setCursor(0,1);
      lcd.print("MONITORING");
  delay(3000);
}
 
void loop() {
 npk_check();
   //soil_check();
}
void npk_check()
{
  byte n = nitrogen();  
  delay(250) ; // Get nitrogen value
  byte p = phosphorous();
  delay(250); // Get phosphorous value
  byte k = potassium();   // Get potassium value
  delay(250); 
  // Create a formatted string of data
  char data[20];
  sprintf(data, "%d,%d,%d", n, p, k);

  // Send the string over serial to the NodeMCU
  Serial.println(data);

  delay(2000);
  lcd.clear();
    lcd.setCursor(0,0);
      lcd.print("N:");
    lcd.setCursor(2,0);
      lcd.print(n);
      lcd.setCursor(6,0);
      lcd.print("P:");
    lcd.setCursor(8,0);
      lcd.print(p);
       lcd.setCursor(11,0);
      lcd.print("mg/kg");
      lcd.setCursor(0,1);
      lcd.print("K:");
  lcd.setCursor(2,1);
      lcd.print(k);
       lcd.setCursor(7,1);
      lcd.print("mg/kg");  
  delay(2000);
}
byte nitrogen(){
  digitalWrite(DE,HIGH);
  digitalWrite(RE,HIGH);
  delay(10);
  if(mod.write(nitro,sizeof(nitro))==8){
    digitalWrite(DE,LOW);
    digitalWrite(RE,LOW);
    for(byte i=0;i<7;i++){
    //Serial.print(mod.read(),HEX);
    values[i] = mod.read();
  //  Serial.print(values[i],HEX);
    }
    //Serial.println();
  }
  return values[4];
}
 
byte phosphorous(){
  digitalWrite(DE,HIGH);
  digitalWrite(RE,HIGH);
  delay(10);
  if(mod.write(phos,sizeof(phos))==8){
    digitalWrite(DE,LOW);
    digitalWrite(RE,LOW);
    for(byte i=0;i<7;i++){
    //Serial.print(mod.read(),HEX);
    values[i] = mod.read();
   // Serial.print(values[i],HEX);
    }
    //Serial.println();
  }
  return values[4];
}
 
byte potassium(){
  digitalWrite(DE,HIGH);
  digitalWrite(RE,HIGH);
  delay(10);
  if(mod.write(pota,sizeof(pota))==8){
    digitalWrite(DE,LOW);
    digitalWrite(RE,LOW);
    for(byte i=0;i<7;i++){
    //Serial.print(mod.read(),HEX);
    values[i] = mod.read();
  //  Serial.print(values[i],HEX);
    }
   // Serial.println();
  }
  return values[4];
}
