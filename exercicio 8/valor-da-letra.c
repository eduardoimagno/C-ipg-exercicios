#include <stdio.h>
#include <conio.h>

/*– Pretende-se um programa que permita a introdução de um carater e escreva o seu
valor inteiro, segundo a tabela ASCII.
*/

int main(){
    char letra;

    printf("Digite a letra: ");
    letra = getchar();

    printf("\n A letra digitada foi:  %c\n e seu valor na tabela ascii e:   %i",letra,letra);


    return 0;
}