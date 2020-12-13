#include <stdio.h>
#include <stdlib.h>

int main (){
    int linha=0 ,coluna=0, mat[10][10];

    for ( int linha = 0; linha<3; linha++)
    {
       
        
        for (int coluna=0; coluna<3 ;coluna++)
        {
            printf("Escreva o valor que ficara na linha %d coluna %d :     ",linha,coluna);
            scanf("%d",&mat[linha][coluna]);
            
         
        }
        
    }

   for ( int linha = 0; linha<3; linha++)
    {
        
        for (int coluna=0; coluna<3 ;coluna++)
        {
            printf("%d ",mat[linha][coluna]);
        }
        
    }
    
    return 0;
}