#include<SoftwareSerial.h>

SoftwareSerial BLU(4,5);

#define redpin 9
#define greenpin 11
#define bluepin 12

void setup(){
  //serial setup

  Serial.begin(9600);
  Serial.println("-=HC-05 Bluetooth RGB LED =-");
  //BT serial setup

  BLU.begin(9600);
  BLU.println("-=HC-05 Bluetooth RGB LED =-");
  //RGB setup

  pinMode(redpin,OUTPUT);
  pinMode(greenpin,OUTPUT);
  pinMode(bluepin,OUTPUT);

  //rgb test

  setColor(255,0,0);
  delay(500);
   setColor(0,255,0);
  delay(500);
   setColor(0,0,255);
  delay(500);
  setColor(255,255,255);
  
}

void loop(){

while(BLU.available()>0){
  int redInt=BLU.parseInt();
  int greenInt=BLU.parseInt();
  int blueInt=BLU.parseInt();


  redInt=constrain(redInt,0,255);
  greenInt=constrain(greenInt,0,255);
  blueInt=constrain(blueInt,0,255);

  if(BLU.available()>0){
    setColor(redInt,greenInt,blueInt);
    Serial.print("RED: ");
    Serial.print(redInt);
    Serial.print("Green: ");
    Serial.print(greenInt);
    Serial.print("Blue: ");
    Serial.print(blueInt);
    Serial.println();
    BLU.flush();
    }


  
  }

  
  }
  void setColor(int red,int green,int blue){
    analogWrite(redpin,red);
    analogWrite(greenpin,green);
    analogWrite(bluepin,blue);
    
    
    }
