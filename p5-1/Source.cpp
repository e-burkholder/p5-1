#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int num1, num2, sumEven=0, sumSquare=0;
	for (num1 = 2; num1 <= 100; num1 += 2) {
		sumEven = sumEven + num1;
	}
	cout << "The sum of all even numbers between 2 and 100, inclusive, is " << sumEven << ".\n";

	for (num2 = 1; num2 <= 100; num2++) {
		sumSquare = sumSquare + pow(num2, 2);
	}
	cout << "The sum of all squares between 1 and 100, inclusive, is " << sumSquare << ".\n";

	return 0;
}