// i tried to write oop style code while doing this exercise :)

#include "Includes/Functions.h"

int main() {
	Functions User;
	User.getUserInput();
	User.determineSmaller();
	User.determineLarger();
	cout << "sum = " <<  User.calculateSum() << endl;
	cout << "difference = " << User.calculateDifference() << endl;
	cout << "product = " << User.calculateProduct() << endl;
	cout << "ratio = " << User.calculateRatio() << endl; // shouldnt use integer for ratio calculation, if we get a rational number it will output 0. we dont want that.

	system("pause");
	return 0;
}

/*
Write a program that prompts the user to enter two integer values.
Store these values in int variables named val1 and val2. Write your program to determine the
smaller, larger, sum, difference, product, and ratio of these values and report them to the user.
*/