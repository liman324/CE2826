#include <Wire.h>

void setup(){
  Wire.begin();
  }

void loop(){
  Write(0,0b10000010); // Control Register 0 || format = i2s 16bit 96kHz
  Write(1,0b10000000); // Control Register 1 || default
  // VOLUME byte 0...80 = -80...0 dB
  Write(2,0);//volume 1ch
  Write(3,0);//volume 2ch
  Write(4,0);//volume 3ch
  Write(5,0);//volume 4ch
  Write(6,0);//volume 5ch
  Write(7,0);//volume 6ch
  }  

void Write(byte reg, byte data){
  Wire.beginTransmission(0x35);
  Wire.write (reg);
  Wire.write (data);
  Wire.endTransmission();
  }
  
