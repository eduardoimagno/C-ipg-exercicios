#include <stdio.h>

int main (){
    int data,dia,mes,ano;

    printf("Qual a data formato [ddmmaaaa] ");
    scanf("%d",&data);

    ano=data%10000;
    data=data/10000;
    mes=data%100;
    data=data/100;
    dia=data;

    if((dia>31)||( dia=0)){

        printf("data incorreta");

    }

    if((mes>12)||( mes=0)){

        printf("data incorreta");

    }
    
    switch( mes ) {
    case 1: printf("%d/janeiro/%d",dia,ano) ; break;
    case 2: printf("%d/fevereiro/%d",dia,ano) ; break;
    case 3: printf("%d/marco/%d",dia,ano) ; break;
    case 4: printf("%d/abril/%d",dia,ano) ; break;
    case 5: printf("%d/maio/%d",dia,ano) ; break;
    case 6: printf("%d/junho/%d",dia,ano) ; break;
    case 7: printf("%d/julho/%d",dia,ano) ; break;
    case 8: printf("%d/agosto/%d",dia,ano) ; break;
    case 9: printf("%d/setembro/%d",dia,ano) ; break;
    case 10: printf("%d/outubro/%d",dia,ano) ; break;
    case 11: printf("%d/novembro/%d",dia,ano) ; break;
    case 12: printf("%d/dezembro/%d",dia,ano) ; break;
}
    return 0;
}