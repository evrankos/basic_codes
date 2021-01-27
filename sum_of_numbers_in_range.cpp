/*
Author: Niraj Patil
Aim: To calculate summation of numbers in given range
*/

#include<iostream>
using namespace std;

int main() {
	int l, u, sum;
	
	cout << "Enter the lower limit of summation: ";
	cin >> l;
	cout << "Enter the upper limit of summation: ";
	cin >> u;

	sum = ((u * (u + 1)) / 2) - ((l * (l - 1)) / 2); // sum = summation(u) - summation(l - 1)

	cout << "The summation of numbers from range " << l << " to " << u << " is: " << sum << endl;
	return 0;
}