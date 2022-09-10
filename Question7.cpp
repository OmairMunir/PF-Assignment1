#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

int main() {
	const double GRAVITATIONAL_CONSTANT = 6.67E10-8;
	
	float mass1;
	float mass2;
	float distance;

	cout << "Enter mass 1: ";
	cin >> mass1;

	cout << "Enter mass 2: ";
	cin >> mass2;

	cout << "Enter distance: ";
	cin >> distance;

	double force = GRAVITATIONAL_CONSTANT * ((mass1 * mass2) / pow(distance, 2));

	cout << fixed;
	cout << "Force: " << force;
	return 0;
}