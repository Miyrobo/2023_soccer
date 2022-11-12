#include "Arduino.h"

#define NUM_balls 16
#define NUM_lines 25

double SIN16[16]={0.0,0.383,0.707,0.924,1.0,0.924,0.707,0.383,0,-0.383,-0.707,-0.924,-1.0,-0.924,-0.707,-0.383};

class BALL{
    public:
        int value[NUM_balls];
        void get();
        int dir;         //ボールの方向
        double distance;   //ボールまでの距離
        int x,y;
    private:
        int pin[NUM_balls]={};   //ピン番号
};

class LINE{
    public:
        int value[NUM_lines];
};

