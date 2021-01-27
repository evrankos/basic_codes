/*
Author: Niraj Patil
Aim: To check if a number is armstrong or not
*/

#include<iostream>
#include<cmath>
using namespace std;

int main() {
	int n, lastdigit, sum = 0;

	cout << "Enter the number to check: ";
	cin >> n;

	int originalnum = n;

	while (n != 0) {
		lastdigit = n % 10;
		sum += pow(lastdigit, 3);
		n = n / 10;
	}

	if (sum == originalnum)
		cout << originalnum << " is an Armstrong number";
	else
		cout << originalnum << " is not an Armstrong number";
	return 0;
}