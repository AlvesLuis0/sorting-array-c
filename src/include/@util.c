#include <stdlib.h>
#include <time.h>

// function to swap numbers
void UTIL_Swap(int *n1, int *n2) {
  int aux = *n1; // temporary variable
  *n1 = *n2;
  *n2 = aux;
}

// function to set a seed
int UTIL_InitRand() {
  srand(time(NULL)); // set a seed to generate random numbers
}

// function to get a random number
int UTIL_Rand(int min, int max) {
  return rand() % (max - min + 1) + min; // get a random number between "min" and "max"
}