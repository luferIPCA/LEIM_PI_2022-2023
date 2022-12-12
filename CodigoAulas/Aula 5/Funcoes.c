/*****************************************************************//**
 * @file   Funcoes.c
 * @brief  Implementação de funções...
 * 
 * @author lufer
 * @date   October 2022
 *********************************************************************/

// tipo-dados-retorno nomeFunção (parametros){...}

int Soma(int x, int y) {
	int s = x + y;
	return (s);
}

//int aux = Soma(5,7);


/*
Calcula a média...
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
