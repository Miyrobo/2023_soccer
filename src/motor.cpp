#include "motor.h"

void MOTOR::cal_power(int dir, int speed) {
  for (int i = 0; i < 4; i++) {
    m_speed[i] = sin((dir - _angle[i]) / 57.3) * speed;
  }
}

void MOTOR::pwm_out(){
}

void MOTOR::set_power(int m1,int m2,int m3,int m4){
  m_speed[0]=m1;
  m_speed[1]=m2;
  m_speed[2]=m3;
  m_speed[3]=m4;
}