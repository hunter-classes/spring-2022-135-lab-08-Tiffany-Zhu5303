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

void whiteBox(int imgOut[MAX_H][MAX_W], int imgIn[MAX_H][MAX_W], int h, int w){
    for(int row = 0; row < h/4; row++) {
      for(int col = 0; col < w; col++) {
	imgOut[row][col] = imgIn[row][col];
    }
  }
    for(int row = h/4; row < 3 * h / 4; row++){
      for(int col = 0; col < w/4; col++){
	imgOut[row][col] = imgIn[row][col];
      }
      for(int col = w/4; col < 3 * w / 4; col++){
	imgOut[row][col] = 255;
      }
      for(int col = 3 * w / 4; col < w; col++){
	imgOut[row][col] = imgIn[row][col];
      }
    }
    for(int row = 3 * h / 4; row < h; row++) {
      for(int col = 0; col < w; col++) {
	imgOut[row][col] = imgIn[row][col];
    }
    }
}  
