#include <stdio.h>
#include <stdlib.h>

/*Faça programa que permita determinar se um número é divisível por 3, aplicando a
regra seguinte: um número é divisível por 3, se a soma dos seus dígitos é divisível por 3.

Exemplo: 381 (3 + 8 + 1 = 12 / 3 = 4 ) Sim
217 (2 + 1 + 7 = 10 / 3 = 3,33) Não
*/

/*OBS: o algoritimo foi feito com array no objetivo de treinar*/

int main(){
    int numero, n[100],i=0,soma=0, resultado,numero2;

    printf("Digite um numero:  ");
    scanf("%d", &numero);

    numero2=numero;

    
    for (int i = 0; i<n[100];i++)
    {
        n[i]=numero%10;
        numero/=10;
        soma+=n[i];
        switch (numero)
        {
        case 1: soma+=1; break;
        }
    }
    

    if (soma%3==0)
    {
        printf("%d E divisivel por 3\n",numero2);
    }else{
        printf("%d NAO e divisivel por 3\n",numero2);
    }

    printf(" soma   %d\n ", soma);

    printf("%d",i);

    





    return 0;
}
    