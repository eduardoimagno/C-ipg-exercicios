#include <stdio.h>

/*Exercicio04 – Faça um programa que dada uma temperatura em graus celsius a converta em graus
Fahrenheit.*/

int main(){

    int c,f;

    printf("qual a temperatura em celcius? ");
    scanf("%d", &c);

    f = 1.8 * c + 32;

    printf("A temperatura em Fahrenheit e : %i", f);

    return 0;
}