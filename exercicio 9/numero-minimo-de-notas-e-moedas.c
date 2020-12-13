#include <stdio.h>

/*Exercicio09 – Construa um programa que permita calcular e apresentar o número de notas e
moedas mínimo existente num valor dado. */
int main (){
    int min,nota500,nota200,nota100,nota50,nota20,nota10,nota5,moeda2,moeda1, valor,min500,min200,min100,min50,min20,min10,min5,min2,min1;

    printf("qual o valor ");
    scanf("%i",&valor);

    min500=valor/500;
    valor%=500;
    min200=valor/200;
    valor%=200;
    min100=valor/100;
    valor%=100;
    min50=valor/50;
    valor%=50;
    min20=valor/20;
    valor%=20;
    min10=valor/10;
    valor%=10;
    min5=valor/5;
    valor%=5;
    min2=valor/2;
    valor%=2;
    min1=valor/1;

    printf(" min de notas de 500 : %d\n min de notas de 200 : %d\n min de notas de 100 : %d\n min de notas de 50 : %d\n min de notas de 20 : %d\n min de notas de 10 : %d\n min de notas de 5 : %d\n min de moedas de 2 : %d\n min de moedas de 1 : %d\n",min500,min200,min100,min50,min20,min10,min5,min2,min1);





    return 0;
}