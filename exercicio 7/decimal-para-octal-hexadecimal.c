#include <stdio.h>

/*Exercicio07 – Faça um programa que permita a conversão de um valor inteiro introduzido, no seu
respetivo valor octal (base 8) e hexadecimal (base 16).*/

int main (){
    int de;

    printf("qual o valor em decimal? ");
    scanf("%d", &de);

    printf("valor em octal: %o \n valor em hexadecimal %x", de,de);

    return 0;
}