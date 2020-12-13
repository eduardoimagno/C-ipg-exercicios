#include <stdio.h>

int main(){
    float aguac,preco,total,aux;
    float aluguel=2.52,n1=0.8091,n2=1.4080,n3=3.2772,n4=3.8602;

    printf("agua consumida: ");
    scanf("%f",&aguac);

    if(aguac<5){

    total = aluguel + (n1 * aguac);

    printf("Agua consumida: %.3f m3\n preco por m3: %.4f \n aluguel do contador: 2.52 \n total a pagar: %.3f",aguac,n1,total);

    }else if(aguac<=15){


    total = aluguel + (n2 * aguac);

    printf("Agua consumida: %.3f m3\n preco por m3: %.4f \n aluguel do contador: 2.52 \n total a pagar: %.3f",aguac,n2,total);
        
    }else if(aguac<25){


    total = aluguel + (n3 * aguac);

    printf("Agua consumida: %.3f m3\n preco por m3: %.4f \n aluguel do contador: 2.52 \n total a pagar: %.3f",aguac,n3,total);
        
    }else if(aguac>25){


    total = aluguel + (n4 * aguac);

    printf("Agua consumida: %.3f m3\n preco por m3: %.4f \n aluguel do contador: 2.52 \n total a paga.r: %.3f",aguac,n4,total);
        
    }




    return 0;
}