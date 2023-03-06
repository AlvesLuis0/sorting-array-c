#include <stdio.h>
#include <stdlib.h>

#include "util.h"

// function to declare array
int* ARRAY_New(int size) {
  int *array = (int*) calloc(size, sizeof(int)); // allocating memory to the array
  return array;
}

// function to print values in array
void ARRAY_Print(int *array, int size) {
  printf("{");

  for(int i = 0; i < size - 1; i++) {
    printf(" %d,", array[i]); // printing each number in the array
  }

  printf(" %d", array[size - 1]);
  printf(" };\n");
}

// function to randomize array
void ARRAY_Randomize(int *array, int size) {
  UTIL_InitRand(); // applying a seed to random numbers

  for(int i = 0; i < size; i++)
    array[i] = UTIL_Rand(1, RAND_MAX); // generating a random number for each item in the array
}

// function to sort array
void ARRAY_Sort(int *array, int size) {
  for(int i = size; i > 0 ; i--) {
    for(int j = 1; j < i; j++) {
      int n1IsGreaterThanN2 = array[j - 1] > array[j]; // if is n1 greater than n2 returns 1, else 0

      if(n1IsGreaterThanN2)
        UTIL_Swap(&array[j - 1], &array[j]); // swapping values
    }
  }
}

// function to free memory
void ARRAY_Free(int *array) {
  free(array);
}