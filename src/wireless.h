//無線通信 & コントロールパネル

#include "Arduino.h"

HardwareSerial Serial_ESP(Serial1);   //ESPとのシリアル番号 

class WIRELESS {
 public:
  bool isConnect = 0;  //接続状態
  int position;

 private:
};


class ESP32{
  public:
    void readmode(int s);
}esp;

