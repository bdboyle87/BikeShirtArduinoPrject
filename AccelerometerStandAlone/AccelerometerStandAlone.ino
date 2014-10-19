/*
  AnalogReadSerial
 Reads an analog input on pin 0, prints the result to the serial monitor 
 
 This example code is in the public domain.
 */
int minVol = 267;
int maxVol = 400;
void setup() {
  Serial.begin(9600);
  

}

void loop() {
  int sensorValuex = analogRead(A3);
  int sensorValuey = analogRead(A2);
  int sensorValuez = analogRead(A1);
  
  int gReadX = map(sensorValuex,minVol,maxVol,-1000,1000);
  int gReadY = map(sensorValuey,minVol,maxVol,-1000,1000);
  int gReadZ = map(sensorValuez,minVol,maxVol,-1000,1000);
  
  Serial.print(gReadX);
   Serial.print(",");
  Serial.print(gReadY);
   Serial.print(",");
  Serial.println(gReadZ);
  delay(10);
    
  
  
}
