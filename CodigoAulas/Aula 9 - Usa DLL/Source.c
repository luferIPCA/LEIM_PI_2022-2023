/*****************************************************************//**
 * @file   Source.c
 * @brief  Static or implicit linking – using dll header file and .lib file only
 * 
 * @author lufer
 * @date   November 2022
 * @see	https://learn.microsoft.com/en-us/cpp/preprocessor/pragma-directives-and-the-pragma-keyword?view=msvc-170
 * https://interviewsansar.com/dll-dynamic-link-library-in-c/
 *********************************************************************/

#include <stdio.h>
#include "c:\Temp\libs\Header.h"
//h1
//Properties -> Linker -> Input -> Path\file.lib

//h2
#pragma comment(lib, "c:\\temp\\libs\\Aula 9 - DLL.lib")

int main() {

	int aux = Sum(2, 3);
	printf("Soma= %d\n", aux);
}
