#define _USE_MATH_DEFINES

#include <cmath>
#include <cstdlib>
#include <ctime>
#include <iomanip>
#include <iostream>
#include <string>

using namespace std;

int main() {
// Order of Logical Operators
	// ()
	// !
	// &&
	// ||
	//bool a = true;
	//bool b = false;
	//bool c = false;
	//bool result = a || b && c;
	//cout << boolalpha << result;

	//return 0;

// Exercise 10: Verify if a job applicant is able to apply based on qualifications
	bool isCitizen = true;
	bool hasBachelors = false;
	short yearsOfExperience = 3;

	bool result = isCitizen && (hasBachelors || yearsOfExperience >= 2);
	cout << boolalpha << "Your result is: " << result;
}