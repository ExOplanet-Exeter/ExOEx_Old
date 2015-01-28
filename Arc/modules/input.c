/*==============================================================                
----------------------------------------------------------------
 88
 ""                                           ,d
                                              88
 88  8b,dPPYba,   8b,dPPYba,   88       88  MM88MMM
 88  88P'   `"8a  88P'    "8a  88       88    88
 88  88       88  88       d8  88       88    88
 88  88       88  88b,   ,a8"  "8a,   ,a88    88,
 88  88       88  88`YbbdP"'    `"YbbdP'Y8    "Y888
                  88                                   ,adPPYba,
                  88                                  a8"     ""
                                                      8b
                                                 888  "8a,   ,aa
                                                 888   `"Ybbd8"'
----------------------------------------------------------------
 The input function reads in data either from a config file or
        allows the user to enter parameters manually.
----------------------------------------------------------------
==============================================================*/


//== INCLUDES ==================================================
//-- SYSTEM HEADERS --------------------------------------------
// Required for string comparison.
#include <string.h>
//-- LOCAL HEADERS ---------------------------------------------
// The directory path of '..' means move up one directory.
#include "../globals/global.h"


//== INPUT FUNCTION ============================================
Planet input(Planet exo){

  //-- ENTRY -----------------------------------------------------
  // Debug printing.
  if (DEBUG)
    printf(ACYAN "Input Running:\n" ARESET);

  return exo;
}
