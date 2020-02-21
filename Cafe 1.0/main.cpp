#include <iostream>
#include <vector>
#include <string>
#include <stdlib.h>
#include "ItemList.h"
#include "Introduction.h"
#include "OrderCalculations.h"
int main()
{
	Introduction();
	int PlayerResponse;
	std::cin.get();
	while (true) 
	{
		system("CLS");
		std::cout << "What would you like to do?" << std::endl;
		std::cout << "1. Check Menu" << std::endl;
		std::cout << "2. Order" << std::endl;
		std::cout << "3. Leave" << std::endl;
		std::cin >> PlayerResponse;

		switch (PlayerResponse)
		{
		case 1:
			ItemList();
			std::cin.ignore();
			break;
		case 2:
			OrderCalculations();
			std::cin.get();
		case 3:
			std::exit(EXIT_FAILURE);
			break;
		default:
			break;
		}

	}
	return 0;
}