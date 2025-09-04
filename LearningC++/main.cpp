#define _USE_MATH_DEFINES

#include <cmath>
#include <cstdlib>
#include <ctime>
#include <iomanip>
#include <iostream>
#include <string>

using namespace std;

int main() {
// Do-While Loops
	/*
	// While Loop
	while (...) {

	}
	
	// Do While Loop
	do {

	} while (...);*/

	int number;

	do {
		cout << "Number: ";
		cin >> number;
	} while (number < 1 || number > 5);

	return 0;
}