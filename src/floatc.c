#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include "headers/funcs.h"

void floatc(void){
    
    float floatcn1;
    char floatco;
    float floatcn2;
    
    printf("Digite sua operação desejada.\n");
    scanf("%f %c %f", &floatcn1, &floatco, &floatcn2);
    
    switch(floatco){
        case '/':
            printf("%.2f / %.2f = %.2f",floatcn1,floatcn2,(floatcn1 / floatcn2));
            calc();
            break;
        
        case '*':
            printf("%.2f * %.2f = %.2f",floatcn1,floatcn2,(floatcn1 * floatcn2));
            calc();
            break;
        
        case '-':
            printf("%.2f - %.2f = %.2f",floatcn1,floatcn2,(floatcn1 - floatcn2));
            calc();
            break;
        
        case '+':
            printf("%.2f + %.2f = %.2f",floatcn1,floatcn2,(floatcn1 + floatcn2));
            calc();
            break;
        
        default:
            printf("\nOperador não suportado.");
            calc();
            break;
    }
}
