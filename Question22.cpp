#include <iostream>
#include <iomanip>
#include <random>

using namespace std;

int main() {
	srand(time(NULL));
	int number1 = rand() % 50000 + 1;
	int number2 = rand() % 50000 + 1;

	cout << setw(10) << number1 << "\n";
	cout << "+" << setw(9) << number2 << "\n\n";
	cout << setfill('-') << setw(11) << "\n";

	cin.get();

	cout << setfill(' ');
	cout << setw(10) << number1 + number2;

	return 0;
}