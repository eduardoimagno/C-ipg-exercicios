#include <stdio.h>

int main(){
    int n1,n2,n3,i=0;


   /* for(i=0;i<=100;i=i+10){

        printf("%d\n",i);

    }*/

    /*while (i<100)
    {
        i+=10;
        printf("%d\n",i);
    }*/

    do
    {
        printf("escreva um numero: ");
        scanf("%d",&n1);
        if((n1<100)||(n1>999)){
            printf("valor invalido escreva um valor entre 100 e 999 ");
        }
        
    } while ((n1<100)||(n1>999));
    



    return 0;
}