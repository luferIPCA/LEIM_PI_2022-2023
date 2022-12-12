/*****************************************************************//**
 * @file   Funcoes.c
 * @brief  Implementa��o de fun��es...
 * 
 * @author lufer
 * @date   October 2022
 *********************************************************************/

// tipo-dados-retorno nomeFun��o (parametros){...}

int Soma(int x, int y) {
	int s = x + y;
	return (s);
}

//int aux = Soma(5,7);


/*
Calcula a m�dia...
*/
double CalculaMedia(int ini, int fim) {
	int soma = 0;
	double media = 0;
	
	for (int i = ini; i <= fim; i++) {
		soma = soma + i;	//soma +=i;
	}

	media = (double)soma / ((fim-ini)+1);
	return media;
}
