#ifndef ItemList
#define ItemList

#include <iostream>
#include<vector>
#include <string>

class ItemList
{
public:
	ItemList();	
	struct Item {
		Item(std::string food, double cost): itemName(food), itemCost(cost){}
		std::string itemName;
		double itemCost;
	};
	std::vector<Item> List;


	/*std::vector<Item> List;*/
};
#endif