#include <stdio.h>

/*Exercicio06 – Pretende-se um programa que dado um valor em euros apresente uma tabela com
as respetivas conversões para as diferentes moedas, que a seguir se apresentam. Os valores de
output devem surgir com duas casas decimais.
• DÓLAR DOS ESTADOS UNIDOS
• REAL DO BRASIL
• DÓLAR CANADIANO
• IENE JAPONÊS
• RUBLO RUSSO
• KUANZA
*/

int main (){
    float e,dusa, rbr,dcan,ijp,rr,ku;

    printf("qual o valor em euro ?");
    scanf("%f", &e);

    dusa=e*1.19;
    rbr= e*6.38;
    dcan=e*1.55;
    ijp=e*123.15;

    printf("o valo em dolar Americano %2.f \n valor em real %2.f \n valor em dolar Canadense %2.f \n valor em iene %2.f", dusa, rbr,dcan,ijp);

    return 0;
}