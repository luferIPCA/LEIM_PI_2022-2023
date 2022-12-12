/*
* Autor:lufer
* Email:lufer@ipca.pt
* Data:
* Desc:
*	Variaveis
*	Constantes
*	I/O
* */

#include <stdio.h>

#pragma warning (disable: 4996)

int main(){

#pragma region H1

	//h1: valor fixo
	//int x;		//declara
	//x = 7;		//inicializa
	int x = 7;		//declara e inicializa uma variavel
	printf("Valor inicial de x : %d \n",x);	//mostra valor de x no ecrã

#pragma endregion

#pragma region H2

	//h2: valor lido
	printf("\nValor: ");
	scanf("%d", &x);
	printf("Valor lido : %d \n", x);

#pragma endregion

#pragma region H3

	//h3: dobro do valor lido
	int dobro = 2 * x;
	//h1
	printf("O dobro de %d = %d \n", x,dobro);
	//h2
	printf("O dobro de %d = %d \n", x, 2*x);

#pragma endregion

	//Operadores
	x = x + 1;	x += 1;	x++;
	x = x - 1;	x -= 1;
	x = x * 2;	x *= 1;
	x = x / 2;	x /= 2;

	printf("Valor x : %d \n", x);
	printf("Valor ++x : %d \n", ++x);
	printf("Valor x++ : %d \n", x++);

}
