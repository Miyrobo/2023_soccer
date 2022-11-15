//便利機能等
#ifndef FUNCTIONS_H
#define FUNCTIONS_H
#include "Arduino.h"

class TIMER{
  public:
    void reset();
    unsigned long get();
  private:
    unsigned long s_tim;
};


unsigned long TIMER::get(){
  return millis()-s_tim;
}

void TIMER::reset(){
  s_tim=millis();
}

#endif