/*
Author: Niraj Patil
Aim: To print first n numbers from fibonacci series
*/

#include<iostream>
#include<cmath>
using namespace std;

void fib(int n) {
	int n1 = 0, n2 = 1, n3;
	for (int i = 0; i < n; i++) {
		cout << n1 << endl;
		n3 = n1 + n2;
		n1 = n2;
		n2 = n3;
	}
	return;
}

int main() {
	int n;

	cout << "Enter the number of fibonacci elements you want: ";
	cin >> n;

	cout << "The first " << n << " numbers of Fibonacci series are: \n";
	fib(n);

	return 0;
}