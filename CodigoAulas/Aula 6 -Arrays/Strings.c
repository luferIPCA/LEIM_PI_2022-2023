/*****************************************************************//**
 * @file   Strings.c
 * @brief  Funções que manipulam strings
 * 
 * @author lufer
 * @date   October 2022
 *********************************************************************/

#include "Header.h"

#pragma region ARRAY_CHARS

/**
 * @brief Inicializa um array com determinado caracter.
 * 
 * @param n
 * @param size
 * @param ch
 * @author lufer
 *
 */
void inicializaArrayChar(char n[], int size, char ch) {
    for (int i = 0; i < size; i++) {
        n[i] = ch;              //atenção que ainda não testei...
    }
}

/**
 * @brief Indica a posição onde se encontra determinado caracter num  array de caracteres.
 * 
 * @param v
 * @param size
 * @param ch
 * @return 
 * @author lufer
 *
 */
int ondeEstaChar(char v[], int size, char ch) {
    int i = 0;
    while (i < size) {
        if (v[i] == ch) return i;
        i++;
    }
    return -1;          //se não existir devolve -1
}

/**
 * @brief   Verifica se determinado caracter existe num  array de caracteres.
 *          Não é indicada a dimensão do array
 * 
 * @param v     Array de caracteres
 * @param ch
 * @return 
 * @author lufer
 *
 */
boolean existeChar(const char v[], char ch) {
    int i = 0;
    //int size = sizeof(v1);
    while(v[i] !='\0'){ // or < size){
        if (v[i] == ch) return true;
        i++;
    }
}

/**
 * @brief   Verifica se determinado caracter existe num  array de caracteres.
 *          É indicada a dimensão do array
 * 
 * @param v     Array de caracteres
 * @param ch
 * @return 
 * @author lufer
 *
 */
boolean existeCharI(char v[], int size, char ch) {
    int i = 0;
    while (i < size) {
        if (v[i] == ch) return true;
        i++;
    }
    return false;
}

/**
 * @brief Devolve todos os caracteres existentes num array de caracteres.
 * 
 * @param v1
 * @param ch
 * @return 
 * @author lufer
 *
 */
char* allChar(const char v1[], char ch) {
    char* aux = (char*)malloc(sizeof(v1)+1);    //cria um array
    int i = 0,j=0;
    while (v1[i] != '\0') { 
        if (v1[i] == ch) {
            aux[j++] = v1[i];
        }
        i++;
    }
    aux[j] = '\0';
    return aux;
}

#pragma endregion