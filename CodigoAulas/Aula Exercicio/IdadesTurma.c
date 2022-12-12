/*****************************************************************//**
 * @file   IdadesTurma.c
 * @brief  Calcula Média das idades de uma turma
 * 
 * @author lufer
 * @date   November 2022
 *********************************************************************/

#include <stdio.h>
#include "Globais.h"


int main(){

	//const int N = 20;

	Pessoa turma[3] = { {18,"Maria",'F'},{19,"Manuel",'M'},{19,"Mariazinha",'F'} };

	double media = CalculaMediaIdadesMulheres(turma, 3);
	printf("Media=%f\n", media);

}
