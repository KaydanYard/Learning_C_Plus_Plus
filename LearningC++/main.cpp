#define _USE_MATH_DEFINES

#include <cmath>
#include <cstdlib>
#include <ctime>
#include <iomanip>
#include <iostream>
#include <string>

using namespace std;

int main() {
// Exercise 17: Create a staircase with *
	/*for (int x = 1; x <= 5; x++) {
		for (int y = 1; y <= x; y++) {
			cout << "*";
		}
		cout << endl;
	}*/

// Extra Credit make an * pyramid
	int rows = 5;

	for (int row = 1; row <= rows; row++) {

		for (int space = 1; space <= rows - row; space++) {
			cout << " ";
		}

		for (int column = 1; column <= 2 * row - 1; column++) {
			cout << "*";
		}
		cout << endl;
	}
	
	return 0;
}