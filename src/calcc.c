#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include "headers/funcs.h"

void calcc(void){
    int calccn1, calccn2;
    char calcco;
    
    printf("Digite a operação desejada.\n");
    scanf("%d %c %d",&calccn1,&calcco,&calccn2);
    
    switch(calcco){
        case '/':
            printf("%d / %d = %d", calccn1, calccn2, (calccn1 / calccn2));
            calc();
            break;
        case '*':
            printf("%d * %d = %d", calccn1, calccn2, (calccn1 * calccn2));
            calc();
            break;
        case '-':
            printf("%d - %d = %d", calccn1, calccn2, (calccn1 - calccn2));
            calc();
            break;
        case '+':
            printf("%d + %d = %d", calccn1, calccn2, (calccn1 + calccn2));
            calc();
            break;
        default:
            printf("\nInput não suportado");
            calc();
            break;
    }
}
