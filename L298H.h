#ifndef L298H_H
#define L298H_H

#include <Arduino.h>

class L298H {
  public:
    L298H ();
    void Pinout(int in1,int in2,int enable);
    void goBackward();
    void goForward();
    void setSpeed(int speed);
    void stop();
    int  pin1,pin2,enable,speed;

  private: 
    int in1, in2,en;
   
};

#endif // L298H_H
