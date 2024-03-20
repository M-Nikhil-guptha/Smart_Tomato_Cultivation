#define BLYNK_TEMPLATE_ID "TMPL3aTtbfGVY"
#define BLYNK_TEMPLATE_NAME "IotNpk"

#define BLYNK_FIRMWARE_VERSION        "0.1.0"
#define BLYNK_PRINT Serial
#define USE_NODE_MCU_BOARD
#include "BlynkEdgent.h"
#include <SoftwareSerial.h>
#define soil A0
#define waterPump D1
#define RE 2
#define DE 0
const byte nitro[] = {0x01,0x03, 0x00, 0x1E, 0x00, 0x01, 0xe4, 0x0c};
const byte phos[] = {0x01,0x03, 0x00, 0x1F, 0x00, 0x01, 0xB5, 0xCC};
const byte pota[] = {0x01,0x03, 0x00, 0x20, 0x00, 0x01, 0x85, 0xC0};
 

byte values[11];
SoftwareSerial mod(14,12);

WidgetLED pump(V1);
WidgetLCD vLcd(V2);

float soilLevel, soilR;
float npkValue; // Variable to store NPK sensor reading
void setup() {
  Serial.begin(9600);
  mod.begin(9600);
  pinMode(RE, OUTPUT);
  pinMode(DE, OUTPUT);
  pinMode(waterPump, OUTPUT);
  digitalWrite(waterPump, LOW);
  BlynkEdgent.begin();
  delay(2000);
}
void sendSensor() {
  readSoil();

  if (soilLevel >= 80) {
    digitalWrite(waterPump, HIGH);
    Blynk.virtualWrite(V2, "Water Pump OFF");
    pump.off();
  }

  if (soilLevel < 20) {
    digitalWrite(waterPump, LOW);
    Blynk.virtualWrite(V2, "Water Pump ON");
    pump.on();
  }
}

void readSoil() {
  soilR = analogRead(soil);
  Serial.println(soilR);
  soilLevel = map(soilR, 330, 1024, 100, 0); // Adjust soil level here
  Serial.println(soilLevel);
  Blynk.virtualWrite(V0, soilLevel);
  delay(1000);
}


byte nitrogen(){
  digitalWrite(DE,HIGH);
  digitalWrite(RE,HIGH);
  delay(10);
  if(mod.write(nitro,sizeof(nitro))==8){
    digitalWrite(DE,LOW);
    digitalWrite(RE,LOW);
    for(byte i=0;i<7;i++){
    Serial.print(mod.read(),HEX);
    values[i] = mod.read();
    //Serial.print(values[i],HEX);
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
    //Serial.print(values[i],HEX);
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
    //Serial.print(values[i],HEX);
    }
    Serial.println();
  }
  return values[4];
}
void loop() {
  BlynkEdgent.run();
  sendSensor();
  byte val1,val2,val3;
  val1 = nitrogen();
  delay(250);
  val2 = phosphorous();
  delay(250);
  val3 = potassium();
  delay(250);

  // Print values to the serial monitor
  Serial.print("Nitrogen: ");
  Serial.print(val1);
  Serial.println(" mg/kg");
  Serial.print("Phosphorous: ");
  Serial.print(val2);
  Serial.println(" mg/kg");
  Serial.print("Potassium: ");
  Serial.print(val3);
  Serial.println(" mg/kg");
  
  delay(2000);

}
