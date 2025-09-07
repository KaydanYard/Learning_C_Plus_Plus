#define _USE_MATH_DEFINES

#include <cmath>
#include <cstdlib>
#include <ctime>
#include <iomanip>
#include <iostream>
#include <string>

using namespace std;
// Local vs Global variables


// Global variable (global scope)
const double taxRate = 0.2;

double calculateTax(int sales) {
	return sales * taxRate;
}

int main() {
	// Local variable (local scope)
	int sales = 10'000;
	double tax = calculateTax(sales);
	cout << tax;

	return 0;
}