/*
  Autor:David Luighy Sardinha Mendes - 10/11/21
  Feito para usar dois motores com a ponte h
*/

#include <L298H.h>

  L298H::L298H() {  
    this -> speed = 20;
  }
    
    void  L298H::setSpeed(int Speed){ 
      speed = Speed;
    }

    void  L298H::Pinout(int in1,int in2,int in3,int in4,int enableA,int enableB) {
      this -> pin1 = in1;
      this -> pin2 = in2;
      this -> pin3 = in3;
      this -> pin4 = in4;
      this -> motorA = enableA;
      this -> motorB = enableB;
      pinMode(pin1, OUTPUT);
      pinMode(pin2, OUTPUT);
      pinMode(pin3, OUTPUT);
      pinMode(pin4, OUTPUT);
      pinMode(motorA,OUTPUT);
      pinMode(motorB,OUTPUT);
    }

    void  L298H::goToFront(){ 
      digitalWrite(pin1, HIGH);
      digitalWrite(pin2, LOW);
      digitalWrite(pin3, HIGH);
      digitalWrite(pin4, LOW);
      analogWrite(motorA,speed);
      analogWrite(motorB,speed);
      
    }   

    void  L298H::goToBack(){ 
      digitalWrite(pin1, LOW);
      digitalWrite(pin2, HIGH);
      digitalWrite(pin3, LOW);
      digitalWrite(pin4, HIGH);
      analogWrite(motorA,speed);
      analogWrite(motorB,speed);
      
    
    }
    
    void  L298H::goToLeft() {
      digitalWrite(pin1, HIGH);
      digitalWrite(pin2, LOW);
      digitalWrite(pin3, LOW);
      digitalWrite(pin4, HIGH);
      analogWrite(motorA,speed);
      analogWrite(motorB,speed);
    }

    void L298H::goToRight() { 
      digitalWrite(pin1, LOW);
      digitalWrite(pin2, HIGH);
      digitalWrite(pin3, HIGH);
      digitalWrite(pin4, LOW);
      analogWrite(motorA,speed);
      analogWrite(motorB,speed);
    }

    void  L298H::L298H::Stop(){ 
      digitalWrite(pin1, HIGH);
      digitalWrite(pin2, HIGH);
      digitalWrite(pin3, HIGH);
      digitalWrite(pin4, HIGH);
      analogWrite(motorA,0);
      analogWrite(motorB,0);
      
    }
 
