#define _USE_MATH_DEFINES

#include <cmath>
#include <cstdlib>
#include <ctime>
#include <iomanip>
#include <iostream>

using namespace std; //allow you to use std without having to put it before every item that is apart of it.

int main() {

	/*
	int FileSize = 0;
	double Sales = 9.99;
	std::cout << FileSize;
	return 0;
	*/

// Exercise 1: swap the Values of a and b
	/*
	int a = 1;
	int b = 2;
	int Holder = a;

	 a = b;
	 b = Holder;

	std::cout << b;
	*/

// Constants
	/*const double pi = 3.14;
	return 0;*/

// Mathematical Expressions
	/*
	int x = 10;
	int y = x++; // x = 11, y = 10
	int z = ++x; // x = 12, z = 12
	std::cout << y;
	return 0;
	*/

// Order of Operations
	// ()
	// * and /
	// + and -

// Exercise 2: make z = 1.3333 using Order of Operations
	/*
	double x = 10;
	int y = 5;
	double z = (x + 10) / (3 * y);
	std::cout << z;
	return 0;
	*/

// Output
	/*int x = 10;
	int y = 20;
	cout << " x = " << x << endl
			  << " y = " << y;
	return 0;*/

// Exercise 3: Print out Sales, State Tax, County Tax, and Total Tax
	/*double sales = 95000;

	const double stateTaxRate = 0.04;
	double stateTax = sales * stateTaxRate;

	const double countyTaxRate = 0.02;
	double countyTax = sales * countyTaxRate;

	cout << "Sales: $" << sales << endl
		 << "State Tax: $" << stateTax << endl
		 << "County Tax: $" << countyTax << endl
		 << "Total Tax: $" << stateTax + countyTax;

	return 0;*/

// Reading from the Console
	/*cout << "Enter values for x and y: ";
	double x;
	double y;
	cin >> x >> y;
	cout << "x = " << x << ", y = " << y;
	return 0;*/

// Exercise 4: Convert Fahrenheit to Celsius
	/*double fahrenheit;
	
	cout << "Enter the Fahrenheit value: ";
	cin >> fahrenheit;
	
	double celsius = (fahrenheit - 32) * 5 / 9;
	cout << celsius << " degrees Celsius";

	return 0;*/

// Using the cmath standard library
	/*double result = floor(1.2);
	cout << result;
	return 0;*/

// Exercise 5: Calculate the Area of a Circle
	/*double radius;
	cout << "Enter the Radius: ";
	cin >> radius;
	double area = M_PI * (radius * radius);
	cout << area;*/

// Initializing Variables
	/*double price = 99.99;
	float interestRate = 3.67F;
	long fileSize = 90000L;
	char letter = 'a';
	bool isValid = false;

	int number{};
	cout << number;  
	return 0;*/

// Working with Numbers
	/*int number = 0xFF;
	cout << number;
	return 0;*/

// Narrowing
	/*int number = 1'000'000;
	short another{ number };
	cout << another;
	return 0; */

// Generating Random Numbers
	/*srand(time(0));
	int number = rand() % 10;
	cout << number;
	return 0;*/

// Exercise 6: Roll a dice, should generate 2 random numbers 
	const short minValue = 1;
	const short maxValue = 6;
	srand(time(nullptr));

	short diceRoll1 = (rand() % (maxValue - minValue + 1)) + minValue;
	short diceRoll2 = (rand() % (maxValue - minValue + 1)) + minValue;
	
	cout << diceRoll1 << endl
		 << diceRoll2;

	return 0;

//// Formatting Output
//	cout << "Spring" << "Nice" << endl
//		 << "Summer" << "Hot";
}