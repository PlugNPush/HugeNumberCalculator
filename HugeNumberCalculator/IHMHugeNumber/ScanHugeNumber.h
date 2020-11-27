/*****************************************************************//**
* \file ScanHugeNumber.h
* \brief Scans Huge Numbers. Currently supports HugeInt and HugeUnisgnedInt.
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
/**
* \brief Function to create a HugeUnsignedInt via user input.
*   \n Example :
*   \code{.c}
*   HugeUnsignedInt* hugeUnsignedInt = scanHugeUnsignedInt();
*   \endcode
* \return the HugeUnsignedInt's pointer, if the HugeUnsignedInt is created.
* \return \c NULL, if the HugeUnsignedInt could not be created.
*/
extern HugeUnsignedInt* scanHugeUnsignedInt (void);

#endif // !SCAN_HUGE_NUMBER
