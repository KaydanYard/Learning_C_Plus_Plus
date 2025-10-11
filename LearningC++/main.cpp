#include <iostream>
#include <string>
#include <memory>

using namespace std;

// Smart Pointers: Working with Unique Pointers

int main() {
	auto numbers = make_unique<int[]>(10);
	auto y = make_unique<int>();
	numbers[0] = 10;
	cout << numbers[0];

	return 0;
}