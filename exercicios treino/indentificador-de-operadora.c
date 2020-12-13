#include <stdio.h>
#include <stdlib.h>

int main (){
    int numero,n10, n100;

    printf("Digite o numero de telefone: ");
    scanf("%d", &numero);

    if (numero/100000000==2)
    {
        printf("Rede fixa");

    }else
    {
        if (numero/10000000==91)
        {
            printf("voda phone");
        }else if (numero/10000000==96)
        {
            printf("Meo - Altice");
        }else if (numero/10000000==93)
        {
            printf("Nos");
        }else
        {
            printf("Numero incorreto");
        }
        
    } 
    
    

    
    
   
    
    
    



    return 0;
}