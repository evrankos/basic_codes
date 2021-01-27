/*
Author: Niraj Patil
Aim: To reverse a number
*/

#include<iostream>
using namespace std;

int main() {
	int n, lastdigit, reverse = 0;

	cout << "Enter the number you want to reverse: ";
	cin >> n;

	while (n != 0) {
		lastdigit = n % 10;
		reverse = reverse * 10 + lastdigit;
		n = n / 10;
	}
	cout << reverse;
	return 0;
}