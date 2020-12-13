#include <stdio.h>
#include <stdlib.h>

/*Calcular o factorial de um valor inteiro introduzido*/

int main(){

    int numero,n1,fatorial=1;

    printf("De qual numero quer saber o fatorial? ");
    scanf("%d",&numero);

    for (int n1=numero;n1>=1; n1=n1-1 )
    {
        fatorial*=n1;
    }

    printf("%d fatorial = %d\n",numero,fatorial);

    

    

    return 0;
}