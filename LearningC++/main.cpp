#define _USE_MATH_DEFINES

#include <cmath>
#include <cstdlib>
#include <ctime>
#include <iomanip>
#include <iostream>
#include <string>

using namespace std;
// Declaring Functions

	// Function declaration
void greet(string name);

int main() {
	greet("Kaydan");

	return 0;
}

	// Function definition
void greet(string name) {
	cout << "Hello " << name;
}