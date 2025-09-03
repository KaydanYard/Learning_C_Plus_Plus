#define _USE_MATH_DEFINES

#include <cmath>
#include <cstdlib>
#include <ctime>
#include <iomanip>
#include <iostream>
#include <string>

using namespace std;

int main() {
// Range-based For loops
	/*int numbers[] = {1, 2, 3, 4};
	
	// sizeof(numbers): 16
	// sizeof(int): 4

	for (int i = 0; i < sizeof(numbers) / sizeof(int); i++)
		cout << numbers[i] << endl;

	for (int number: numbers)  // is the same as the loop above, just more concise.
		cout << number << endl;
	*/
	
	/*string name = "Kaydan Yardley";
	for (char ch: name)
		cout << ch << endl;*/

// Exercise 15: Find the average temperature from a list of temperatures
	int temperatures[] = {60, 80, 90};
	double sum = 0;
	int count = sizeof(temperatures) / sizeof(int);
	
	for (int temperature: temperatures) {
		sum += temperature;
	}

	double average = sum / count;
	cout << average << endl;

	return 0;
}