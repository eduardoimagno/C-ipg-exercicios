#include <stdio.h>

/*Efetuar um programa que permita converter uma letra minúscula em maiúscula e
vice-versa.*/

int main(){
    char frase[99];

        printf("Digite uma frase: ");
        gets(frase);

        for ( int i=0; frase[i];i++)
        {
            if ((frase[i] >= 'a')&&(frase[i]<='z'))
            {
                frase[i]-=32;
            }else if ((frase[i] >= 'A')&&(frase[i]<='Z'))
            {
                frase[i]+=32;
            }
        }
    printf("%s",frase);
    
    return 0;
}