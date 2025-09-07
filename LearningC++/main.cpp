#define _USE_MATH_DEFINES

#include <cmath>
#include <cstdlib>
#include <ctime>
#include <iomanip>
#include <iostream>
#include <string>

using namespace std;
// Overloading Functions

void greet(string name) {
	cout << "Hello " << name;
}

// Signature = name + (number and type of parameters)
void greet(string title, string name) {
	cout << "Hello " << title << " " << name;
}

int main() {
	greet("Kaydan");

	return 0;
}