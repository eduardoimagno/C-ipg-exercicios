#include <stdio.h>

int main(){
    int numero, tabuada,i;

    printf("numero: ");
    scanf("%d",&numero );

    for (i=0;i<=100;i=i+10)
    {

        tabuada=numero*i;

        printf("%d * %d = %d\n", numero, i, tabuada);
        
    }
    


    return 0;
}