/*****************************************************************//**
 * @file   Aula.c
 * @brief  Manipulação de Arrays Simples e Strings
 * Strings == array de caracteres terminado com '\0'
 * Tipos de Dados estruturados
 * @author lufer
 * @date   October 2022
 *********************************************************************/
#include <stdio.h>
#include <string.h>
#include <stdlib.h> //malloc/free
#include "Header.h"
#include <locale.h>

int main(void) {
    setlocale(LC_ALL, "Portuguese");

#pragma region ARRAYS I

#pragma region DECLARAR_INICIALIZAR

    //declarar um array de inteiros
    int arrayValores[3];

    //inicializar um array de inteiros
    arrayValores[0] = -1;
    arrayValores[1] = 2;
    arrayValores[2] = 30;

    //outras formas de declarar/inicializar
    int valores2[10] = { 3,4,2,7,8,0,1,4,-2,5 };
    int valores3[] = { 2,3,2,4,6,8,9 };         //array de 7 posições
    
    //outros arrays
    char letras[] = { 'B','e','n','f','i','c','a' };
    double reais[5] = { 2.9,4.2,0,-2.9 };

    struct pessoa turma[20];

#pragma endregion

#pragma region OPERACOES_ARRAYS

#pragma region MOSTRAR_ARRAY

    //mostra array de inteiros
    printf("\nArray original:\n");
    for (int i = 0; i < 3; i++) {
        printf("arr[%d]=%d\n", i,arrayValores[i]);
    }
#pragma endregion

#pragma region PROCUAR_MAIOR_VALOR

    //encontrar o maior valor do array
    int maior;
    maior = valores2[0];	//maior é SEMPRE o 1º valor do array
    for (int i = 1; i < 10; i++) {
        if (valores2[i] > maior) {
            maior = valores2[i];
        }
    }
    printf("Maior=%d\n", maior);

#pragma endregion

#pragma region PROCURAR_MENOR_VALOR

    //encontrar o menor valor do array
    int menor; menor = valores2[0];
    for (int i = 1; i < 10; i++) {
        if (valores2[i] < menor) {
            menor = valores2[i];
        }
    }
    printf("Menor=%d\n", maior);

#pragma endregion

#pragma region ORDENAR_ARRAY

    //ordenar um array de inteiros
    int numeroElementos = 3;
    for(int i=0; i< numeroElementos-1; i++)
        for (int j = i + 1; j < numeroElementos; j++)
        {
            //trocar se for necessário
            if (arrayValores[i] > arrayValores[j]) {
                int t = arrayValores[i];
                arrayValores[i] = arrayValores[j];
                arrayValores[j] = t;
            }
        }

    //mostra array após ordenar
    printf("\nApós ordenação:\n");
    for (int i = 0; i < 3; i++) {
        printf("arr[%d]=%d\n", i, arrayValores[i]);
    }

#pragma endregion  

#pragma region OUTRAS_OPERACOES

    //Encontrar quantos são pares?
    //Calcular a soma de todos os valores de um array
    //Calcular a média
    //Encontrar o  maior elemento

#pragma endregion

#pragma endregion

#pragma endregion

#pragma region STRINGS

    char str[] = "Benfica";
    //char str[] = { 'B','e','n','f','i','c','a','\0' };
    char str2[20];
    char* str3;

    printf("%d\n", sizeof(str));
    boolean b = existeChar(str, 'B');
    strcpy(str2, str);              //strcpy: copia uma string para outra
    str3 = allChar(str, 'B');

    char str1[12] = " Hello";
    int  len;

    /* copy str1 into str3 */
    strcpy(str3, str1);
    printf("strcpy( str3, str1) :  %s\n", str3);

    /* concatenates str1 and str2 */
    strcat(str2, str1);
    printf("strcat( str1, str2):   %s\n", str2);

    /* total lenghth of str1 after concatenation */
    len = strlen(str1);
    printf("strlen(str1) :  %d\n", len);

    char nome[MAX];
    inicializaArrayChar(nome, MAX,'0');
    char morada[] = "Viana";
    //char morada[] = { 'V','i','a','n','a','\0' };

    int pos = ondeEstaChar(morada, 6, 'i');

    if (pos < 0)
        puts("ERRO");
    else
        printf("Está na posição: %d\n", pos);
    //free(str3);

    char texto[10];
    inicializaArrayChar(texto, 10, '0');

#pragma endregion 

#pragma region ARRAYS II
    //Criar array como conjunto de apontadores para
    int* valores = (int*)malloc(sizeof(int) * 10);
    inicializaArrayInt(valores, MAX);
    //iniciaArray(valores, 10);
    valores[0] = -2;
    //*valores = -2;          //valores[0]
    valores[1] = 20;
    //*(valores + 1) = 12;   //valores[1]
    valores[2] = 13;
    valores[3] = 10;
    valores[9] = 137;

        int n = 10;
    mostraArray(valores, 10);

   /* valores = getArrayPares(valores, 10);
    valores = getArrayParesII(valores, 10);*/

    int soma = somaArray(valores, MAX);

    free(valores);
#pragma endregion

#pragma region STRUCTS

    struct pessoa p;
    p.idade = 20;
    strcpy(p.nome, "luis");
    //scanf("%s", p.nome);

    /*pessoa p1 = { 12, "ola" };

    pessoa alunos[MAX];
    alunos[0] = p;
    alunos[2] = p1;

    printf("Idade: %d\n", alunos[0].idade);
    printf("Nome: %s\n", alunos[0].nome);

    mostraPessoas(alunos, MAX);
    pessoa aux1 = existePessoa(alunos, MAX, "luis");*/

#pragma endregion

#pragma region ARRAYS_MULTI

    printf("\nMATRIZES\n");
    int matriz[2][3] = { {2,3,4},{1,2,3} };

    for(int i=0; i<2; i++)
        for (int j = 0; j < 3; j++) {
            printf("%d\n", matriz[i][j]);
        }
#pragma endregion

}