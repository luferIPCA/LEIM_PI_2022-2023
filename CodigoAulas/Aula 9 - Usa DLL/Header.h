/*****************************************************************//**
 * @file   Header.h
 * @brief  
 * 
 * @author lufer
 * @date   November 2022
 *********************************************************************/
#pragma once
#include <stdbool.h>

/*Use __cplusplus preprocessor macro to determine
which language is being compiled.

If we use this technique and provide header files
for the DLL, these functions can be used by C and C++
users with no change

#ifdef __cplusplus
extern "C" {
#endif

//Your functions that can be accessible from
//C or C++ projects

#ifdef __cplusplus
}
#endif
*/

#ifdef __cplusplus  
extern "C" {
#endif  

	//Write your functions with __declspec( dllexport )
	//to available in client code
	__declspec(dllexport) bool IsOdd();
	__declspec(dllexport) int Sum(int x, int y);

#ifdef __cplusplus  
}
#endif  
