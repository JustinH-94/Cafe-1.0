#ifndef OrderCalculations
#define OrderCalculations
#include <string>
class OrderCalculations
{
public:
	OrderCalculations();

private:
	int OrderAmount = 0;
	double totalCost = 0;
	std::string PlayerOrder;
};

#endif // !OrderCalculations