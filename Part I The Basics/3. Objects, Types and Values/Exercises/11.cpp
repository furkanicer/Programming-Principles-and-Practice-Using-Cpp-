#include <iostream>
#include <string>
using namespace std;

class money {
private:
	// types
	double pennies;
	double nickels;
	double dimes;
	double quarters;
	double half_dollars;
	double one_dollars;
	

	// gonna use those values to convert to cents
	double c_pennies; // pennies * 1;
	double c_nickels; // nickels * 5;
	double c_dimes; // dimes * 10;
	double c_quarters; // quarters * 25;
	double c_halfdollars; // half_dollars * 50;
	double c_onedollars; // c_onedollars * 100;

	double sum_cents;
public:
	money() // initializer for prevent garbage values. basically every value we create starts with value 0 in memory. otherwise it will have a random val which can cause trouble.
		: pennies{ 0 }, nickels{ 0 }, dimes{ 0 }, quarters{ 0 }, half_dollars{ 0 }, sum_cents{ 0 }, c_pennies{0}, c_nickels{0}, c_dimes{0}, c_quarters{0}, c_halfdollars{0}, c_onedollars{0}
	{

	}

	~money() { // destructor for freeing memory

	}


	// input function.
	void input_func() { // takes a copy object as a parameter
		cout << "How many pennies do you have? ";
		cin >> pennies;
		cout << "How many nickels do you have? ";
		cin >> nickels;
		cout << "How many dimes do you have? ";
		cin >> dimes;
		cout << "How many quarters do you have? ";
		cin >> quarters;
		cout << "How many half dollars do you have? ";
		cin >> half_dollars;
		cout << "How many one-dollar coins do you have? ";
		cin >> one_dollars;
	}

	// function for converting all coin types to cents
	void cent_converter() {
		c_pennies = pennies * 1; // pennies * 1;
		c_nickels = nickels * 5; // nickels * 5;
		c_dimes = dimes * 10; // dimes * 10;
		c_quarters = quarters * 25; // quarters * 25;
		c_halfdollars = half_dollars * 50; // half_dollars * 50;
		c_onedollars = c_onedollars * 100; // c_onedollars * 100;
		sum_cents = c_pennies + c_nickels + c_dimes + c_quarters + c_halfdollars + c_onedollars;

	}

	// output function
	void output_func() {
		// gonna use if-else statement for grammar correction.
		if (pennies > 1) {
			cout << "You have " << pennies << " pennies." << endl;
		}
		else {
			cout << "You have " << pennies << " penny." << endl;
		}
		
		if (nickels > 1) {
			cout << "You have " << nickels << " nickels." << endl;
		}
		else {
			cout << "You have " << nickels << " nickel." << endl;
		}
		
		if (dimes > 1) {
			cout << "You have " << dimes << " dimes." << endl;
		}
		else {
			cout << "You have " << dimes << " dime." << endl;
		}
		
		if (quarters > 1) {
			cout << "You have " << quarters << " quarters." << endl;
		}
		else {
			cout << "You have " << quarters << " quarter." << endl;
		}

		if (half_dollars > 1) {
			cout << "You have " << half_dollars << " half dollars." << endl;
		}
		else {
			cout << "You have " << half_dollars << " half dollar." << endl;
		}
		
		if (one_dollars > 1) {
			cout << "You have " << one_dollars << " one-dollar coins." << endl;
		}
		else {
			cout << "You have " << one_dollars << " one-dollar coin." << endl;
		}

		cout << "The value of all of your coins is " << sum_cents << " cents." << endl;

		cout << "Sum in dollars: $" << sum_cents / 100 << endl;
	}


	

};



int main() {
	
	money para; // creating an object.
	para.input_func();
	para.cent_converter();
	para.output_func();
	para.~money(); // free the memory.



	system("pause");
	return 0;
}

/*
1. Write a program that prompts the user to enter some number of pennies (1-cent coins),
nickels (5-cent coins), dimes (10-cent coins), quarters (25-cent coins), half dollars (50-cent coins),
and one-dollar coins (100-cent coins). Query the user separately for the number of each size coin, e.g.,
“How many pennies do you have?” Then your program should print out something like this:

You have 23 pennies.
You have 17 nickels.
You have 14 dimes.
You have 7 quarters.
You have 3 half dollars.
The value of all of your coins is 573 cents.

Make some improvements: if only one of a coin is reported, make the output grammatically correct,
e.g., 14 dimes and 1 dime (not 1 dimes). Also, report the sum in dollars and cents, i.e., $5.73 instead of 573 cents.
*/