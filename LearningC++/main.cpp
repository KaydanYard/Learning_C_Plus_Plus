#define _USE_MATH_DEFINES

#include <cmath>
#include <cstdlib>
#include <ctime>
#include <iomanip>
#include <iostream>
#include <string>

using namespace std;

int main() {
// The Conditional Operator
	/*int sales = 11'000;
	double commission = (sales > 10'000) ? 0.1 : 0.05;

	cout << commission;*/

// Exercise 12: get two numbers, store the larger in a seperate variable, print the larger
	cout << "Enter two values: ";

	int num1;
	int num2;
	cin >> num1 >> num2;
	
	int bigNum = (num1 > num2) ? num1 : num2;
	cout << "Big Num: " << bigNum;

	return 0;
}