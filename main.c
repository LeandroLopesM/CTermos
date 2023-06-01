#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

struct inherit {
    char input[32];
};

int romuexercs(void);
int calc(void);
void diadesemana(void);
void convunidades(void);
void parimp(void);
void code(struct inherit codestruct);
void unit(int);
void floatc(void);
void bhask(void);
void calcc(void);

int root(void){
    struct inherit rootstruct;
    while(1){
        printf("\n/root/>");
        fgets(rootstruct.input, 32, stdin);

        if(strstr(rootstruct.input,"list")) printf("\n07/04/2023  <DIR>  calc\n07/04/2023  <DIR>  romuexercs");
        else if(strstr(rootstruct.input,"enter")){
            if(strstr(rootstruct.input, "romuexercs")) romuexercs();
            else if(strstr(rootstruct.input, "calc")) calc();
            else printf("\nERRO --> %s não existe.\n", &rootstruct.input[6]);
        }
        else if(strstr(rootstruct.input,"help")){
            printf("\nenter |  entrar em pasta\nlist  |  listar arquivos\nhelp  |  listar comandos\nrun   |  rodar código\ncode  |  mostra o código de um arquivo");
        }
        else if(strstr(rootstruct.input,"exit")) exit(0);
        else if(strstr(rootstruct.input,"clear")) system("clear");
        else printf("\nERRO --> Comando desconhecido\n");
    }
}

void code(struct inherit codestruct){
    if(strstr(codestruct.input,"AT6.c")){
        printf("\n#include <stdio.h>\n\nint main()\n{\n    int dia;\n    printf(¨Qual dia da semana é hoje?\n 0 = domingo\n 1 = segunda-feira\n 2 = terça-feira\n 3 = quarta-feira\n 4 = quinta-feira\n 5 = sexta-feira\n 6 =sábado.\n¨);\n    scanf(¨/d¨, &dia);\n    switch(dia){\n        case 0: printf(¨É dia fim de samana!!¨); break;\n        case 1: printf(¨Ainda é dia de trabalho :(¨); break;\n        case 2: printf(¨Ainda é dia de trabalho :(¨); break;\n        case 3: printf(¨Ainda é dia de trabalho :(¨); break;\n        case 4: printf(¨Ainda é dia de trabalho :(¨); break;\n        case 5: printf(¨Sextou!¨); break;\n        case 6: printf(¨É dia fim de samana!!¨); break;\n        default: printf(¨Número inválido¨); break;\n    }*/\n    switch(dia){\n        case 0: printf(¨É domingo! Hora de preocupar sobre segunda¨); break;\n        case 1: printf(¨Dia de semana: Segunda-Feira¨); break;\n        case 2: printf(¨Dia de semana: Terça-Feira¨); break;\n        case 3: printf(¨Dia de semana: Quarta-Feira¨); break;\n        case 4: printf(¨Dia de semana: Quinta-Feira¨); break;\n        case 5: printf(¨Sextou! Mas ainda é dia de semana¨); break;\n        case 6: printf(¨Sabadão fim de samana!¨); break;\n        default: printf(¨Número inválido¨); break;\n    }*/\n    if(dia > 0 && dia < 6){\n        if(dia==1){\n            printf(¨Dia de semana: Segunda-Feira¨);\n        }\n        else if(dia==2){\n            printf(¨Dia de semana: Terça-Feira¨);\n        }\n        else if(dia==3){\n            printf(¨Dia de semana: Quarta-Feira¨);\n        }\n        else if(dia==4){\n            printf(¨Dia de semana: Quinta-Feira¨);\n        }\n        else if(dia==5){\n            printf(¨Sextou! Mas ainda é dia de semana¨);\n        }\n    }\n    else if(dia == 0 || dia == 6){\n        if(dia == 0){\n            printf(¨É domingo! Hora de preocupar sobre segunda¨);\n        }\n        else if(dia == 6){\n            printf(¨Sabadão fim de samana!¨);\n        }\n    }\n    else {\n        printf(¨Número inválido¨);\n    }\n    return 0;\n}");
        romuexercs();
    } else if(strstr(codestruct.input, "AT5.c")){
        printf("\n#include <stdio.h>      /* printf, NULL */       \n#include <math.h>\n\nint unit(int dest){\n    switch(dest){\n    case 1: printf(¨ milímetros¨); break;\n    case 2: printf(¨ centímetros¨); break;\n    case 3: printf(¨ decímetros¨); break;\n    case 4: printf(¨ metros¨); break;\n    case 5: printf(¨ decâmetros¨); break;\n    case 6: printf(¨ hectômetros¨); break;\n    case 7: printf(¨ quilômetros¨); break;\n    default: printf(¨Algo deu errado¨); break;\n}\n}\n\n\nint main (){         \n    int orig,dest;\n    float end1,dist;\n    printf(¨7 - Km (quilômetro)\n6 - Hm(hectômetro)\n5 - Dam(decâmetro)\n4 - M(metro)\n3 - Dm(decímetro)\n2 - Cm(centímetro)\n1 - Mm(milímetro)¨);\n    printf(¨\n\nConsiderando os números acima, digite NESSA ORDEM:\nDistância a ser convertida | Unidade original da distância | Unidade de destino da conversão¨);\n    printf(¨\nDigite-os separando com espaço (x y z).\n¨);\n    scanf(¨/f /d /d¨,&dist, &orig, &dest);\n    \n    if(dest < orig){\n        end1 = dist * (int)pow(10, orig - dest);\n        printf(¨/.1f¨,end1);\n        unit(dest);\n        return 1;\n    }\n    else{\n        if(dest > orig){\n            end1 = dist / (int)pow(10, dest - orig);\n            printf(¨/.3f¨,end1);\n            unit(dest);\n            return 2;\n        }\n        else if(dest == orig){\n            end1 = dest;\n            printf(¨/.1f¨,end1);\n            unit(dest);\n            return 3;\n        }\n        else{\n            printf(¨Input inválido¨);\n            unit(dest);\n            return 4;\n        }\n    }\n\n}");
        romuexercs();
    } else if(strstr(codestruct.input, "AT3.c")){
        printf("\n#include <stdio.h>\n\nint main()\n{\n    int nu;\n    int res;\n    \n    printf(¨Número: ¨);\n    scanf(¨/d¨,&nu);\n    res = nu / 2;\n    \n    if(res==0){\n        printf(¨\nSeu número é par¨);\n    }\n    else{\n        printf(¨\nSeu número é ímpar¨);\n    }\n}");
        romuexercs();
    } else if(strstr(codestruct.input, "float.c")){
        printf("\n#include <stdio.h>         \n                                \nint main (){   \n    \n    float n1;\n    char o;\n    float n2;\n    \n    printf(¨Digite sua operação desejada.\n¨);\n    scanf(¨/f /c /f¨, &n1, &o, &n2);\n    \n    switch(o){\n        case '/':\n            printf(¨/.2f / /.2f = /.2f¨,n1,n2,(n1 / n2));\n            break;\n        \n        case '*':\n            printf(¨/.2f * /.2f = /.2f¨,n1,n2,(n1 * n2));\n            break;\n        \n        case '-':\n            printf(¨/.2f - /.2f = /.2f¨,n1,n2,(n1 - n2));\n            break;\n        \n        case '+':\n            printf(¨/.2f + /.2f = /.2f¨,n1,n2,(n1 + n2));\n            break;\n        \n        default:\n        printf(¨\nOperador não suportado.¨);\n        break;\n    }\n}");
        calc();
    } else if(strstr(codestruct.input, "bhask.c")){
        printf("\n#include <stdio.h>\n#include <math.h>\n\nint main()\n{\n    int a,b,c,delta,bhas1,bhas2;\n    \n    printf(¨digitet a b e c (ax2+bx+c)\n¨);\n    scanf(¨/d /d /d¨,&a,&b,&c);\n    \n    delta = (pow(b, 2) )- (4 * (a * c));\n    \n    printf(¨\n/d\n¨,delta);\n    \n    bhas1 = (-b+sqrt(delta)) / (2*a);\n    bhas2 = (-b-sqrt(delta)) / (2*a);\n    \n    printf(¨S={/d /d}¨,bhas1,bhas2);\n    \n\n    return 0;\n}");
        calc();
    } else if(strstr(codestruct.input, "calc.c")){
        printf("\n#include <stdio.h>     \n\nint main (){                                \n    int n1;\n    char o;\n    int n2;\n    \n    printf(¨Digite a operação desejada.\n¨);\n    scanf(¨/d /c /d¨,&n1,&o,&n2);\n    \n    switch(o){\n        case '/':\n            printf(¨/d / /d = /d¨, n1, n2, (n1 / n2));\n            break;\n        case '*':\n            printf(¨/d * /d = /d¨, n1, n2, (n1 * n2));\n            break;\n        case '-':\n            printf(¨/d - /d = /d¨, n1, n2, (n1 - n2));\n            break;\n        case '+':\n            printf(¨/d + /d = /d¨, n1, n2, (n1 + n2));\n            break;\n        default:\n            printf(¨\nInput não suportado¨);\n    }\n}");
        calc();
    }






}

int calc(void){
    struct inherit calcstruct;
    while(1){
        printf("\n/root/calc>");
        fgets(calcstruct.input, 32, stdin);

        if(strstr(calcstruct.input,"list")){
            printf("\n20/04/2023  10 ln  float.c\n11/05/2023  22 ln  bhask.c\n03/04/2023  26 ln  calc.c");
        }
        else if(strstr(calcstruct.input,"run")){
            if(strstr(calcstruct.input,"float.c")) floatc();
            else if(strstr(calcstruct.input,"bhask.c")) bhask();
            else if(strstr(calcstruct.input,"calc.c")) calcc();
        }
        else if(strstr(calcstruct.input,"code")) code(calcstruct);
        else if(strstr(calcstruct.input,"exit")) exit(0);
        else if(strstr(calcstruct.input,"clear")) system("clear");
        else if (strstr(calcstruct.input,"enter")){
            if(strstr(calcstruct.input, "..")) root();
            else printf("\nERRO --> %s não existe.\n", &calcstruct.input[6]);
        }
    }
}

int romuexercs(void) {
    struct inherit romustruct;
    while(1){
        printf("\n/root/romuexercs>");
        fgets(romustruct.input, 32, stdin);
        if(strstr(romustruct.input,"list")) printf("\n11/05/2023  58 ln  AT6.c\n11/05/2023  10 ln  AT5.c\n13/04/2023  18 ln  AT3.c");
        else if(strstr(romustruct.input,"run"))
            if(strstr(romustruct.input, "AT6.c")) diadesemana();
            else if(strstr(romustruct.input, "AT5.c")) convunidades();
            else if(strstr(romustruct.input, "AT3.c")) parimp();
            else printf("\nERRO --> %s não existe.\n", &romustruct.input[4]);
        else if (strstr(romustruct.input,"enter"))
            if(strstr(romustruct.input, "..")) root();
            else printf("\nERRO --> %s não existe.\n", &romustruct.input[6]);
        else if (strstr(romustruct.input,"exit")) exit(0);
        else if(strstr(romustruct.input, "code")) code(romustruct);
        else if(strstr(romustruct.input,"clear")) system("clear");
        else printf("\nERRO --> Um erro desconhecido aconteceu.");
    }
}

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

int main ()                            
{          
    printf ("Bem vindo ao CTermos 2.0!");                       
    root();
}
