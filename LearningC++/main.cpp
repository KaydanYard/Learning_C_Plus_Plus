#define _USE_MATH_DEFINES

#include <cmath>
#include <cstdlib>
#include <ctime>
#include <iomanip>
#include <iostream>
#include <string>

using namespace std;

int main() {
// Comparison Operators
	int x = 10;
	double y = 5;
	bool result = (x == y);

	cout << boolalpha <<result;

	return 0;
}