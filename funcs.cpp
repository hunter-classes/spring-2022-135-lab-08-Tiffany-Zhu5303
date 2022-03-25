#include <iostream>
#include <cassert>
#include <cstdlib>
#include <fstream>

#include "funcs.h"
#include "imageio.h"

void inverse(int imgOut[MAX_H][MAX_W], int imgIn[MAX_H][MAX_W], int h, int w){
    for(int row = 0; row < h; row++) {
      for(int col = 0; col < w; col++) {
	imgOut[row][col] = imgIn[row][col];
	imgOut[row][col] = 255 - imgOut[row][col];
    }
  }
}

void halfInverse(int imgOut[MAX_H][MAX_W], int imgIn[MAX_H][MAX_W], int h, int w){
   for(int row = 0; row < h; row++) {
     for(int col = 0; col < w/2; col++){
       imgOut[row][col] = imgIn[row][col];
     }
      for(int col = w/2; col < w; col++) {
	imgOut[row][col] = imgIn[row][col];
	imgOut[row][col] = 255 - imgOut[row][col];
    }
  }
}
