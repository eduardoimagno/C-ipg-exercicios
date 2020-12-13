#include <stdio.h>

/*Exercicio17 – Faça um programa em linguagem C, que permita determinar o valor do Imposto
Único de Circulação (IUC) a pagar para um determinado veículo matriculado a antes de 1 de Julho
de 2007.
De acordo com os dados da tabela abaixo (tabela simplificada para este exercício), calcule o valor
do IUC a pagar, de um veículo a gasolina, dado o valor da cilindrada e o ano da matrícula.
O output do programa deve ter o aspeto seguinte: TABELA NO EXERCICIO EM FORMA DE IMAGEM
*/

int main (){

    int cilindrada, ano;
    float total;

    printf("Cilindrada?  ");
    scanf("%d",&cilindrada);
    printf("ano da matricula?    ");
    scanf("%d",&ano);

    if (cilindrada<=1000)
    {
       if (ano>1995)
       {
           total=16.50;
           printf("Cilindrada do veiculo:          %d cm3\n ano da matricula:             %d \n Total a pagar:                %.2f\n",cilindrada,ano,total);
       }
       if ((ano<=1995)&&(ano>=1990))
       {
           total=10.40;
           printf("Cilindrada do veiculo:          %d cm3\n ano da matricula:             %d \n Total a pagar:                %.2f\n",cilindrada,ano,total);
       }
       if ((ano<=1989)&&(ano>=1981))      
       {
           total=7.30;
           printf("Cilindrada do veiculo:          %d cm3\n ano da matricula:             %d \n Total a pagar:                %.2f\n",cilindrada,ano,total);
       }
       
    }
    
     if ((cilindrada>=1001)&&(cilindrada<=1300))
    {
       if (ano>1995)
       {
           total=33.10;
           printf("Cilindrada do veiculo:          %d cm3\n ano da matricula:             %d \n Total a pagar:                %.2f\n",cilindrada,ano,total);
       }
       if ((ano<=1995)&&(ano>=1990))
       {
           total=18.60;
           printf("Cilindrada do veiculo:          %d cm3\n ano da matricula:             %d \n Total a pagar:                %.2f\n",cilindrada,ano,total);
       }
       if ((ano<=1989)&&(ano>=1981))
       {
           total=10.40;
           printf("Cilindrada do veiculo:          %d cm3\n ano da matricula:             %d \n Total a pagar:                %.2f\n",cilindrada,ano,total);
       }
       
    }

    if ((cilindrada>1300))
    {
       if (ano>1995)
       {
           total=51.70;
           printf("Cilindrada do veiculo:          %d cm3\n ano da matricula:             %d \n Total a pagar:                %.2f\n",cilindrada,ano,total);
       }
       if ((ano<=1995)&&(ano>=1990))
       {
           total=28.90;
           printf("Cilindrada do veiculo:          %d cm3\n ano da matricula:             %d \n Total a pagar:                %.2f\n",cilindrada,ano,total);
       }
       if ((ano<=1989)&&(ano>=1981))         
       {
           total=14.50;
           printf("Cilindrada do veiculo:          %d cm3\n ano da matricula:             %d \n Total a pagar:                %.2f\n",cilindrada,ano,total);
       }
       
    }
    



    return 0;
}