#ifndef Distance_h
#define Distance_h

#include "Arduino.h"

class Distance{
  public:
    Distance(int trigPin, int echoPin);
    void updateDistance();
    int getDistance();
  private:
    int duration;
    int distance;
    int _trigPin;
    int _echoPin;
};

#endif
