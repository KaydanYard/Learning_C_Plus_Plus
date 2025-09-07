#define _USE_MATH_DEFINES

#include <cmath>
#include <cstdlib>
#include <ctime>
#include <iomanip>
#include <iostream>
#include <string>

using namespace std;
// Passing Arguments by Value or Reference

	// the '&' is what you pass in to reference a variable
void increasePrice(double& price) {
	price *= 1.2;
}

int main() {
	double price = 100;
	increasePrice(price);
	cout << price;

	return 0;
}