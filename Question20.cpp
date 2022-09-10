#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	const float NUTS_TO_DRY_FRUIT_RATIO = 0.70f;

	int numberOfStudents;
	float caloriesRequired,
		caloriesInNuts;

	cout << "Enter number of students: ";
	cin >> numberOfStudents;

	cout << "Enter number of calories required for each student from the mixture: ";
	cin >> caloriesRequired;

	cout << "Enter the number of calories in each pound of nuts: ";
	cin >> caloriesInNuts;

	float caloriesInDryFruit = caloriesInNuts / NUTS_TO_DRY_FRUIT_RATIO;
	float totalCalories = numberOfStudents * caloriesRequired;
	
	float numPounds = totalCalories / (caloriesInDryFruit + caloriesInNuts);

	cout << "Number of pounds required: " << numPounds << " lbs.";

	return 0;
}