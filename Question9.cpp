#include <iostream>

using namespace std;

int main() {
	unsigned int elapsedSeconds;

	cout << "Enter elapsed seconds: ";
	cin >> elapsedSeconds;

	int hours = elapsedSeconds / 3600;
	elapsedSeconds %= 3600;

	int minutes = elapsedSeconds / 60;
	elapsedSeconds %= 60;

	cout << hours << ":" << minutes << ":" << elapsedSeconds;

	return 0;
}