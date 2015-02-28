#include "Arduino.h"
#include "Distance.h"

Distance::Distance(int trigPin, int echoPin) 
{
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  _trigPin = trigPin;
  _echoPin = echoPin;
}

void Distance::updateDistance()
{
  digitalWrite(_trigPin, LOW);
  delayMicroseconds(5);
  digitalWrite(_trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(_trigPin, LOW);
  
  pinMode(_echoPin, INPUT);
  int duration = pulseIn(_echoPin, HIGH);
  int distance = (duration/2) / 29.1;
  Serial.print(distance);
  Serial.print("cm");
  Serial.println();
  
  delay(250);
}

int Distance::getDistance()
{

  
  return distance; 
}




  
