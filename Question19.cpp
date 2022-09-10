#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	int gallonPaint;
	int doorLength, doorWidth;
	int window1Length, window1Width,
		window2Length, window2Width;
	int bookshelfLength, bookshelfWidth;
	int roomLength, roomWidth, roomHeight;

	cout << "Enter area that can be painted with one gallon (in sqft): ";
	cin >> gallonPaint;

	cout << "Enter door length: ";
	cin >> doorLength;

	cout << "Enter door width: ";
	cin >> doorWidth;

	cout << "Enter window 1 length: ";
	cin >> window1Length;

	cout << "Enter window 1 width: ";
	cin >> window1Width;

	cout << "Enter window 2 length: ";
	cin >> window2Length;

	cout << "Enter window 2 width: ";
	cin >> window2Width;

	cout << "Enter bookshelf length: ";
	cin >> bookshelfLength;

	cout << "Enter bookshelf width: ";
	cin >> bookshelfWidth;

	cout << "Enter room length: ";
	cin >> roomLength;

	cout << "Enter room width: ";
	cin >> roomWidth;

	cout << "Enter room height: ";
	cin >> roomHeight;


	int roomArea = 2 * (roomLength + roomWidth) * roomHeight;
	int windowsArea = (window1Length * window1Width) + (window2Length * window2Width);
	int doorArea = doorLength * doorWidth;
	int bookshelfArea = bookshelfLength * bookshelfWidth;

	roomArea -= windowsArea + doorArea + bookshelfArea;

	cout << "Room area that needs to be painted: " << roomArea << " sqft.\n";
	cout << "Amount of paint required: " << roomArea / gallonPaint << " gallons.";

	return 0;
}