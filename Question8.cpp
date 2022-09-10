#include <iostream>

using namespace std;

int main() {
	int CUSTOMERS_SURVEYED = 12467;
	float DRINK_BUYERS = 14.0f;
	float CITRUS_PREFERENCE = 64.0f;

	int weeklyCustomers = CUSTOMERS_SURVEYED * (DRINK_BUYERS / 100.0f);
	int citrusCustomers = weeklyCustomers * (CITRUS_PREFERENCE / 100.0f);

	cout << "The approximate number of customers in the survey who purchase one or more energy drinks per week: "
		<< weeklyCustomers << "\n";

	cout << "The approximate number of customers in the survey who prefer citrus-flavored energy drinks: "
		<< citrusCustomers;
	return 0;
}