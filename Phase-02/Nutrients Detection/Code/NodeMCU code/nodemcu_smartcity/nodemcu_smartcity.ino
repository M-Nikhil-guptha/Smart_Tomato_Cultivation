#define BLYNK_TEMPLATE_ID "TMPL3aTtbfGVY"
#define BLYNK_TEMPLATE_NAME "IotNpk"

#define BLYNK_FIRMWARE_VERSION        "0.1.0"
#define BLYNK_PRINT Serial
#define USE_NODE_MCU_BOARD
#include "BlynkEdgent.h"
#include <SoftwareSerial.h>
#define soil A0
#define waterPump D1

SoftwareSerial mySerial(12, 14); // RX, TX
BlynkTimer timer;
float soilLevel, soilR;

WidgetLED pump(V1);
WidgetLCD vLcd(V2);


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
  soilLevel = map(soilR, 275, 1024, 100, 0); // Adjust soil level here
  Serial.println(soilLevel);
  Blynk.virtualWrite(V0, soilLevel);
  delay(1000);
}
void sendNPKToBlynk(int n, int p, int k) {
    float ni = ((float)n / 255.0) * 100;  // Current percentage of max concentration
    float idealN_Percent = (20.0 / 255.0) * 100;
    float ph = ((float)p / 255.0) * 100;  
    float idealP_Percent = (10.0 / 255.0) * 100;
    float po = ((float)k / 255.0) * 100;  
    float idealK_Percent = (20.0 / 255.0) * 100;

    Blynk.virtualWrite(V3, ni);  
    Blynk.virtualWrite(V4, ph); 
    Blynk.virtualWrite(V5, po);

    // Check if actual percentage is within ±5% of the ideal percentage
    if ((ni - idealN_Percent) < 5 || (ph - idealP_Percent) < 5||(po - idealK_Percent) < 5){
    if ((ni - idealN_Percent) < 5)  {
        
        Blynk.virtualWrite(V6, "Nitrogen is less");
        delay(1000);

        // Here, activate devices to adjust levels
    }
    if ((ph - idealP_Percent) < 5)  {
        
        Blynk.virtualWrite(V6, "Phosphorus is less"); 
        delay(1000);
    }
    if ((po - idealK_Percent) < 5) {
        
        Blynk.virtualWrite(V6, "Potassium is less"); 
        delay(1000);
    }
    }
    else {
        Blynk.virtualWrite(V6,"NPK levels are balanced.");
    }  
}
void setup() {
    Serial.begin(19200);         // Initialize the hardware serial
    mySerial.begin(9600);        // Initialize the software serial
    BlynkEdgent.begin(); // Connect to Blynk
    
  
  // Set up the LCD (0 is for the first line)
    
    

    while(!Serial) {
        ; // wait for serial port to connect. Needed for native USB
    }
    Serial.println("Serial Connection Established");

    // Setup a function to be called every 10 seconds
    timer.setInterval(250L, []() {
        if (mySerial.available()) {
            String inputString = mySerial.readStringUntil('\n'); // Read the incoming data until newline
            Serial.print("Received: ");
            Serial.println(inputString);

            int n, p, k;
            if (sscanf(inputString.c_str(), "%d,%d,%d", &n, &p, &k) == 3) {
                // Optionally, print values to verify
                Serial.print("N: ");
                Serial.println(n);
                Serial.print("P: ");
                Serial.println(p);
                Serial.print("K: ");
                Serial.println(k);

                // Send data to Blynk
                sendNPKToBlynk(n, p, k);
                Blynk.virtualWrite(V7, "Vegetative: 0-6wks R:20N-10P-10K");
                Blynk.virtualWrite(V8, "Fruit dev: 6-8wks R:10N-20P-20K");
                Blynk.virtualWrite(V9, "Ripening: 8-10wks R:5N-10P-15K");
            } else {
                //Serial.println("Error parsing input string");
            }
        }
    });
}

void loop() {
    sendSensor();
    BlynkEdgent.run();   // Initiates Blynk
    timer.run();   // Initiates SimpleTimer
}