#include <stdio.h>
#include <stdlib.h>

/* Faça programa que permita determinar se um número é divisível por 5, aplicando a
regra seguinte: um número é divisível por 5, se o último dígito é 0 ou 5.
Exemplo: 175 Sim
        809 Não*/

int main(){
    int numero, n1;

    printf("Qual numero deseja saber se e divisivel por 5:  ");
    scanf("%d",&numero);

    n1=numero %10;

    if ((n1==0)||(n1==5))
    {
        printf("%d sim",numero);
    }else{
        printf("%d nao",numero);

    }
    


    return 0 ;
}