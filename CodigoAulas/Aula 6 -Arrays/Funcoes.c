/*****************************************************************//**
 * @file   Funcoes.c
 * @brief   Fun��es para manipular arrays
 *          Manipular strings como array de char
 * @author lufer
 * @date   October 2022
 *********************************************************************/

#include "Header.h"
#include <stdio.h>


/**
 * @brief Verifica se determinado valor existe num array.
 * 
 * @param v     Array de valores
 * @param size  Dimens�o do array
 * @param valor Valor a procurar
 * @return      true se existe; false caso n�o exista
 * @author lufer
 *
 */
boolean existeValorArray(int v[], int size, int valor) {

	boolean enc = false;
	for (int i = 0; i < size; i++) {
		if (v[i] == valor) {
			enc = true;
			break;
		}
	}
	return(enc);
}

/**
 * @brief Devolve a posi��o onde determinado valor ocorre num array.
 * 
 * @param v     Array de valores
 * @param size  Dimens�o do array
 * @param valor Valor a procurar    
 * @return      Posi��o onde o valore se encontra ou -1 caso n�o exista
 * @author lufer
 *
 */
int devolvePosicaoArray(int v[], int size, int valor) {

	for (int i = 0; i < size; i++) {
		if (v[i] == valor) {
			return i;
		}
	}
	return(-1);
}


 /**
  * @brief Encontra os n�meros pares num array .
  *
  * @param v     Array com valores num�ricos
  * @param size  Dimens�o do array
  * @return      Array com os n�meros pares encontrados
  * @author lufer
  *
  */
int* getArrayPares(const int v[], int size) {
    //int aux[size];        //N�o � permitido!
    int j = 0;
    int* pares = (int*)malloc(sizeof(int) * size);
    inicializaArrayInt(pares, size);
    for (int i = 0; i < size; i++) {
        if (v[i] % 2 == 0) {
            pares[j] = v[i];
            j++;
        }
    }
    return pares;
}

/**
 * @brief Encontra os n�meros pares num array .
 * 
 * @param v     Endere�o do array com valores num�ricos
 * @param size  Dimens�o do array
 * @return      Array com os n�meros pares encontrados
 * @author lufer
 *
 */
int* getArrayParesII(int *v, int size) {
    //int aux[size];        //N�o � permitido!
    int j = 0;
    int* pares = (int*)malloc(sizeof(int) * size);
    inicializaArrayInt(pares, size);
    for (int i = 0; i < size; i++) {
        if (v[i] % 2 == 0) {
            pares[j] = v[i];
            j++;
        }
    }
    return pares;
}

/**
 * @brief Apresenta conte�do do array no ecr�.
 * 
 * @param v     Array de valores
 * @param size  Tamanho do array
 * @author lufer
 *
 */
void mostraArray(const int v[], const int size) {
    for (int i = 0; i < size; i++) {
        if (v[i] != NULL) {
            printf("v=%d\n", v[i]);
        }
    }
}

/**
 * @brief Coloca valor 0 em todas as posi��es de um array.
 * 
 * @param v     Array de Valores a iniciar
 * @param size  Tamanho do array
 * @author      lufer
 */
void inicializaArrayInt(int v[], const int size) {
    for (int i = 0; i < size; i++) {
        v[i] = 0;
    }
}

/**
 * @brief Coloca valor inicial em todas as posi��es de um array.
 * 
 * @param v     Array de Valores a iniciar
 * @param val   Valor inicial para cada posi��o do array
 * @param size  Tamanho do array
 * @author lufer
 *
 */
void inicializaArrayIntVal(int v[], const int size, int val) {
    for (int i = 0; i < size; i++) {
        v[i] = val;
    }
}

/**
 * @brief Calcula a soma dos valores de um array.
 *
 * @param valores   Array de valores
 * @param size      Tamanho do array
 * @return          Devolve a soma
 * @author lufer
 *
 */
int somaArray(int valores[], int size) {
    int soma = 0;
    for (int i = 0; i < size; i++) {
        if (valores[i] == 0) continue;
        soma += valores[i];
    }
    return soma;
}

#pragma region STRUCTS
/**
 * @brief Apresenta todas as pessoas que constam  um array.
 * 
 * @param p     Array com pessoas
 * @param size  Tamanho do array
 * @author lufer 
 *
 */
void mostraPessoas(pessoa p[], int size) {
    for (int i = 0; i < size; i++) {
        printf("Idade: %d\n", p[i].idade);
        printf("Nome: %s\n", p[i].nome);
    }
}

/**
 * @brief Procura a pessoa com determinado nome.
 * 
 * @param p     Array de pessoas
 * @param size  Tamanho do array
 * @param nome  Nome de pessoa a procurar
 * @return      Devolve a ficha da pessoa
 * @author lufer
 *
 */
pessoa existePessoa(pessoa p[], int size, char nome[]) {
    for (int i = 0; i < size; i++) {
        //if(p[i].nome==nome)
        if (strcmp(p[i].nome, nome) == 0) {
            return p[i];
        }
    }
    pessoa aux = { -1,"" };
    return aux;
}

#pragma endregion

