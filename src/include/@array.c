#include <stdlib.h>

#include "util.h"
#include "array.h"

// function to declare array
int* ARRAY_New(int size, int maxValue) {
  int *array = (int*) calloc(size, sizeof(int)); // allocating memory to the array
  arraySize = size;
  arrayMaxValue = maxValue;
  return array;
}

// function to randomize array
void ARRAY_Randomize(int *array) {
  UTIL_InitRand(); // applying a seed to random numbers

  for(int i = 0; i < arraySize; i++)
    array[i] = UTIL_Rand(1, 20); // generating a random number for each item in the array
}

// function to sort only 1 step
void ARRAY_SortNext(int *array, int size) {
  for(int i = 1; i < size; i++) {
    int n1IsGreaterThanN2 = array[i - 1] > array[i]; // if is n1 greater than n2 returns 1, else 0

    if(n1IsGreaterThanN2)
      UTIL_Swap(&array[i - 1], &array[i]); // swapping values
  }
}

// function to sort array
void ARRAY_Sort(int *array) {
  for(int i = arraySize; i > 0 ; i--) {
    ARRAY_SortNext(array, i);
  }
}

// function to free memory
void ARRAY_Free(int *array) {
  free(array);
}