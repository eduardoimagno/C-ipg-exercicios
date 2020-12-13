#include <stdio.h>

/*Exercicio15 – Produza um programa que escreve no ecrã o maior de três valores introduzidos,
com o output seguinte:      Input: 5 3 9 Output: O maior de 5 e 3 e 9 = 9*/

int main(){
    int n1,n2,n3;

    printf("escreva um numero: ");
    scanf("%d",&n1);
    printf("escreva outro numero: ");
    scanf("%d",&n2);
    printf("escreva mais um numero: ");
    scanf("%d",&n3);

    if(n1>n2 && n1>n3){
        printf("maior numero entre %d , %d, %d  e o numero %d ",n1,n2,n3,n1);
    }
    if(n1<n2 && n2>n3){
        printf("maior numero entre %d , %d, %d  e o numero %d ",n1,n2,n3,n2);
    }
    if(n1<n3 && n2<n3){
        printf("maior numero entre %d , %d, %d  e o numero %d ",n1,n2,n3,n3);
    }

    return 0;
}