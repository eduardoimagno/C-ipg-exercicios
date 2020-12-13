#include <stdio.h>

/*Exercicio11 – Faça um programa que permita somar os dígitos de um valor inteiro introduzido,
pertencente ao intervalo [100, 999]. */

int main(){
    int valor,n1,n2,n3,vf;

    printf("qual o valor: ");
    scanf("%d",&valor);


    if ((valor>=100)&&(valor<=999))
    {
        n1=valor%10;
        valor/=10;
        n2=valor%10;
        valor/=10;
        n3=valor;
        vf=n1+n2+n3;
        
        printf(" %d + %d + %d = %d", n1,n2,n3,vf);
    }else{
        printf("Digite um valor entre 100 e 999");
        
    }
    
   
    

    return 0;
}