#define _USE_MATH_DEFINES

#include <cmath>
#include <cstdlib>
#include <ctime>
#include <iomanip>
#include <iostream>
#include <string>

using namespace std;

int main() {
// If Statements
	/*int temperature = 70;
	if (temperature < 60) {
		cout << "Cold";
	}
	else if (temperature < 90) {
		cout << "Nice";
	}
	else {
		cout << "Hot";
	}
	return 0;*/

// Exercise 11 Write an if statement to determine what the commission rate should be
	int sales = 10'000;
	double commission;
	
	if (sales <= 10'000) {
		commission = 0.10;
	}
	else if (sales > 10'000 && sales <= 15'000) {
		commission = 0.15;
	}
	else {
		commission = 0.20;
	}

	cout << "Commission: " << commission;
}