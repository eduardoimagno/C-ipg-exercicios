#include <stdio.h>

/*Exercicio14 – Construa um programa que escreve no ecrã o maior de dois valores introduzidos,
com o output seguinte:        Input: 5 3 Output: O maior de 5 e 3 = 5*/

int main(){
    int n1,n2;

    printf("escreva um numero: ");
    scanf("%d",&n1);
    printf("escreva outro numero: ");
    scanf("%d",&n2);

    if(n1<n2){
        printf("maior numero entre %d , %d  e o numero %d ",n1,n2,n2);
    }else{
        printf("maior numero entre %d , %d  e o numero %d ",n1,n2,n1);
    }

    return 0;
}