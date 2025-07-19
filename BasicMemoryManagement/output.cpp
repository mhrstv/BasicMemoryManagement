#include "output.h"
#include "array.h"

#include <iostream>
#include <conio.h>

void showMenu(int*& array, int& arraySize) {
	int choice = NULL;
	while (choice != 6) {
		Clear();
	    std::cout << "Menu - Basic Array Memory Management\n-----------------------------------\n";
	    std::cout << "1. Insert\n";
	    std::cout << "2. Delete\n";
	    std::cout << "3. Update\n";
	    std::cout << "4. Display Array\n";
		std::cout << "5. Reinitialize Array\n";
	    std::cout << "6. Exit" << std::endl;
	    std::cin >> choice;
	    
	    int index, element;
	    switch (choice) {
	    	case 1:
				std::cout << "Enter element and index to insert: ";
	    		std::cin >> element >> index;
	    		insertElement(element, index, array, arraySize);
	    		break;
	    	case 2:
				std::cout << "Enter index to delete: ";
	    		std::cin >> index;
	    		deleteElement(index, array, arraySize);
	    		break;
	    	case 3:
				std::cout << "Enter element and index to update: ";
	    		std::cin >> element >> index;
	    		updateElement(element, index, array, arraySize);
	    		break;
	    	case 4:
	    		displayArray(array, arraySize);
				std::cout << "Press any key to continue..." << std::endl;
				_getch();
	    		break;
			case 5:
				reinitializeArray(array, arraySize);
				break;
	    }
	}
}

void Clear()
{
#if defined _WIN32
	system("cls");
#elif defined (__LINUX__) || defined(__gnu_linux__) || defined(__linux__)
	system("clear");
#elif defined (__APPLE__)
	system("clear");
#endif
}