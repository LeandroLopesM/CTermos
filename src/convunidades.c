#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include "headers/funcs.h"
#include <math.h>

void convunidades(void) {
    int orig,dest;
    float end1,dist;
    printf("7 - Km (quilômetro)\n6 - Hm(hectômetro)\n5 - Dam(decâmetro)\n4 - M(metro)\n3 - Dm(decímetro)\n2 - Cm(centímetro)\n1 - Mm(milímetro)");
    printf("\n\nConsiderando os números acima, digite NESSA ORDEM:\nDistância a ser convertida | Unidade original da distância | Unidade de destino da conversão");
    printf("\nDigite-os separando com espaço (x y z).\n");
    scanf("%f %d %d",&dist, &orig, &dest);
    
    if(dest < orig){
        end1 = dist * (int)pow(10, orig - dest);
        printf("%.1f",end1);
        unit(dest);
        romuexercs();
    }
    else{
        if(dest > orig){
            end1 = dist / (int)pow(10, dest - orig);
            printf("%.3f",end1);
            unit(dest);
            romuexercs();
        }
        else if(dest == orig){
            end1 = dest;
            printf("%.1f",end1);
            unit(dest);
            romuexercs();
        }
        else{
            printf("Input inválido");
            unit(dest);
            romuexercs();
        }
    }
}
