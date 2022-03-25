#include <iostream>
#include "imageio.h"
#include "funcs.h"

int main(){
  //Task A
  int imgIn[MAX_H][MAX_W];
  int h, w;
  std::string filename = "catIn.pgm";

  readImage(filename, imgIn, h, w);

  int imgOut[MAX_H][MAX_W];
  
  inverse(imgOut, imgIn, h, w);
  writeImage("TaskA.pgm", imgOut, h, w);

  //Task B
  int imgInB[MAX_H][MAX_W], imgOutB[MAX_H][MAX_W];

  readImage(filename, imgInB, h, w);
  
  halfInverse(imgOutB, imgInB, h, w);
  writeImage("TaskB.pgm", imgOutB, h, w);

  //Task C
  int imgInC[MAX_H][MAX_W], imgOutC[MAX_H][MAX_W];

  readImage(filename, imgInC, h, w);
  
  whiteBox(imgOutC, imgInC, h, w);
  writeImage("TaskC.pgm", imgOutC, h, w);

  return 0;
}
