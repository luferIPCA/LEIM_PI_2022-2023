/*****************************************************************//**
 * @file   SourceDLL.c
 * @brief   
 * 
 * @author lufer
 * @date   November 2022
 * @see https://interviewsansar.com/dll-dynamic-link-library-in-c/
 *********************************************************************/

#include "Header.h"

/**
 * @brief Verifica se determinado valor é par.
 * 
 * @param x
 * @return 
 * @author lufer
 *
 */
bool IsOdd(int x) {

    if (x % 2 == 0) return true;
    return false;
}

/**
 * @brief Calcula a soma de dois inteiros.
 * 
 * @param x
 * @param y
 * @return 
 * @author lufer
 *
 */
int Sum(int x, int y) {
    return(x + y);
}


