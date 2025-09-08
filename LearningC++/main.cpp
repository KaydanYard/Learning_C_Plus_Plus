#include <iostream>
#include <string>

using namespace std;

int main() {
	int values[3] =  { 10, 20, 30 };

	// C++: structured binding
	// Python: unpacking
	auto [x, y, z] = values;

	return 0;
}