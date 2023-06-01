#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include "headers/funcs.h"

void parimp(void){
    int pnum;
    printf("Digite um número: ");
    scanf("%d", &pnum);
    if(pnum % 2 == 0){
        printf("%d é par", pnum);
        romuexercs();
    }
    else{
        printf("%d é ímpar", pnum);
        romuexercs();
    }
}
