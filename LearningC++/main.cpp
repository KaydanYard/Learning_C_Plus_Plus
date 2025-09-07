#define _USE_MATH_DEFINES

#include <cmath>
#include <cstdlib>
#include <ctime>
#include <iomanip>
#include <iostream>
#include <string>

using namespace std;
// Exercise 18: Receive 2 numbers and return the biggest number

//void greet(string name) {
//	cout << "Hello " << name << endl;
//}
//
//string fullName(string firstName, string lastName) {
//	// Concatenating (combining)
//	return firstName + " " + lastName;
//}

int compare(int intOne, int intTwo) {
	if (intOne > intTwo) {
		return intOne;
	} 
	else if (intOne < intTwo) {
		return intTwo;
	}
	else {
		return 0;
	}
}

int main() {
//// Calling - invoking - executing
//	greet(fullName("Kaydan", "Yardley"));
//
//	cout << "Done";
//

	cout << compare(3, 23);

	return 0;
}