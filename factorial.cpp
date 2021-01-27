/*
Author: Niraj Patil
Aim: To find factorial of a number
*/

#include<iostream>
using namespace std;

int fact(int n) {
	int factorial = 1;
	for (int i = 2; i <= n; i++) {
		factorial = factorial * i;
	}
	return factorial;
}

int main() {
	int n;
	char c;

	do {
		cout << "Enter a number to calculate its factorial: ";
		cin >> n;

		cout << n << "! = " << fact(n) << endl;

		cout << "Want to calculate more? (Y/N)" << endl;
		cin >> c;
	} while (c == 'Y' || c == 'y');

	return 0;
}