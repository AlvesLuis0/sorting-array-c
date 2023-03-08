#include <stdio.h>
#include <windows.h>

#include "include/array.h"
#include "include/render.h"

#define ARRAY_SIZE 100
#define ARRAY_MAX_VALUE 25

void SortArray(int *array, int *lastArray);

int main(int argc, char **argv) {

  int size = ARRAY_SIZE;
  int maxValue = ARRAY_MAX_VALUE;

  if(argc == 2)
    size = atoi(argv[1]);

  if(argc == 3) {
    size = atoi(argv[1]);
    maxValue = atoi(argv[2]);
  }

  int *array = ARRAY_New(size, maxValue); // declaring array
  int *lastArray = ARRAY_New(size, maxValue); // an array to compare

  ARRAY_Randomize(array); // randomizing array
  RENDER_ShowArray(array); // render a graph based on the array
  //RENDER_PrintArray(array); // prints values in the array

  getchar();

  SortArray(array, lastArray); // sorting array
  ARRAY_Free(lastArray);
  ARRAY_Free(array); // freeing memory

  return 0;
}

// function to sort array
void SortArray(int *array, int *lastArray) {
  int timeToWait = 5000 / arraySize;

  for(int i = arraySize; i > 0 && !ARRAY_CompareArrays(array, lastArray); i--) {
    Sleep(timeToWait); // waiting some seconds to pass to next frame

    ARRAY_Clone(lastArray, array); // literally clone an array

    ARRAY_SortNext(array, i); // sort array only 1 step
    RENDER_ShowArray(array);
    //RENDER_PrintArray(array);
  }
}