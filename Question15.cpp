#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	const float YEN_PER_DOLLAR = 142.50f;
	const float EUROS_PER_DOLLAR = 0.98f;

	float dollars;

	cout << "Enter dollars: $";
	cin >> dollars;

	cout << setprecision(2) << fixed;
	cout << "Yen: " << dollars * YEN_PER_DOLLAR << ".\n";
	cout << "Euros: " << dollars * EUROS_PER_DOLLAR << ".";

	return 0;
}