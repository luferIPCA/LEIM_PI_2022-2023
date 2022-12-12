/*****************************************************************//**
 * @file   Funcoes.c
 * @brief  Implementa váriass funções
 * 
 * @author lufer
 * @date   November 2022
 *********************************************************************/

#include "Globais.h"

double CalculaMediaIdadesMulheres(Pessoa t[], int size)
{
	double mediaIdadesF;
	int conta = 0;
	int somaIdades = 0;

	for (int i = 0; i < size; i++) {
		if (t[i].sexo == 'F') {
			conta++;
			somaIdades = somaIdades + t[i].idade;
		}
	}
	mediaIdadesF = ((double)somaIdades) / conta;
	return mediaIdadesF;
}

/**
 * Conta quantos são pares e maiores que um valor N.
 */
int Conta(int valores[], int n, int v) {
	int cont = 0;

	for (int i = 0; i < n; i++) {
		if (valores[i] % 2 == 0 && valores[i] > v) cont++;
	}
	return cont;
}





