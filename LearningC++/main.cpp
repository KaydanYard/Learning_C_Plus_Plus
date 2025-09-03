#define _USE_MATH_DEFINES

#include <cmath>
#include <cstdlib>
#include <ctime>
#include <iomanip>
#include <iostream>
#include <string>

using namespace std;

int main() {
// While Loops
	/*int i = 1;
	while (i <= 5) {
		cout << i << endl;
		i++;
	}*/

	/*int number = 0;
	while (number < 1 || number > 5) {
		cout << "Number: ";
		cin >> number;
		if (number < 1 || number > 5) {
			cout << "Invalid Number, enter a number from 1 to 5" << endl;
		}
	}*/

// Exercise 16: Ask for the secret number
	int secretNumber = 21;
	int guess = 0;

	while (guess != secretNumber) {
		cout << "Guess the secret number: ";
		cin >> guess;
		if (secretNumber == guess) {
			cout << "That's correct" << endl;
		}
		else {
			cout << "Try Again!" << endl;
		}
	}

	return 0;
}