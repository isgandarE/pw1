#include<stdio.h>
#include<stdlib.h>
#include<math.h> 
#include "tools.h"

int boundRandom(int lowerBound , int upperBound){
    int result = rand() % upperBound;
    while(result <= lowerBound){
        result = rand() % upperBound;
    }
    return result;
}

int max(int num1,int num2){
    if(num1>num2) return num1;
    else return num2;
}