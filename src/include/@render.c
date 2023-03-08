#include <stdio.h>
#include <stdlib.h>

#include "array.h"
#include "util.h"
#include "render.h"

// function to render a graph based on the array
void RENDER_ShowArray(int *array) {
  system("cls"); // cleaning terminal

  for(int i = 0; i < arraySize; i++) {
    for(int j = 0; j < array[i]; j++) {
      UTIL_MoveCursorTo(i, j); // literally move the console's cursor to position
      putchar('#');
    }
  }
}

// function to print values in array
void RENDER_PrintArray(int *array) {
  printf("{");

  for(int i = 0; i < arraySize - 1; i++) {
    printf(" %d,", array[i]); // printing each number in the array
  }

  printf(" %d", array[arraySize - 1]);
  printf(" };\n");
}