/*****************************************************************//**
 * @file   Controlo.c
 * @brief  Estruturas de controlo em C
 * 
 * @author lufer
 * @date   October 2022
 *********************************************************************/
#include <stdio.h>
#include "Funcoes.h"

int main() {

	printf("Ola");
	printf("O dobro de 2= %d\n", 2*2);

	printf("O dobro de 2= %d\n", dobro(2));

#pragma region IF
	int x = 7;
	//h1
	if (x > 0) {
		printf("Maior\n");
	}
	else
	{
		printf("Menor\n");
	}

	//h2
	if (x > 0)
	{
		printf("Maior\n");
	}
	if (x<=0)
		printf("Menor\n");

	//h3 ?:

	(x > 7) ? printf("Maior") : printf("Menor\n");

	//Exercicio: testar "maior que 7 e ser par"

	//h1
	if (x > 7 && (x % 2 == 0))
	{
		printf("Maior e Par\n");
	}
	else
	{
		printf("Menor ou Impar");
	}
	//h2
	if (x > 7 && ePar(x)) {
		printf("Maior e Par\n");
	}
	else
	{
		printf("Menor ou Impar");
	}
#pragma endregion

#pragma region Ciclos
	//Exercicio: Mostra numeros de 1 a 20
	 
	//h1 - while
	int i = 1;
	while (i <= 20) {
		printf("i=%d\n", i);
		i = i + 1;	//i++
	}
	//TPC: Exercicio: Mostra numeros de 1 a 20 que sejam pares


	//h2 - for
	//for(inicialização;condição de paragem;ação pós ciclo)
	for (int j = 1; j <= 20;j++) {
		printf("j=%d\n", j);
	}

	//h3 - do
	/*do
	{
		statement
	}while(c)*/
	int k = 1;
	do {
		printf("i=%d\n", k);
		k++;
	} while (k <= 20) ;

#pragma endregion

}
