/**********************************************
 * @file   Header.h
 * @brief  Lib Interface
 * 
 * @author lufer
 * @date   2022
 *********************************************/
#include <stdbool.h>

#ifndef MyLIB	//or #pragma once
	__declspec(dllexport) bool IsOdd(int x);
	__declspec(dllexport) int Sum(int x, int y);
#endif
 
