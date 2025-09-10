#include <iostream>
#include <string>

using namespace std;

// Multi-dimensional Arrays

// a matrix is a 2 dimensional array

const int rows = 2;
const int cols = 3;

void printMatrix(int matrix[rows][cols]) {
	for (int row = 0; row < rows; row++) {
		for (int col = 0; col < cols; col++) {
			cout << matrix[row][col] << " | ";
		}
		cout << endl;
	}
}

int main() {

	// 2x3
	int matrix[rows][cols] = {
		11, 12, 13,
		21, 22, 23
	};

	printMatrix(matrix);

	return 0;
}