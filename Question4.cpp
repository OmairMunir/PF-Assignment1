#include <iostream>

using namespace std;

int main() {
	string name, cityName, collegeName,
		profession, petName, petType;

	int age;

	cout << "Welcome to the word game!" << "\n\n";

	cout << "Please enter your name: ";
	cin >> name;

	cout << "Please enter your age: ";
	cin >> age;

	cout << "Please enter the name of your city: ";
	cin >> cityName;

	cout << "Please enter the name of your college: ";
	cin >> collegeName;

	cout << "Please enter your profession: ";
	cin >> profession;

	cout << "Please enter the name of your pet: ";
	cin >> petName;

	cout << "Please enter the animal type of your pet: ";
	cin >> petType;

	cout << "\n";

	cout << "There once was a person named " << name << " who lived in " << cityName << ". ";
	cout << "At the age of " << age << ", " << name << " went to college at " << collegeName << ". ";
	cout << name << " graduated from " << collegeName << " and went to work as a " << profession << ". ";
	cout << "Then, " << name << " adopted a(n) " << petType << " named " << petName << ". ";
	cout << "They both lived happily ever after!";

	cout << "\n";

	return 0;
}