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
	cout << "1- Create account" << endl
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
	}

	return 0;
}