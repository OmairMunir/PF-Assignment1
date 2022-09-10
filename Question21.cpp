#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

int main() {
	float avgSpeedCarA,
		avgSpeedCarB;

	float elapsedTimeHours,
		elapsedTimeMinutes;

	cout << "Enter average speed of car A: ";
	cin >> avgSpeedCarA;

	cout << "Enter average speed of car B: ";
	cin >> avgSpeedCarB;

	cout << "Enter elapsed time in hours and minutes: ";
	cin >> elapsedTimeHours >> elapsedTimeMinutes;

	elapsedTimeHours += elapsedTimeMinutes / 60.f;

	float carATotalDistance = avgSpeedCarA * elapsedTimeHours;
	float carBTotalDistance = avgSpeedCarB * elapsedTimeHours;

	float shortestDistance = sqrt(pow(carATotalDistance, 2) + pow(carBTotalDistance, 2));

	cout << "Shortest distance between both cars: " << shortestDistance << " miles.";

	return 0;
}