#include <iostream>
#include <string>

using namespace std;

// Dynamically Resizing an Array

int main() {
	int capacity = 5;
	int* numbers = new int[capacity];
	int entries = 0;
	
	while (true) {
		cout << "Number: ";
		cin >> numbers[entries];
		if (cin.fail()) 
			break;
		entries++;

		// The following already exists as a Vector
		if (entries == capacity) {
			capacity *=2;

			// Create a temp array (twice the size)
			int* temp = new int[capacity];

			// Copy all the elements
			for (int i = 0; i < entries; i++) 
				temp[i] = numbers[i];
		
			// Have "numbers" pointer point to the new array
			delete[] numbers;
			numbers = temp;
		}
	}

	for (int i = 0; i < entries; i++)
		cout << numbers[i] << endl;

	delete[] numbers;

	return 0;
}