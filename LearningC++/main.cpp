#include <iostream>
#include <string>

using namespace std;

// Exercise 21: Implement the swap function for swapping two variables using pointers

void swap(int* first, int* second) {
	int holder = *first;
	*first = *second;
	*second = holder;
}

int main() {
	int x = 10;
	int y = 20;
	swap(&x, &y);

	cout << "X: " << x << endl
		 << "Y: " << y;

	return 0;
}