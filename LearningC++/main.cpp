#include <iostream>
#include <string>

using namespace std;

// Exercise 20: Sort an array using the Bubble Sort Algorithm

void sort(int* array, int size) {
	
	cout << "Start: ";
	for (int i = 0; i < size; i++) {
		cout << array[i] << " ";
	}
	cout << endl;

	for (int pass = 0; pass < size; pass++) {
		for (int i = 0; i < size - 1; i++) {
			if (array[i] > array[i + 1]) {
				int temp = array[i + 1];
				array[i + 1] = array[i];
				array[i] = temp;
			}
		}
	}
}

int main() {
	int values[] =  { 2, 8, 4, 1, 3 };
	
	sort(values, sizeof(values) / sizeof(int));
	
	cout << "Final: ";
	for (int i = 0; i < (sizeof(values) / sizeof(int)); i++) {
		cout << values[i] << " ";
	}
	cout << endl;

	return 0;
}