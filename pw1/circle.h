
#ifndef CIRCLE_H
#define CIRCLE_H


#include<stdio.h>
#include<stdlib.h>
#include<math.h> 
#include<time.h>
#include"point.h"



typedef struct circle
{
    Point center;
    int radius;
}Circle;

int insideCircle(Circle circle,Point any);  // return 1 (yes) else return 0
int InsideIntersection(Circle firstCircle , Circle secondCircle ,Point any); 
#endif