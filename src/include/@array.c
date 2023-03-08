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

// function to return a clone of an array
int* ARRAY_Clone(int *clone, int *arrayToGetClone) {
  for(int i = 0; i < arraySize; i++)
    clone[i] = arrayToGetClone[i];
}

// function to compare to arrays
int ARRAY_CompareArrays(int *array1, int *array2) {
  if(!array1 || !array2) { // is array NULL?
    return 0;
  }

  int isEqual = 1;

  for(int i = 0; i < arraySize; i++)
    if(array1[i] != array2[i]) {
      isEqual = 0;
      break;
    }
  
  return isEqual;
}

// function to randomize array
void ARRAY_Randomize(int *array) {
  UTIL_InitRand(); // applying a seed to random numbers

  for(int i = 0; i < arraySize; i++)
    array[i] = UTIL_Rand(1, arrayMaxValue); // generating a random number for each item in the array
}

// function to sort only 1 step
void ARRAY_SortNext(int *array, int size) {
  for(int i = 1; i < size; i++) {
    int n1IsGreaterThanN2 = array[i - 1] > array[i]; // if is n1 greater than n2 returns 1, else 0

    if(n1IsGreaterThanN2)
      UTIL_Swap(&array[i - 1], &array[i]); // swapping values
  }
}

// function to free memory
void ARRAY_Free(int *array) {
  free(array);
}