/*****************************************************************//**
 * @file   Scanf.c
 * @brief  https://cplusplus.com/reference/cstdio/printf/
 * 
 * @author lufer
 * @date   October 2022
 * @desc:
 *		fgets
 *		fgetc
 *		fscanf
 *********************************************************************/

 /* scanf example */
#include <stdio.h>
#include "Funcoes.h"

#pragma warning (disable: 4996)

int main()
{
	char str[80];
	int i;

	printf("Soma: %d\n", soma(2, 3));

	printf("Enter your family name: ");
	scanf("%79s", str);
	printf("Enter your age: ");
	scanf("%d", &i);
	printf("Mr. %s , %d years old.\n", str, i);
	printf("Enter a hexadecimal number: ");
	scanf("%x", &i);
	printf("You have entered %#x (%d).\n", i, i);

#pragma region Outras
	//Ver https://www.geeksforgeeks.org/taking-string-input-space-c-3-different-methods/

	//h1
	char str4[20];
	printf("Texto: ");
	//fflush(stdin);
	if (feof(stdin)) getchar();	//testa buffer de entrada
	gets(str4);
	printf("%s\n", str4);

	//h2
	#define MAX_LIMIT 20
	char str1[MAX_LIMIT];
	printf("Texto: ");
	fgets(str1, MAX_LIMIT, stdin);
	printf("%s\n", str1);

	//h3
	char str2[20];
	printf("Texto: ");
	scanf("%[^\n]%*c", str2);
	printf("%s\n", str2);

	//h4
	char str3[100];
	printf("Texto: ");
	scanf("%[^\n]s", str3);
	printf("%s\n", str3);

#pragma endregion
	return 0;
}