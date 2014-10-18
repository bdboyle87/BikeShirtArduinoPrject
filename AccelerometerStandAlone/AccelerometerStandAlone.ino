/*
  AnalogReadSerial
 Reads an analog input on pin 0, prints the result to the serial monitor 
 
 This example code is in the public domain.
 */

void setup() {
  Serial.begin(9600);
  

}

void loop() {
  int sensorValuex = analogRead(A2);
  int sensorValuey = analogRead(A1);
  int sensorValuez = analogRead(A0);
  
  Serial.println(sensorValuex, DEC);
//  Serial.println(sensorValuey, DEC);
//  Serial.println(sensorValuez, DEC);
  delay(100);
    
  
  
}
