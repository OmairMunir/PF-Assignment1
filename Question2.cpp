#include <iostream>

using namespace std;

int main() {
	cout << "integer"	<< "\t"
		<< "square"		<< "\t"
		<< "cube"		<< "\n";

	for (int i = 0; i <= 5; ++i) {
		cout << i		<< "\t"
			<< i * i	<< "\t"
			<< i * i * i<< "\n";
	}

	return 0;
}