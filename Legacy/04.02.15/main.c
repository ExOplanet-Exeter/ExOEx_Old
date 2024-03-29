/*==============================================================
----------------------------------------------------------------
                      ╔════════════════════╗
                      ║ ExOplanet - Exeter ║
                      ╚════════════════════╝
----------------------------------------------------------------
 8888888888                 ,ad888ba,    8888888888
 88                        d8"'   `"8b   88
 88                       d8'       `8b  88
 88aaaa      8b,     ,d8  88         88  88aaaa      8b,     ,d8
 88""""       `Y8, ,8P'   88         88  88""""       `Y8, ,8P'
 88             )888(     Y8,       ,8P  88             )888(
 88           ,d8" "8b,    Y8a.   .a8P   88           ,d8" "8b,
 8888888888  8P'     `Y8    `"Y888Y"'    8888888888  8P'     `Y8
----------------------------------------------------------------
                                88
                                ""

88,dPYba,,adPYba,   ,adPPYYba,  88  8b,dPPYba,         ,adPPYba,
88P'   "88"    "8a  ""     `Y8  88  88P'   `"8a       a8"     ""
88      88      88  ,adPPPPP88  88  88       88       8b
88      88      88  88,    ,88  88  88       88  888  "8a,   ,aa
88      88      88  `"8bbdP"Y8  88  88       88  888   `"Ybbd8"'
----------------------------------------------------------------
         This program simulates polarised light observed
               from an irradiated extrasolar planet
----------------------------------------------------------------
==============================================================*/


//== INCLUDES ==================================================
//-- SYSTEM HEADERS --------------------------------------------
// These will be found in system library files and do not need
// to be included locally. They use <> containers.

//-- LOCAL HEADERS ---------------------------------------------
// These local header files must be placed within the working
// directory. They use "" containers.
#include "globals/global.h"
#include "modules/headers/module.h"


//== FUNCTIONS IN PROGRESS =======================================
// Move to correct header file when done please.


//== MAIN FUNCTION ===============================================
int main(){

  //-- ENTRY -----------------------------------------------------
  // Print title
  printTitle();
  if (DEBUG)
    printf(ACYAN "ExOEx Running:\n" ARESET);    

  //-- INITIALISATION --------------------------------------------
  // Create a seed for the random number generation.
  srand(43297);
  // Create exoplanet and data structure.
  // WARNING! In the new format the array elements of the planet
  // type must be defined within the program, else you're reading
  // part of an array that isn't ever defined!
  int numberOfLayers;
  Planet exo;
  Datasystem data = {0};  

  numberOfLayers = grabNumberOfLayers();

  exo.layerType   = malloc(numberOfLayers * sizeof *exo.layerType);
  exo.layerKappa  = malloc(numberOfLayers * sizeof *exo.layerKappa);
  exo.layerAlbedo = malloc(numberOfLayers * sizeof *exo.layerAlbedo);
  exo.layerRadius = malloc(numberOfLayers * sizeof *exo.layerRadius);
      
  //-- CORE MODULES ----------------------------------------------
  // Pass exo to 'input.c' for modifying by .cfg files.
  exo = input(exo);
  Particle photon[exo.nPhot];
  photonLoop(photon, exo);
  output(photon, exo, data);

  //-- EXIT AND CLEANUP ------------------------------------------
  free(exo.layerType);
  free(exo.layerKappa);
  free(exo.layerAlbedo);
  free(exo.layerRadius);
  if (DEBUG)
    printf(AGREEN "ExOEx Complete.\n" ARESET);
  return 0;
}
