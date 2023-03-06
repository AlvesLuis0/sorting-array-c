#include <stdio.h>
#include <stdlib.h>

#include "render.h"

// function to render a graph based on the array
void RENDER_ShowArray(int *array, int size) {
  system("cls"); // cleaning terminal

  for(int i = 0; i < size; i++) {
    for(int j = 0; j < array[i]; j++)
      printf("#");
    
    putchar('\n');
  }
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