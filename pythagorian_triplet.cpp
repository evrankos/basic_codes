/*
Author: Niraj Patil
Aim: To check a triplet is pythagorian or not
*/

#include<iostream>
using namespace std;

int main() {
	int a, b, c, x, y, z;

	cout << "Enter the values of the triplet: ";
	cin >> a >> b >> c;
	
	x = max(a, max(b, c));
	if (x == a) {
		y = b;
		z = c;
	}
	else if (x == b) {
		y = a;
		z = c;
	}
	else {
		y = b;
		z = a;
	}

	if (x * x == (y * y + z * z))
		cout << "The given triplet is Pythagorian" << endl;
	else
		cout << "The given triplet is not Pythagorian" << endl;

	return 0;
}