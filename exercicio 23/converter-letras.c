#include <stdio.h>

/*Efetuar um programa que permita converter uma letra minúscula em maiúscula e
vice-versa.*/

int main(){
    char letra[99];

    for ( int i=0; i <= 99; i++)
    {
        printf(" escreva uma letra:  ");
        scanf("%s",&letra);
        if ((letra >= 'a')&&(letra<='z'))
        {
            letra-=32;
        }
        if ((letra >= 'A')&&(letra<='Z'))
        {
            letra+=32;
        }
    }
    

    printf("%s",letra);
    
    


    return 0;
}