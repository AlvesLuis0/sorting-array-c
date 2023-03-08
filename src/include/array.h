#ifndef ARRAY_H
#define ARRAY_H

int arraySize;
int arrayMaxValue;

int* ARRAY_New(int size, int maxValue);
int* ARRAY_Clone(int *clone, int *arrayToGetClone);
int ARRAY_CompareArrays(int *array1, int *array2);
void ARRAY_Randomize(int *array);
void ARRAY_SortNext(int *array, int size);
void ARRAY_Free(int *array);

#endif