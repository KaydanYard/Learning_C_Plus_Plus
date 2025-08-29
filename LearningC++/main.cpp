#define _USE_MATH_DEFINES

#include <cmath>
#include <cstdlib>
#include <ctime>
#include <iomanip>
#include <iostream>
#include <string>

using namespace std;

int main() {
// Nesting if statements
	bool isUSCitizen = true;
	bool isCAResident = false;
	short tuition;
	
	if (isUSCitizen) {
		if (isCAResident) {
			tuition = 0;
		}
		else {
			tuition = 1000;
		}
	}
	else {
		tuition = 3000;
	}

	cout << "Tution: " << tuition;

	return 0;
}