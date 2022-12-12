/*****************************************************************//**
 * @file   Globais.h
 * @brief  
 * 
 * @author lufer
 * @date   November 2022
 *********************************************************************/
#pragma once

typedef struct Pessoa {
	int idade;
	char nome[20];
	char sexo;
	//outros atributos
}Pessoa;

//Assinatura das funções

double CalculaMediaIdadesMulheres(Pessoa t[], int size);
int Conta(int valores[], int n, int v);
