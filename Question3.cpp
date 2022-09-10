#include <iostream>

using namespace std;

int main() {
	int number;

	cout << "Enter 5 digit number: ";
	cin >> number;

	int digit1, digit2, digit3,
		digit4, digit5;

	digit1 = number % 10;
	number /= 10;

	digit2 = number % 10;
	number /= 10;

	digit3 = number % 10;
	number /= 10;

	digit4 = number % 10;
	number /= 10;

	digit5 = number % 10;
	number /= 10;

	cout << digit5 << "   ";
	cout << digit4 << "   ";
	cout << digit3 << "   ";
	cout << digit2 << "   ";
	cout << digit1;

	return 0;
}