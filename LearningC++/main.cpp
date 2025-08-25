#include <iostream>

using namespace std; //allow you to use std without having to put it before every item that is apart of it.

int main() {
	/*
	int FileSize = 0;
	double Sales = 9.99;
	std::cout << FileSize;
	return 0;
	*/

// First Exercise swap the Values of a and b
	/*
	int a = 1;
	int b = 2;
	int Holder = a;

	 a = b;
	 b = Holder;

	std::cout << b;
	*/

// Constants
	//const double pi = 3.14;
	//return 0;

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

// 2nd Activity make z = 1.3333 using Order of Operations
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

// 3rd Activity Print out Sales, State Tax, County Tax, and Total Tax
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

// 4th Activity Convert Fahrenheit to Celsius
	double fahrenheit;
	
	cout << "Enter the Fahrenheit value: ";
	cin >> fahrenheit;
	
	double celsius = (fahrenheit - 32) * 5 / 9;
	cout << celsius << " degrees Celsius";

	return 0;
}