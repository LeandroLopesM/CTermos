#include <string.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "headers/funcs.h"

int romuexercs(void) {
    char input[32];
    while(1){
        printf("\n/root/romuexercs>");
        fgets(input, 32, stdin);
        if(strstr(input,"list")) printf("\n11/05/2023  58 ln  AT6.c\n11/05/2023  10 ln  AT5.c\n13/04/2023  18 ln  AT3.c");
        else if(strstr(input,"run"))
            if(strstr(input, "AT6.c")) diadesemana();
            else if(strstr(input, "AT5.c")) convunidades();
            else if(strstr(input, "AT3.c")) parimp();
            else printf("\nERRO --> %s não existe.\n", &input[4]);
        else if (strstr(input,"enter"))
            if(strstr(input, "..")) root();
            else printf("\nERRO --> %s não existe.\n", &input[6]);
        else if (strstr(input,"exit")) exit(0);
        else if(strstr(input, "code")) code(input);
        else if(strstr(input,"clear")) system("clear");
        else printf("\nERRO --> Um erro desconhecido aconteceu.");
    }
}
