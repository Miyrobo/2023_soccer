#define NUM_balls 16
#define NUM_lines 25

class BALL{
    public:
        int value[NUM_balls];
        int get();
    private:
        int pin[NUM_balls]={};
};

class LINE{
    public:
        int value[NUM_lines];
};