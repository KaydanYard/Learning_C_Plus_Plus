#include <iostream>
#include <string>

using namespace std;

// Dynamic Memory Allocation

int main() {

	// Heap (Free Store)
	int* numbers = new int[10];
	delete[] numbers;
	numbers = nullptr;

	return 0;
}