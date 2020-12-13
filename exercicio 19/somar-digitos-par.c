#include <stdio.h>

/*Exercicio19 – Faça um programa que permita somar os dígitos pares de um valor inteiro
introduzido, pertencente ao intervalo [100, 999]. 
*/

int main(){
    int n1,n2,n3,inverte,numero,soma,a1,a2,a3;

    do
    {
       printf("Diga o numero de 100 a 999 ");
       scanf("%de",&numero);
    } while ((numero>999)&&(numero<100));

    a1=numero%10;
    inverte=numero/10;
    n1=a1%2;

    a2=inverte%10;
    inverte=numero/10;
    n2=a2%2;

    a3=inverte/10;
    n3=a3%2;

    if ((n1==0)&&(n2==0)&&(n3==0))
    {
        soma=a1+a2+a3;

        printf("%d + %d + %d = %d ",a1,a2,a3,soma);
    }else if ((n1==0)&&(n2!=0)&&(n3==0))
    {
        soma=a1+a3;

        printf(" %d + %d = %d ",a1,a3,soma);
    }else if ((n1==0)&&(n2==0)&&(n3!=0))
    {
        soma=a1+a2;

        printf("%d + %d = %d ",a1,a2,soma);
    }else if ((n1!=0)&&(n2==0)&&(n3!=0))
    {
        soma=a2;

        printf(" %d = %d ",a2,soma);
    }
    else if ((n1!=0)&&(n2!=0)&&(n3==0))
    {
        soma=a3;

        printf("%d = %d ",a3,soma);
    }
    else if ((n1!=0)&&(n2==0)&&(n3==0))
    {
        soma=a2+a3;

        printf(" %d + %d = %d ",a2,a3,soma);
    }else if ((n1==0)&&(n2!=0)&&(n3==0))
    {
        soma=a1+a3;

        printf(" %d + %d = %d ",a1,a3,soma);
    }
    
    return 0;
}