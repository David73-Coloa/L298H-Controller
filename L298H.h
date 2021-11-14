#ifndef L298H_H
#define L298H_H

#include <Arduino.h>

class L298H {
  public:
    L298H ();
    void Pinout(int in1,int in2,int in3,int in4,int enableA,int enableB);
    void goToBack();
    void goToFront();
    void goToRight();
    void goToLeft();
    void setSpeed(int speed);
    void Stop();

  private: 
    int in1, in2, in3, in4, enableA,enableB,speed,
    pin1,pin2,pin3,pin4,motorA,motorB;
};

#endif // L298H_H
