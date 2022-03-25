#pragma once
#include "imageio.h"

void inverse(int imgOut[MAX_H][MAX_W], int imgIn[MAX_H][MAX_W], int h, int w);
void halfInverse(int imgOut[MAX_H][MAX_W], int imgIn[MAX_H][MAX_W], int h, int w);
void whiteBox(int imgOut[MAX_H][MAX_W], int imgIn[MAX_H][MAX_W], int h, int w);
void whiteBorder(int imgOut[MAX_H][MAX_W], int imgIn[MAX_H][MAX_W], int h, int w);
void border(int imgOut[MAX_H][MAX_W], int imgIn[MAX_H][MAX_W], int h, int w);
