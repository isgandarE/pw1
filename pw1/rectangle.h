
#ifndef RECTANGLE_H
#define RECTANGLE_H
#include<stdio.h>
#include<stdlib.h>
#include<math.h> 


typedef struct rect
{
    int xMax;
    int yMax;
    int xMin;
    int yMin;
}Rect;

Rect defineRect(Circle firstCircle , Circle secondCircle);
int rectArea(Rect rectangle);
#endif