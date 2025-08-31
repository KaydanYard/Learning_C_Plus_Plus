#define _USE_MATH_DEFINES

#include <cmath>
#include <cstdlib>
#include <ctime>
#include <iomanip>
#include <iostream>
#include <string>

using namespace std;

int main() {
// Exercise 14: ask the user for a positive number and print the factorial of that number
	int input;
	long factorial = 1.0;

	cout << "Enter a positive number to find it's factorial: ";
	cin >> input;
	
	if (input < 0)
		cout << "Error! Factorial of a Negative number does not exist";
	else
		for (int i = 1; i <= input; ++i) {
			factorial *= i;
		}

	cout << factorial;

	return 0;
}