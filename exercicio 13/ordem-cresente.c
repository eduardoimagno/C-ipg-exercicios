#include <stdio.h>

/*Exercicio13 – Faça um programa que permita escrever no ecrã dois valores introduzidos
ordenados por ordem crescente.*/

int main(){
    int n1,n2;

    printf("Digite um numero: ");
    scanf("%d",&n1);
    printf("Digite outro numero: ");
    scanf("%d",&n2);

    if (n1<n2)
    {
        printf("%d , %d", n1,n2);
    }
    if (n1>n2)
    {
        printf("%d , %d", n2,n1);
    }
        


    return 0;
}
