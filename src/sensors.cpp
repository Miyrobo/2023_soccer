#include "sensors.h"

void BALL::get(){
    x=0;y=0;
    for(int i=0;i<NUM_balls;i++){
        value[i]=analogRead(pin[i]);
        x+=SIN16[i]*value[i];
        y+=SIN16[(i+4)%16]*value[i];
    }
    dir=atan2(x,y)*57.3;
    distance=sqrt(x*x+y*y);
}