#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include "headers/funcs.h"


void bhask(void){
    int a1,b1,c1,delta,bhas1,bhas2;
    
    printf("digitet a b e c (ax2+bx+c)\n");
    scanf("%d %d %d",&a1,&b1,&c1);
    
    delta = (pow(b1, 2) )- (4 * (a1 * c1));
    
    printf("\n%d\n",delta);
    
    bhas1 = (-b1+sqrt(delta)) / (2*a1);
    bhas2 = (-b1-sqrt(delta)) / (2*a1);
    
    printf("S={%d %d}",bhas1,bhas2);
    calc();
}
