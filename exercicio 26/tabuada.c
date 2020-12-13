#include <stdio.h>

/* Escrever a tabuada à escolha do utilizador.*/

int main(){

    int numero,tabuada,i=0;

    printf("De qual numero deseja ver a tabuada  ");
    scanf("%d",&numero);

    for ( int i=0; i<=10;i++)
    {
        tabuada=numero*i ;

        printf("%d x %d = %d\n", numero,i,tabuada);
    }
    

    return 0;
}