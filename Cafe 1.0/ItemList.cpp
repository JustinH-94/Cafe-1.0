#include "ItemList.h"
#include <iostream>
#include <iomanip>
#include <vector>
#include <string>

ItemList::ItemList()
{
	List.push_back(Item("Coffee", 2.15));
	List.push_back(Item("Tea", 2.75));
	List.push_back(Item("Sandwich", 3.50));
	List.push_back(Item("Burger", 5.25));

	std::cout << std::setw(8) << "Item" << std::setw(10) << "Cost" << std::endl << std::endl;
	for (unsigned int i = 0; i < List.size(); i++) {
		std::cout << std::setw(8)<< std::right << List[i].itemName << std::setw(6) 
				  << std::setprecision(2) << std::fixed << "$" << List[i].itemCost << std::endl;
	}
	std::cin.get();

}
