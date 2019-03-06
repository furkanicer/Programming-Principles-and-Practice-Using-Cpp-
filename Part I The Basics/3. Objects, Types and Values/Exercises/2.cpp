#include <iostream>
#include "std_lib_facilities.h"
using namespace std;

// 1 mile = 1.609344 kilometers

const double one_mile = 1.609344;

double mile_val;

void convertToKm(double mile_value) {
	mile_value = mile_value * one_mile;
	cout << "Your mile value has been converted to km: " << mile_value << endl;
}

int main() {
	cout << "Enter a mile value:";
	cin >> mile_val;
	cout << endl;
	
	convertToKm(mile_val);



	system("pause");
	return 0;
}


/*
2. Write a program in C++ that converts from miles to kilometers.
Your program should have a reasonable prompt for the user to enter a number of miles.
Hint: There are 1.609 kilometers to the mile.
*/