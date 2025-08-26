#define _USE_MATH_DEFINES

#include <cmath>
#include <cstdlib>
#include <ctime>
#include <iomanip>
#include <iostream>
#include <string>

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
	/*const short minValue = 1;
	const short maxValue = 6;
	srand(time(nullptr));

	short diceRoll1 = (rand() % (maxValue - minValue + 1)) + minValue;
	short diceRoll2 = (rand() % (maxValue - minValue + 1)) + minValue;
	
	cout << diceRoll1 << endl
		 << diceRoll2;

	return 0;*/

// Formatting Output
	/*cout << left;
	cout << setw(10) << "Spring" << setw(10) << "Nice"  << endl
		 << setw(10) << "Summer" << setw(10) << "Hot";*/

	/*cout << fixed << setprecision(2) <<  12.34567 << endl
		 << 22.123456;

	return 0;*/

// Exercise 7: Create a table using cout
	/*cout << left << setw(15) << "Course" << setw(15) << "Students" << endl
		 << left << setw(15) << "C++" << right << setw(10) << 100 << endl
		 << left << setw(15) << "JavaScript" << right << setw(10) << 50;
	return 0;*/

// Data Types Size and Limits
	//cout << sizeof(int);

	/*cout << numeric_limits<int>::min() << endl
		 << numeric_limits<int>::max();*/

	/*int number = numeric_limits<int>::max();
	number++;
	cout << number;*/

	/*cout << numeric_limits<short>::min() << endl
		 << numeric_limits<short>::max();*/

	/*cout << numeric_limits<long>::min() << endl
		 << numeric_limits<long>::max();*/
	
// Working with Booleans
	/*bool isNewUser = false;
	cout << boolalpha << isNewUser;
	return 0;*/

// Working with Characters and Strings
	/*char ch = 'a';
	cout << +ch;
	return 0;*/
	
	/*string name;
	cout << "Enter your name: ";
	getline(cin, name);
	cout << "Hi " << name;
	return 0;*/

// Exercise 8: Address Questionaire
	/*string street;
	string city;
	string state;
	string zipCode;

	cout << "Enter your Street: ";
	getline(cin, street);
	cout << "Enter your City: ";
	getline(cin, city);
	cout << "Enter your State: ";
	getline(cin, state);
	cout << "Enter your Zip Code: ";
	getline(cin, zipCode);
	cout << left << street << endl
		 << city << ", " << state << ", " << zipCode;*/

// Working with Arrays
	/*int numbers[5] = {10, 20};
	cout << numbers[2];
	return 0;*/

// Exercise 9: Store 3 names in an array and recall one of them
	string names[3] = {};

	cout << "Enter the 1st name: ";
	cin >> names[0];

	cout << "Enter the 2nd name: ";
	cin >> names[1];

	cout << "Enter the 3rd name: ";
	cin >> names[2];

	cout << names[0];

	return 0;
}