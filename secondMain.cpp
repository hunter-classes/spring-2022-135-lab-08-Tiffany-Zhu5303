#include <iostream>
#include "imageio.h"
#include "funcs.h"

int main(){
  //Task D
  int imgInD[MAX_H][MAX_W], imgOutD[MAX_H][MAX_W];
  int h, w;
  std::string filename = "catIn.pgm";

  readImage(filename, imgInD, h, w);
  
  whiteBorder(imgOutD, imgInD, h, w);
  writeImage("TaskD.pgm", imgOutD, h, w);

  return 0;
}
