/*****************************************************************//**
 * @file   Funcoesc.cpp
 * @brief  Implementa funções
 * 
 * @author lufer
 * @date   October 2022
 *********************************************************************/

/*
Calcula o dobro de um valor inteiro
*/
#include <stdbool.h>
int dobro(int x)
{
	return(2 * x);
}

/*
Verifica se determinado valor é par
*/
bool ePar(int x) {
	if (x % 2 == 0) return 1;
	else
		return 0;
}
