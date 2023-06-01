#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include "headers/funcs.h"

void diadesemana(void) {
    int dia;
    printf("Qual dia da semana é hoje?\n 0 = domingo\n 1 = segunda-feira\n 2 = terça-feira\n 3 = quarta-feira\n 4 = quinta-feira\n 5 = sexta-feira\n 6 =sábado.\n");
    scanf("%d", &dia);
    switch(dia){
        case 0: printf("É domingo! Hora de preocupar sobre segunda"); break;
        case 1: printf("Dia de semana: Segunda-Feira"); break;
        case 2: printf("Dia de semana: Terça-Feira"); break;
        case 3: printf("Dia de semana: Quarta-Feira"); break;
        case 4: printf("Dia de semana: Quinta-Feira"); break;
        case 5: printf("Sextou! Mas ainda é dia de semana"); break;
        case 6: printf("Sabadão fim de samana!"); break;
        default: printf("Número inválido"); break;
    }
    romuexercs();
}
