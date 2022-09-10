#include <iostream>

using namespace std;

int main() {
	const int METRIC_TON = 2205;
	int riceAmountPerBag;

	cout << "Enter rice amount per bag: ";
	cin >> riceAmountPerBag;

	cout << "Amount of bags needed: "
		<< METRIC_TON / riceAmountPerBag;

	return 0;
}