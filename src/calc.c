#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include "headers/funcs.h"

int calc(void){
    char input[32];
    while(1){
        printf("\n/root/calc>");
        fgets(input, 32, stdin);

        if(strstr(input,"list")){
            printf("\n20/04/2023  10 ln  float.c\n11/05/2023  22 ln  bhask.c\n03/04/2023  26 ln  calc.c");
        }
        else if(strstr(input,"run")){
            if(strstr(input,"float.c")) floatc();
            else if(strstr(input,"bhask.c")) bhask();
            else if(strstr(input,"calc.c")) calcc();
        }
        else if(strstr(input,"code")) code(input);
        else if(strstr(input,"exit")) exit(0);
        else if(strstr(input,"clear")) system("clear");
        else if (strstr(input,"enter")){
            if(strstr(input, "..")) root();
            else printf("\nERRO --> %s não existe.\n", &input[6]);
        }
    }
}
