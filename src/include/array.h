#ifndef ARRAY_H
#define ARRAY_H

int arraySize;
int arrayMaxValue;

int* ARRAY_New(int size, int maxValue);
void ARRAY_Randomize(int *array);
void ARRAY_SortNext(int *array, int size);
void ARRAY_Sort(int *array);
void ARRAY_Free(int *array);

#endif