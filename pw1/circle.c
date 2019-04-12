#include<stdio.h>
#include<stdlib.h>
#include<math.h> 

#include "circle.h"
#include "point.h"

int infirst=0, insecond=0;
int insideCircle(Circle circle,Point any){
    
    return ( ((any.x - circle.center.x)*(any.x - circle.center.x) + (any.y - circle.center.y)*(any.y - circle.center.y))<(circle.radius)*(circle.radius)) ?  1 :  0;

}
int InsideIntersection(Circle firstCircle , Circle secondCircle ,Point any){
    infirst+=insideCircle(firstCircle,any);
    insecond+=insideCircle(secondCircle,any);
    if(insideCircle(firstCircle,any)==1 && insideCircle(secondCircle,any)==1) return 1;
}