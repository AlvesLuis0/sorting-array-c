#include <stdio.h>
#include <windows.h>

#include "include/array.h"
#include "include/render.h"

#define ARRAY_SIZE 100
#define ARRAY_MAX_VALUE 50

void SortArray(int *array);

int main(int argc, char **argv) {
  int *array = ARRAY_New(ARRAY_SIZE, ARRAY_MAX_VALUE); // declaring array

  ARRAY_Randomize(array); // randomizing array
  RENDER_ShowArray(array); // render a graph based on the array
  //RENDER_PrintArray(array); // prints values in the array

  getchar();

  SortArray(array); // sorting array
  RENDER_ShowArray(array); // rendering array sorted
  //RENDER_PrintArray(array); // printing array sorted

  ARRAY_Free(array); // freeing memory

  return 0;
}

// function to sort array
void SortArray(int *array) {
  int timeToWait = 5000 / ARRAY_SIZE;

  for(int i = ARRAY_SIZE; i > 0 ; i--) {
    Sleep(timeToWait); // waiting some seconds to pass to next frame
    ARRAY_SortNext(array, i); // sort array only 1 step
    RENDER_ShowArray(array);
    //RENDER_PrintArray(array);
  }
}