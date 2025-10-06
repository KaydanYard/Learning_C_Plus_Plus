#include <iostream>
#include <string>

using namespace std;

// Comparing Pointers

int main() {
	int x = 10;
	int y = 20;

	int* ptrX = &x;
	int* ptrY = &x;

	if (ptrX != nullptr)
		cout << *ptrX;

	return 0;
}