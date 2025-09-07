#define _USE_MATH_DEFINES

#include <cmath>
#include <cstdlib>
#include <ctime>
#include <iomanip>
#include <iostream>
#include <string>

using namespace std;
// Parameters with a default value

double calculateTax(double income, double taxRate = 0.2) {
	return income * taxRate;
}

int main() {
	double tax = calculateTax(10'000);
	cout << tax;

	return 0;
}