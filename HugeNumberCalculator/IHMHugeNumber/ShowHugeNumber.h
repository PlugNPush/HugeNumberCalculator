/*****************************************************************//**
* \file ShowHugeNumber.h
* \brief Scans Header of the library allowing to print a HugeNumber to the console.
*
* \author Jean-Aymeric DIET jeanaymeric@gmail.com
* \date November 2020 *********************************************************************/

#ifndef SHOW_HUGE_NUMBER
#define SHOW_HUGE_NUMBER

#include "../UseHugeNumber/Type/HugeFloat.h"
#include "../UseHugeNumber/Type/HugeInt.h"
#include "../UseHugeNumber/Type/HugeUnsignedInt.h"

/**
* \brief Function to print a HugeUnsignedInt
*   \n Example :
*   \code{.c}
*   printHugeUnsignedInt(hugeUnsignedInt);
*   \endcode
*/
extern void printHugeUnsignedInt (const HugeUnsignedInt* hugeUnsignedInt);
/**
* \brief Function to print a HugeInt
*   \n Example :
*   \code{.c}
*   printHugeInt(hugeInt);
*   \endcode
*/
extern void printHugeInt (const HugeInt* hugeInt);
/**
* \brief Function to print a HugeFloat
*   \n Example :
*   \code{.c}
*   printHugeFloat(hugeFloat);
*   \endcode
*/
extern void printHugeFloat (const HugeFloat* hugeFloat);

#endif // !SHOW_HUGE_NUMBER
