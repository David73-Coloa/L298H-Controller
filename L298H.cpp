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

    void  L298H::Pinout(int in1,int in2,int en) {
      this -> pin1 = in1;
      this -> pin2 = in2;
      this -> enable = en;
      pinMode(pin1, OUTPUT);
      pinMode(pin2, OUTPUT);
      pinMode(enable,OUTPUT);
    }

    
    void  L298H::goForward(){ 
      digitalWrite(pin1, HIGH);
      digitalWrite(pin2, LOW);
      analogWrite(enable,speed);
      
    }   

    void  L298H::goBackward(){ 
      digitalWrite(pin1, LOW);
      digitalWrite(pin2, HIGH);
      analogWrite(enable,speed);
      
    }

    void L298H::stop() {
      digitalWrite(pin1,LOW);
      digitalWrite(pin2,LOW);
      analogWrite(enable,0);
    }
 
