#include "array.h"
#include <iostream>

void initArray(int*& array, int& arraySize) {
	for (int i = 0; i < arraySize; i++) {
		array[i] = 0;
	}
}

void displayArray(int array[], int& arraySize) {
	for (int i = 0; i < arraySize; i++) {
		std::cout << array[i] << " ";
	}
	std::cout << std::endl;
}

void insertElement(int element, int index, int*& array, int& arraySize) {
	if (index < arraySize)
	{
		array[index] = element;
	}
	else {
		int* newArray = new int[index + 1];
		for (int i = 0; i < arraySize; i++)
		{
			newArray[i] = array[i];
		}
		for (int i = arraySize; i < index; i++)
		{
			newArray[i] = 0;
		}
		newArray[index] = element;
		delete[] array;
		array = newArray;
		arraySize = index + 1;
	}
}

void deleteElement(int index, int*& array, int& arraySize)
{
	if (index >= arraySize) {
		std::cout << "Element at index {" << index << "} does not exist." << std::endl;
	}
	else {
		int* newArray = new int[arraySize - 1];
		for (int i = 0, j = 0; i < arraySize; i++)
		{
			if (i != index) newArray[j++] = array[i];
		}
		delete[] array;
		array = newArray;
		arraySize--;
	}
}

void updateElement(int element, int index, int*& array, int& arraySize) {
	if (index >= arraySize) {
		std::cout << "Element at index {" << index << "} does not exist." << std::endl;
	}
	else array[index] = element;
}

void reinitializeArray(int*& array, int& arraySize) {
	std::cout << "Select new size of the array: ";
	std::cin >> arraySize;
	array = new int[arraySize];
	initArray(array, arraySize);
}