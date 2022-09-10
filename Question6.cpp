#include <iostream>

using namespace std;

int main() {
	const float MEAL_CHARGE = 44.50f;
	const float TAX_PERCENTAGE = 6.75f;
	const short TIP_PERCENTAGE = 15;

	float totalBill = 0.0f;
	float taxAmount = MEAL_CHARGE * (TAX_PERCENTAGE / 100.0f);
	float tipAmount;

	totalBill += MEAL_CHARGE;
	totalBill += taxAmount;

	tipAmount = totalBill * (TIP_PERCENTAGE / 100.0f);

	totalBill += tipAmount;

	cout << "Meal charge: $" << MEAL_CHARGE << "\n";
	cout << "Tax amount: $" << taxAmount << "\n";
	cout << "Tip amount: $" << tipAmount << "\n";
	cout << "Total bill: $" << totalBill;

	return 0;
}