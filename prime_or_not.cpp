/*
Author: Niraj Patil
Aim: To check if a number is prime or not
*/

#include<iostream>
#include<cmath> // Used for mathematical functions like square root
using namespace std;

int main() {
	int n, flag = 0;

	cout << "Enter the number to check: ";
	cin >> n;

	for (int i = 2; i <= sqrt(n); i++) {
		if (n % i == 0) {
			flag = 1;
			cout << n << " is not a Prime Number";
			break;
		}
	}
	if (flag == 0)
		cout << n << " is a Prime Number";
	return 0;
}