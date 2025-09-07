#define _USE_MATH_DEFINES

#include <cmath>
#include <cstdlib>
#include <ctime>
#include <iomanip>
#include <iostream>
#include <string>

using namespace std;
// Defining and Calling Functions

void greet(string name) {
	cout << "Hello " << name << endl;
}

string fullName(string firstName, string lastName) {
	// Concatenating (combining)
	return firstName + " " + lastName;
}

int main() {
// Calling - invoking - executing
	greet(fullName("Kaydan", "Yardley"));

	cout << "Done";

	return 0;
}