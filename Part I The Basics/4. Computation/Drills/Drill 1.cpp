#include <iostream>
using namespace std;


int main() {
	int val1, val2;

	while (true) {
		cin >> val1 >> val2;
		if (cin.fail()) { // if user enters non-integer value it fails.
			cout << "Terminated." << endl;
			system("pause"); // preventin console window from closing immediately
			return 0; // terminates program.
		}
		else {
			cout << "val1 = " << val1 << " val2 = " << val2 << endl;
		}
	}
	
}


/*
1. Write a program that consists of a while-loop that (each time around the loop) reads in two ints
and then prints them. Exit the program when a terminating '|' is entered.
*/

