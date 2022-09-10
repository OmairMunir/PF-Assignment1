#include <iostream>

using namespace std;

int main() {
	int value1;
	int value2;

	cout << "Enter first number: ";
	cin >> value1;

	cout << "Enter second number: ";
	cin >> value2;

	swap(value1, value2);

	cout << "Value1: "
		<< value1 << ". ";
	cout << "Value2: "
		<< value2;

	return 0;
}