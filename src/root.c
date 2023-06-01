#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "headers/funcs.h"

int root(void){
    char input[32];
    while(1){
        printf("\n/root/>");
        fgets(input, 32, stdin);

        if(strstr(input,"list")) printf("\n07/04/2023  <DIR>  calc\n07/04/2023  <DIR>  romuexercs");
        else if(strstr(input,"enter")){
            if(strstr(input, "romuexercs")) romuexercs();
            else if(strstr(input, "calc")) calc();
            else printf("\nERRO --> %s não existe.\n", &input[6]);
        }
        else if(strstr(input,"help")){
            printf("\nenter |  entrar em pasta\nlist  |  listar arquivos\nhelp  |  listar comandos\nrun   |  rodar código\ncode  |  mostra o código de um arquivo");
        }
        else if(strstr(input,"exit")) exit(0);
        else if(strstr(input,"clear")) system("clear");
        else printf("\nERRO --> Comando desconhecido\n");
    }
}
