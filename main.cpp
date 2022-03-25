#include <iostream>
#include "imageio.h"
#include "funcs.h"

int main(){
  
  int imgIn[MAX_H][MAX_W];
  int h, w;
  std::string filename = "catIn.pgm";

  readImage(filename, imgIn, h, w);

  int imgOut[MAX_H][MAX_W];

  inverse(imgOut, imgIn, h, w);

  writeImage("TaskA.pgm", imgOut, h, w);

  return 0;
}
