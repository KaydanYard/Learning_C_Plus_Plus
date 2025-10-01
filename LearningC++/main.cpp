#include <iostream>
#include <string>

using namespace std;

// Declaring and Using Pointers

int main() {
	int number = 10;
	//  (Referencing)	(Addressing)		(De-Referencing)
	// ...* = pointer, & = address of var, *... = access original's value
	int* ptr = &number;

	*ptr = 20;
	cout << *ptr;

	return 0;
}