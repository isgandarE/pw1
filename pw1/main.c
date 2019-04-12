#include<stdio.h>
#include<stdlib.h>
#include<math.h> 

#include "circle.c"
#include "rectangle.c"
#include "tools.c"
#include "point.h"
int main(){
    int total=10000;
        Circle first;
        Circle second;
        first.center.x=35;first.center.y=37;first.radius=15;
        second.center.x=31;second.center.y=33;second.radius=10;
        Rect rectangular=defineRect(first,second);              
        srand(time(NULL));                          
    for(size_t i = 0; i < total; i++)
    {
        Point any;
        any.x=boundRandom(rectangular.xMin , rectangular.xMax);
        any.y=boundRandom(rectangular.yMin , rectangular.yMax);
        if(InsideIntersection(first,second,any)==1) {NumbOfPointsInsideIntersection++;}
    }
    int areaOfRectangle=rectArea(rectangular);
    int areaOfIntersection=NumbOfPointsInsideIntersection * areaOfRectangle / total;

    printf("total %d \t\t\tareaRectangular %d\n",total,areaOfRectangle);
    printf("inside intersection %d \tareaIntersection %d\n",NumbOfPointsInsideIntersection,areaOfIntersection);
    
}