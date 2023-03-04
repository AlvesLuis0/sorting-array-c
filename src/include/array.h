#ifndef ARRAY_H
#define ARRAY_H

int* ARRAY_New(int size);
void ARRAY_Print(int *array, int size);
void ARRAY_Randomize(int *array, int size);
void ARRAY_Sort(int *array, int size);
void ARRAY_Free(int *array);

#endif