#include "MAX30105.h"
#include "heartRate.h"

int frame = 0;
int x;
int count=0;
int a[20];

char data = 0; 
void printValue();

#define LED_PIN 13
bool blinkState = false;

MAX30105 particleSensor;

const byte RATE_SIZE = 10; //Increase this for more averaging. 4 is good.
byte rates[RATE_SIZE]; //Array of heart rates
byte rateSpot = 0;
long lastBeat = 0; //Time at which the last beat occurred

float beatsPerMinute;
int beatAvg;
unsigned long pt = 0;

void setup(void) {
  Serial.begin(9600);
  accelgyro.initialize();
  particleSensor.setup(); //Configure sensor with default settings
  particleSensor.setPulseAmplitudeRed(0x6A); //Turn Red LED to low to indicate sensor is running
  particleSensor.setPulseAmplitudeGreen(0x4A); //Turn off Green LED
}

void loop(void) {

  //OPTICL HEART RATE SENSOR
  unsigned long ct = millis();
  long irValue = particleSensor.getIR();
    
  if (checkForBeat(irValue) == true)
  {
    //We sensed a beat!
   
    long delta = millis() - lastBeat;
    lastBeat = millis();
    
    beatsPerMinute = 60 / (delta / 1000.0);
  
  }
  if(ct-pt>=10000){
    printValue();
    pt = ct;
    }
  if (irValue < 50000){
    Serial.print("\n No finger?");
    pt=ct;  
  }

  if(Serial.available() > 0)      // Send data only when you receive data:
   {
      data = Serial.read();        //Read the incoming data & store into data
      Serial.print(data);          //Print Value inside data in Serial monitor
      Serial.print("\n");     
}
 
x = analogRead(A0);

a[count]=x;
count++;

if(count==21)
{ 
 count=0;
 int z;
 for(int i=0; i<=20; i++)
 {
  z += a[i];
 }
 } 
 delay(30);  
 frame++;
 if(frame==14)
 frame=0;
}

void printValue(){

  Serial.print("\nBPM=");
  Serial.print(beatsPerMinute);
  
}
