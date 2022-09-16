#include <iostream>
#include <math.h>

using namespace std;

int main() {
	int principle, rateOfInterest;
	float time;

	cout << "Input the Principle: ";
	cin >> principle;

	cout << "Input the Rate of Interest: ";
	cin >> rateOfInterest;

	cout << "Input the Time: ";
	cin >> time;

	float total = principle * pow(1 + (rateOfInterest / 100.0f), time);
	float interest = total - principle;

	cout << fixed;

	cout << "The Interest after compounded for the amount "
		<< principle << " for " << time << " years @ " << rateOfInterest << "% is: "
		<< interest << "\n";

	cout << "The total amount after compounded for the amount "
		<< principle << " for " << time << " years @ " << rateOfInterest << "% is: "
		<< total;

	return 0;
}