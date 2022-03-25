#include <iostream>
#include "imageio.h"
#include "funcs.h"

int main(){
  
  int imgIn[MAX_H][MAX_W];
  int h, w;
  std::string filename = "catIn.pgm";

  readImage(filename, imgIn, h, w);

  int imgOut[MAX_H][MAX_W];

  for(int row = 0; row < h; row++) {
    for(int col = 0; col < w; col++) {
      imgOut[row][col] = imgIn[row][col];
      imgOut[row][col] = 255 - imgOut[row][col];
    }
  }

  writeImage("TaskA.pgm", imgOut, h, w);

  return 0;
}
