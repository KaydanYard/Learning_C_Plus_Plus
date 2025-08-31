#define _USE_MATH_DEFINES

#include <cmath>
#include <cstdlib>
#include <ctime>
#include <iomanip>
#include <iostream>
#include <string>

using namespace std;

int main() {
// The Switch Statement
	/*cout << "1- Create account" << endl
		 << "2- Change password" << endl
		 << "3- Quit" << endl
		 << "Select an option: ";

	int input;
	cin >> input;

	switch (input) {
		case 1: 
			cout << "You selected 1";
			break;
		case 2:
			cout << "You selected 2";
			break;
		default:
			cout << "Goodbye!";
	}*/

// Exercise 13 create a basic calculator
	int var1;
	int var2;
	int op3rator;
	string output;

	cout << "Enter the first value: ";
	cin >> var1;
	
	cout << "Pick one of the following" << endl
		 << "1- Multiply" << endl
		 << "2- Divide" << endl
		 << "3- Add" << endl
		 << "4- Subtract" << endl;
	cin >> op3rator;
	
	cout << "Enter the second value: ";
	cin >> var2;

	switch (op3rator) {
		case 1:
			output = var1 * var2;
			break;
		case 2:
			output = var1 / var2;
			break;
		case 3:
			output = var1 + var2;
			break;
		case 4:
			output = var1 - var2;
			break;
		default:
			output = "NaN";
			cout << "I don't understand" << endl;
	}

	cout << "Output: " << output;

	return 0;
}