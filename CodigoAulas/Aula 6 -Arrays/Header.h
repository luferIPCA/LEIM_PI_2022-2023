/*****************************************************************//**
 * \file   Header.h
 * \brief  Assinaturas de funções e Tipos de Dados
 * Structs
 * \author lufer
 * \date   2022
 *********************************************************************/
#pragma once

#define MAXNOME 50
#define MAX 5
#pragma warning (disable: 4996)


#pragma region AssinaturasStructs
typedef enum {false, true}boolean;

struct pessoa {
    char nome[MAXNOME];
    int idade;
};

typedef struct pessoa pessoa;

void mostraPessoas(pessoa p[], int size);
pessoa existePessoa(pessoa p[], int size, char nome[]);

#pragma endregion

#pragma region AssinaturasArrays

int* getArrayPares(const int v[], int size);
int* getArrayParesII(int* v, int size);
void mostraArray(const int v[], const int size);

char* allChar(const char v1[], char ch);
boolean existeChar(const char v1[], char ch);

void inicializaArrayChar(char n[], int size, char ch);
void inicializaArrayInt(int v[], const int size);
boolean existeValor(int v[], int size, int valor);
int ondeEstaChar(char v[], int size, char ch);
int somaArray(int valores[], int size);

#pragma endregion