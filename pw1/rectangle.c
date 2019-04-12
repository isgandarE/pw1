#include<stdio.h>
#include<stdlib.h>
#include<math.h> 

#include "rectangle.h"
#include "circle.h"

Rect defineRect(Circle firstCircle , Circle secondCircle){
    Rect rectangular;

    if (firstCircle.center.x>secondCircle.center.x) {
        rectangular.xMax= firstCircle.center.x + firstCircle.radius;
        rectangular.xMin=secondCircle.center.x - secondCircle.radius;
    }
    else
    {
        rectangular.xMax= secondCircle.center.x + secondCircle.radius;
        rectangular.xMin= firstCircle.center.x - firstCircle.radius;
    }

    if (firstCircle.center.y>secondCircle.center.y) {
        rectangular.yMax= firstCircle.center.y + firstCircle.radius;
        rectangular.yMin=secondCircle.center.y - secondCircle.radius;
    }
    else
    {
        rectangular.yMax= secondCircle.center.y + secondCircle.radius;
        rectangular.yMin= firstCircle.center.y - firstCircle.radius;
    }

    return rectangular;
    
}

int rectArea(Rect rectangle){
    return (rectangle.xMax-rectangle.xMin)*(rectangle.yMax-rectangle.yMin);
}