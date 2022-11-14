//便利機能等

#include "Arduino.h"

#define TIMER_MAX 50    //タイマーの数

class TIMER{
  public:
    void reset(int n);
    unsigned long get(int n);
  private:
    unsigned long s_tim[TIMER_MAX];
};


unsigned long TIMER::get(int n){
  return millis()-s_tim[TIMER_MAX];
}

void TIMER::reset(int n){
  s_tim[n]=millis();
}

