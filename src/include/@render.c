#include <stdio.h>
#include <stdlib.h>

#include "array.h"
#include "render.h"

// function to render a graph based on the array
void RENDER_ShowArray(int *array) {
  system("cls"); // cleaning terminal

  for(int i = 0; i < arraySize; i++) {
    for(int j = 0; j < array[i]; j++)
      putchar('#');
    
    putchar('\n');
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