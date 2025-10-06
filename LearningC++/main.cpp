#include <iostream>
#include <string>

using namespace std;

// Pointer Arithmetic

int main() {
	int numbers[] = { 10, 20, 30};
	int* ptr = numbers;
	
	// all of the following are the same+
	cout << *(ptr + 1);
	cout << ptr[1]; 
	cout << numbers[1];

	return 0;
}