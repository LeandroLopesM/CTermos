#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include "headers/funcs.h"

void unit(int dest){
    switch(dest){
        case 1: printf(" milímetros"); break;
        case 2: printf(" centímetros"); break;
        case 3: printf(" decímetros"); break;
        case 4: printf(" metros"); break;
        case 5: printf(" decâmetros"); break;
        case 6: printf(" hectômetros"); break;
        case 7: printf(" quilômetros"); break;
        default: printf("Algo deu errado"); break;
    }
}
