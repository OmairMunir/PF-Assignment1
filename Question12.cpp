#include <iostream>
#include <math.h>

using namespace std;

int main() {
	float voltage, resistance,
		capacitance, inductance, frequency;

	float current;

	cout << "Enter voltage: ";
	cin >> voltage;

	cout << "Enter resistance: ";
	cin >> resistance;

	cout << "Enter capacitance: ";
	cin >> capacitance;

	cout << "Enter inductance: ";
	cin >> inductance;

	cout << "Enter frequency: ";
	cin >> frequency;

	const float ANGULAR_FREQUENCY = 2 * (22.0f / 7.0f) * frequency;

	current = voltage
			/ sqrt(pow(resistance, 2)
				+ pow((ANGULAR_FREQUENCY * inductance)
					- (1 / (ANGULAR_FREQUENCY * capacitance)), 2));

	cout << "Current: " << current;

	return 0;
}