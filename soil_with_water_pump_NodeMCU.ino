

#define BLYNK_TEMPLATE_ID "TMPLpnodS6Oj"
#define BLYNK_DEVICE_NAME "smart"
#define BLYNK_AUTH_TOKEN "xxy7kzEQeXd0VyxyrrZXYw5G6RbVKXFa"

#define BLYNK_FIRMWARE_VERSION        "0.1.0"
#define BLYNK_PRINT Serial
#define USE_NODE_MCU_BOARD
#include "BlynkEdgent.h"


#define soil A0
#define waterPump D7
WidgetLED pump(V1);

float soilLevel, soilR; 


WidgetLCD vLcd(V2);

void sendSensor()
{
  readSoil();
  if(soilLevel>=80)
  {    
    digitalWrite(waterPump, LOW);
    vLcd.print(0,0,"Water Pump OFF");
    pump.off();
  }
  
 if(soilLevel<20)
  {    
    digitalWrite(waterPump, HIGH);
    vLcd.print(0,0, "Water Pump ON ");
    pump.on();
  }
}
void readSoil()
{
  soilR=analogRead(soil);  
  Serial.println(soilR);
  soilLevel=map(soilR, 0, 1024, 100,0); // ajust soil level here
  Serial.println(soilLevel);
  Blynk.virtualWrite(V0, soilLevel);
  delay(1000);
}
void setup()
{
  Serial.begin(9600);
  pinMode(waterPump, OUTPUT);
  digitalWrite(waterPump, LOW);
  BlynkEdgent.begin();
  delay(2000); 

}

void loop() 
{
  BlynkEdgent.run();

sendSensor();
}
