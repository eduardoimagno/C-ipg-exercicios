#include <stdio.h>
#include <stdlib.h>

/* Faça programa que permita determinar se um número é divisível por 4, aplicando a
regra seguinte: um número é divisível por 4, se os dois últimos dígitos são um número divisível
por 4.
Exemplos: 1312 (12 / 4 = 3) Sim
7018 (18 / 4 = 4,5) Não*/

/*OBS: o resultado se e divisivel por 4 esta certo, porem as casas decimais de "soma2" esta mal e nao sei o motivo*/

int main (){

    int numero,n1,n2,soma, identificador,numero2;
    float soma2;

    printf("Qual numero deseja saber se e divisivel por 4:  ");
    scanf("%d",&numero);

    numero2=numero;
    n1=numero%10;
    numero/=10;
    n2=numero%10;
    soma=(n2*10)+n1;

    identificador=soma%4;
    soma2=soma/4;

    if (identificador==0)
    {
        printf("%d (%d / 4 = %.0f), sim", numero2,soma,soma2);
    }else{
        printf("%d (%d / 4 = %.2f), nao", numero2,soma,soma2);
    }
    
   


    return 0;
}
