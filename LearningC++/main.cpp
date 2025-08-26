#define _USE_MATH_DEFINES

#include <cmath>
#include <cstdlib>
#include <ctime>
#include <iomanip>
#include <iostream>
#include <string>

using namespace std;

int main() {
// Logical Operators
	int age = 20;
	int salary = 50'000;
	bool isEligible = (age > 18 && age < 65) && salary > 30'000;
	cout << boolalpha << isEligible;
	return 0;
}