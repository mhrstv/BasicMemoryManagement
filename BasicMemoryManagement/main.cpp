#include "array.h"
#include "output.h"

#include <iostream>

int main()
{
	std::cout << "Select the initial size of the array: ";
	int arraySize; std::cin >> arraySize;
	int* array = new int[arraySize];
	initArray(array, arraySize);

	showMenu(array, arraySize);

	delete[] array;
}