#include <iostream>
#include <string>

using namespace std;

// Exercise 22: Iterate over an array in reverse order using a pointer

int main() {
	int numbers[] = { 10, 20, 30 };

	int* ptr = &numbers[size(numbers) - 1];

	while (ptr >= numbers) {
		cout << *ptr << endl;
		ptr--;
	}

	return 0;
}