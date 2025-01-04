#ifndef GRASPTC1_H_
#define GRASPTC1_H_

#include <graphics.h>

extern int X__max, Y__max, foregrcolor, backgrcolor, colorsum;
extern float x_max, y_max, horfact, vertfact;

void initgr(void);
int IX(float x);
int IY(float y);

void move(float x, float y);
void draw(float x, float y);
void line_uc(float x1, float y1, float x2, float y2);
void endgr(void);
void invertpixel(int X, int Y);

#endif /* GRASPTC1_H_ */