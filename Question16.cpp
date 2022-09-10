#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

int main() {
	float angle;

	cout << "Enter angle (in radians): ";
	cin >> angle;

	cout << setprecision(4) << fixed;
	cout << "Sine: " << sin(angle) << ".\n";
	cout << "Cosine: " << cos(angle) << ".\n";
	cout << "Tangent: " << tan(angle) << ".";
	return 0;
}