/*****************************************************************//**
 * @file   Calculo.c
 * @brief  Várias operações....
 * 
 * @author lufer
 * @date   October 2022
 *********************************************************************/
#include <stdio.h>
#include "Funcoes.h"


#pragma warning (disable: 4996 )

int main(){
	
	//Calcula a média dos valores entre 1 e 20
	//h1
	int soma = 0;
	double media=0;

	for (int i = 1; i <= 20; i++) {
		soma = soma + i;	//soma +=i;
	}

	media = (double)soma / 20;
	printf("Media: %f\n", media);

	//h2
	int inicio = 1;
	int fim = 20;
	soma = 0;

	for (int i = inicio; i <= fim; i++) {
		soma = soma + i;	//soma +=i;
	}

	media = (double)soma / (fim-inicio+1);
	printf("Media: %f\n", media);


	//h3
	media = CalculaMedia(1, 20);
	printf("Media: %f\n", media);


	//h4
	//Pedir valores do intervalo

	printf("Inicio do intervalo:");
	scanf("%d", &inicio);
	
	printf("Fim do intervalo:");
	scanf("%d", &fim);

	media = CalculaMedia(inicio, fim);
	printf("Media entre %d e %d = %f\n", inicio, fim, media);

	//TPC: Implementar uma calculadora...mas com funções!
}
