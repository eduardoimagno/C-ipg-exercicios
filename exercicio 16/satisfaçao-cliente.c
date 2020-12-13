#include <stdio.h>

/*Exercicio16 – Escrever a respetiva nota qualitativa de acordo com a seguinte tabela:

Nota Valor           Qualitativo
[0, 45]              Não Satisfaz
]45, 55]             Satisfaz Pouco
]55, 75]             Satisfaz
]75, 85]             Bom
]85, 100]            Muito Bom  */

int main(){
    int nota;

    printf("digite a nota [0 ,100]:     ");
    scanf("%d",&nota);

    if ((nota>0) && (nota<=45))
    {
        printf(" Nao satisfaz");
    }
    if ((nota>45) && (nota<=55))
    {
        printf("satisfaz pouco");
    }
    if ((nota>55) && (nota<=75))
    {
        printf("satisfaz");
    }
    if ((nota>75) && (nota<=85))
    {
        printf(" bom");
    }
    if ((nota>85) && (nota<=100))
    {
        printf("muito bom");
    }
    

    return 0;
}