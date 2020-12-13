#include <stdio.h>

/*Exercicio05 – Faça um programa que converta uma temperatura em graus celsius para graus
kelvin.*/

int main(){
    int c, k;

    printf("qual a temperatura em celcius ? ");
    scanf("%d",&c);

    k =c+273;

    printf("a temperatura em kelvin e: %d",k);

    return 0;
}