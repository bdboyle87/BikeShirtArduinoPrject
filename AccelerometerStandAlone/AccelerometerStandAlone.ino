/*
  AnalogReadSerial
 Reads an analog input on pin 0, prints the result to the serial monitor 
 
 This example code is in the public domain.
 */
 //**********************************************************
//  Global Vars
//**********************************************************
int minVol = 267;
int maxVol = 400;
int accelData[3];
int timeStamp = 10;
int count = 100;
int testLED = 13;
//**********************************************************
//  SETUP LOOP
//**********************************************************

void setup() {
Serial.begin(9600);
pinMode(testLED,OUTPUT);  

}
//**********************************************************
//    MAIN LOOP
//**********************************************************
void loop() {

  readAccel();
  
  if (accelData[2]>800){
    count-=1;
    
    if (count< 0){
      count = 0;
      digitalWrite(testLED,HIGH);
      
    }
  }
  else{
    count = 100;
    digitalWrite(testLED,LOW);
  }
  
  Serial.print(accelData[0]);
   Serial.print(",");
  Serial.print(accelData[1]);
   Serial.print(",");
  Serial.println(accelData[2]);
  delay(timeStamp);
  
  
}

//**********************************************************
//    Read Accelerometer Data from Pins A1A2A3
//**********************************************************
void readAccel(){
  
  int sensorValuex = analogRead(A3);
  int sensorValuey = analogRead(A2);
  int sensorValuez = analogRead(A1);
  
  //Place in Arrays to place up
  accelData[0] = map(sensorValuex,minVol,maxVol,-1000,1000);
  accelData[1] = map(sensorValuey,minVol,maxVol,-1000,1000);
  accelData[2] = map(sensorValuez,minVol,maxVol,-1000,1000);

}
