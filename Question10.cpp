#include <iostream>

using namespace std;

int main() {
	char lowercaseAlphabet;
	char uppercaseAlphabet;

	cout << "Enter an alphabet in lowercase: ";
	cin >> lowercaseAlphabet;

	uppercaseAlphabet = lowercaseAlphabet - 32;
	cout << "Uppercase alphabet: " << uppercaseAlphabet;

	return 0;
}