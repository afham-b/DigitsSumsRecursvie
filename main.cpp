#include <iostream>
using namespace std;

unsigned int sumdigits (unsigned int n);

int main () {
	int num;
	cout << "Enter a number: ";
	cin >> num;
	cout << "Sum of digits is " << sumdigits(num) << endl;
	return 0;
}

unsigned int sumdigits (unsigned int n) {
	// Base case, when n is zero. The sum of the digits in zero is zero.
	if (n == 0)
		return 0;
	// General case, when n > 0. The sum of the digits is the right-most
	//	digit (mod by 10) plus the sum of the digits of n divided by 10 (which
	//	removes the right-most digit).
	return n % 10 + sumdigits(n / 10);
}
