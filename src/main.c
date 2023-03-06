#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

#include "include/array.h"
#include "include/render.h"

#define SIZE 15

void SortArray(int *array, int size);

int main(int argc, char **argv) {
  int size = SIZE;

  // if have an argument, convert the argument to int and set size
  if(argc == 2)
    size = atoi(argv[1]);

  int *array = ARRAY_New(size); // declaring array

  ARRAY_Randomize(array, size); // randomizing array
  RENDER_ShowArray(array, size); // render a graph based on the array
  RENDER_PrintArray(array, size); // prints values in the array

  getchar();

  SortArray(array, size); // sorting array
  RENDER_ShowArray(array, size); // rendering array sorted
  RENDER_PrintArray(array, size); // printing array sorted

  ARRAY_Free(array); // freeing memory

  return 0;
}

// function to sort array
void SortArray(int *array, int size) {
  for(int i = size; i > 0 ; i--) {
    Sleep(10000 / size);
    ARRAY_SortNext(array, i); // sort array only 1 step
    RENDER_ShowArray(array, size);
    RENDER_PrintArray(array, size);
  }
}