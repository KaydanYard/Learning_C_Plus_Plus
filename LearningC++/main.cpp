#include <iostream>
#include <string>

using namespace std;

// Exercise 19: Create a Linear Search Algorithm (very basic shit)

int findTargetValue(int* values, int size, int targetValue) {
	for (int i = 0; i < size; i++) {
		if (targetValue == values[i]) {
			cout << targetValue << " and " << values[i] << " match" << endl;
			return targetValue;
		}
		else {
			cout << "Not a match" << endl;
		}
	}

	cout << "Couldn't find a single match" << endl;
	return -1;
}

int main() {
	int values[] =  { 10, 20, 30 };
	int targetValue = 30;

	findTargetValue(values, sizeof(values) / sizeof(int), targetValue);
	
	return 0;
}