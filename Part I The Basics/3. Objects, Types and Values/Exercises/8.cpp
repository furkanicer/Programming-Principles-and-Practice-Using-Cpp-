#include <iostream>
using namespace std;

int value;

void oddOrEven(int x) {
	if (x % 2 == 0) {
		cout << "The value " << x << " is an even number." << endl;
	}
	else if (x % 2 == 1) {
		cout << "The value " << x << " is an odd number." << endl;
	}
	else {
		cout << "There is something wrong about the value." << endl;
	}
}

int main() {
	cout << "Enter an integer value to test if it is odd or even: ";
	cin >> value;
	oddOrEven(value);



	system("pause");
	return 0;
}


/*
8. Write a program to test an integer value to determine if it is odd or even.
As always, make sure your output is clear and complete. In other words, don’t just
output yes or no. Your output should stand alone, like The value 4 is an even number.
Hint: See the remainder (modulo) operator in §3.4.
*/