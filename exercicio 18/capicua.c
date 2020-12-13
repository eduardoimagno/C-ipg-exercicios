#include <stdio.h>

/*Exercicio18 – Criar um programa que permita determinar se um valor inteiro introduzido,
pertencente ao intervalo [100, 999], é uma capicua.*/

int main(){
    int n1,n2,n3,inverte,numero,invertido;

    do
    {
        printf("digite um numero entre 100 e 999:  ");
        scanf("%d",&numero);

    } while ((numero<100)&&(numero>999));

    //ultimo numero
    n1=numero%10;
    inverte=numero/10;

    //numero do meio
    n2=inverte%10;
    inverte=numero/10;

    //primeiro numero
    n3=inverte/10;
    inverte=n3;

    invertido=n1*100+n2*10+n3;

    if (numero==invertido)
    {
        printf("\nnumero:  %d E capicua",numero);
    }
    if (numero!=invertido)
    {
        printf("numero:  %d NAO e capicua",numero);
    }
    
    
}