#include <stdio.h>

#include "render.h"

void RENDER_ShowArray(int *array, int size) {
  //
}

// function to print values in array
void RENDER_PrintArray(int *array, int size) {
  printf("{");

  for(int i = 0; i < size - 1; i++) {
    printf(" %d,", array[i]); // printing each number in the array
  }

  printf(" %d", array[size - 1]);
  printf(" };\n");
}