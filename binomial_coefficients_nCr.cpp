/*
Author: Niraj Patil
Aim: To find number of combinations, i.e., nCr
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
	int n, r;

	cout << "Enter the values of n & r to calculate nCr: \n n = ";
	cin >> n;
	cout << " r = ";
	cin >> r;

	cout << n << "C" << r << " = " << fact(n) / (fact(n - r) * fact(r)) << endl;
	return 0;
}