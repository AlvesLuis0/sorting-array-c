#include <stdio.h>
#include <stdlib.h>

#include "include/array.h"
#include "include/render.h"

#define SIZE 15

int main(int argc, char **argv) {
  int size = SIZE;

  // if have an argument, convert the argument to int and set size
  if(argc == 2)
    size = atoi(argv[1]);

  int *array = ARRAY_New(size); // declaring array

  ARRAY_Randomize(array, size); // randomizing array
  RENDER_PrintArray(array, size); // print values in array

  getchar();

  ARRAY_Sort(array, size); // sorting array
  RENDER_PrintArray(array, size); // printing array sorted

  ARRAY_Free(array); // freeing memory

  return 0;
}