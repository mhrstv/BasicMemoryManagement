#pragma once
void initArray(int*& array, int& arraySize);
void displayArray(int array[], int& arraySize);
void insertElement(int element, int index, int*& array, int& arraySize);
void deleteElement(int index, int*& array, int& arraySize);
void updateElement(int element, int index, int*& array, int& arraySize);
void reinitializeArray(int*& array, int& arraySize);