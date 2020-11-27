/*****************************************************************//**
* \file ScanHugeNumber.h
* \brief Scans Huge Numbers. Currently supports Huge Ints and Huge Unisgned Ints.
*
* \author Jean-Aymeric DIET jeanaymeric@gmail.com
* \date November 2020 *********************************************************************/

#ifndef SCAN_HUGE_NUMBER
#define SCAN_HUGE_NUMBER

#include "../UseHugeNumber/Type/HugeInt.h"

/**
* \brief Function to create a HugeInt via user input.
*   \n Example :
*   \code{.c}
*   HugeInt* hugeInt = scanHugeInt();
*   \endcode
* \return the HugeInt's pointer, if the HugeInt is created.
* \return \c NULL, if the HugeInt could not be created.
*/
extern HugeInt*         scanHugeInt         (void);
extern HugeUnsignedInt* scanHugeUnsignedInt (void);

#endif // !SCAN_HUGE_NUMBER
