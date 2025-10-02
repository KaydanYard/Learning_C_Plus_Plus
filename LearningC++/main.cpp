#include <iostream>
#include <string>

using namespace std;

// The Relationship between Arrays and Pointers

void printNumbers(int numbers[]) {
	numbers[0] = 0;
}

int main() {
	int numbers[] = {10, 20, 30};
	printNumbers(numbers);
	cout << numbers[0];

	return 0;
}