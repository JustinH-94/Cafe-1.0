#include "OrderCalculations.h"
#include <iostream>
#include <string>
#include "ItemList.h"
#include <iomanip>


OrderCalculations::OrderCalculations()
{
	bool StringCompare(std::string str1, std::string str2);
	ItemList Items;
	std::cout << "\nWhat would you like to order?" << std::endl;
	getline(std::cin, PlayerOrder);
	std::cout << "\nAnd how many would you like to order?" << std::endl;
	std::cin >> OrderAmount;

	for (unsigned int i = 0; i < Items.List.size(); i++) {
		if (StringCompare(PlayerOrder, Items.List[i].itemName) == true) 
		{
			totalCost = OrderAmount * Items.List[i].itemCost;
		}
	}

	std::cout << "\nYou ordered " << OrderAmount << " " << PlayerOrder << ", so your total cost is $" << totalCost << std::endl;
	std::cin.get();

}

bool StringCompare(std::string str1, std::string str2) {
	if (str1.compare(str2) == 0) {
		return true;
	}
	return false;

}