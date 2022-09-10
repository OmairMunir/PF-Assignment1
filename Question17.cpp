#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	const float TAXES = 14.0f / 100.0f;

	float perHourPayRate;
	float workingHours;

	cout << "Enter payrate per hour: ";
	cin >> perHourPayRate;

	cout << "Enter working hours: ";
	cin >> workingHours;

	float totalIncome = perHourPayRate * workingHours;
	float taxedIncome = totalIncome -= totalIncome * TAXES;
	float clothesAmount = taxedIncome * (10.0f / 100.0f);
	float schoolSuppliesAmount = taxedIncome * (1.0f / 100.0f);
	
	taxedIncome -= clothesAmount + schoolSuppliesAmount;

	float bondsAmount = taxedIncome * (25.0f / 100.0f);
	float parentsAmount = bondsAmount * (50.0f / 100.0f);

	cout << "Total income: $" << totalIncome << ".\n";
	cout << "Taxed income: $" << taxedIncome << ".\n";
	cout << "Money spent on clothes and other accessories: $" << clothesAmount << ".\n";
	cout << "Money spent on school supplies: $" << schoolSuppliesAmount << ".\n";
	cout << "Money spent on buying bonds: $" << bondsAmount << ".\n";
	cout << "Money spent on buying bonds by parents: $" << parentsAmount << ".\n";

	return 0;
}