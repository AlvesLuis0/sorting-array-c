#include <stdlib.h>
#include <time.h>
#include <windows.h>

#include "util.h"

// function to swap numbers
void UTIL_Swap(int *n1, int *n2) {
  int aux = *n1; // temporary variable
  *n1 = *n2;
  *n2 = aux;
}

// function to set a seed
void UTIL_InitRand() {
  srand(time(NULL)); // set a seed to generate random numbers
}

// function to get a random number
int UTIL_Rand(int min, int max) {
  return rand() % (max - min + 1) + min; // get a random number between "min" and "max"
}

// function to move the terminal's cursor to the coordinates
void UTIL_MoveCursorTo(int x, int y) {
  COORD coord = {
    .X = x,
    .Y = y
  };

  SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}