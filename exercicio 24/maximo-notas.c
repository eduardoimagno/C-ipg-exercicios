#include <stdio.h>

/*– Partindo do Exercicio09, Faça um programa que permita calcular e apresentar o
número de notas e moedas mínimo existente num valor dado, mas também seja possível definir
o número de notas e moedas máximo possível. Ou seja, se for definido que o número máximo de
notas de 500 é 1, no valor 1000 não posso atribuir 2 notas de 500.
*/

int main()
{
    int valor, nNotas;
	int max500 = 1, max200 = 1, max100 = 10, max50 = 1, max20 = 2,
		max10 = 2, max5 = 2, max2 = 2, max1 = 1000000000;


	printf("Valor? ");
	scanf("%d",&valor);
	
	nNotas = valor / 500;
	if (nNotas > max500){
		nNotas = max500;
	}
	printf("Notas 500 -> %d \n",nNotas);
	valor = valor - (nNotas * 500);


	nNotas = valor / 200;
	if (nNotas > max200) nNotas = max200;
	printf("Notas 200 -> %d \n",nNotas);
	valor = valor - (nNotas * 200);

	nNotas = valor / 100;
	if (nNotas > max100)
		nNotas = max100;
	printf("Notas 100 -> %d \n",nNotas);
	valor = valor - (nNotas * 100);

	nNotas = valor / 50;
	if (nNotas > max50) nNotas = max50;
	printf("Notas 50 -> %d \n",nNotas);
	valor = valor - (nNotas * 50);

	nNotas = valor / 20;
	if (nNotas > max20) nNotas = max20;
	printf("Notas 20 -> %d \n",nNotas);
	valor = valor - (nNotas * 20);

	nNotas = valor / 10;
	if (nNotas > max10) nNotas = max10;
	printf("Notas 10 -> %d \n",nNotas);
	valor = valor - (nNotas * 10);

	nNotas = valor / 5;
	if (nNotas > max5) nNotas = max5;
	printf("Notas 5 -> %d \n",nNotas);
	valor = valor - (nNotas * 5);

	nNotas = valor / 2;
	if (nNotas > max2) nNotas = max2;
	printf("Moedas 2 -> %d \n",nNotas);
	valor = valor - (nNotas * 2);

	printf("Moedas 1 -> %d \n",valor);

    return 0;
}

