#include <iostream>
#include <string>
using namespace std;

string str_value;

void converter(string x) {
	if (x == "zero") {
		cout << " 0 " << endl;
	}
	else if (x == "one") {
		cout << " 1 " << endl;
	}
	else if (x == "two") {
		cout << " 2 " << endl;
	}
	else if (x == "three") {
		cout << " 3 " << endl;
	}
	else if (x == "four") {
		cout << " 4 " << endl;
	}
	else {
		cout << "Not a number i know." << endl;
	}
}


int main() {
	cout << "Enter a spelled-out number in range 0-4 " << endl;
	cin >> str_value;
	converter(str_value);


	system("pause");
	return 0;
}

/*
9. Write a program that converts spelled-out numbers such as “zero” and
“two” into digits, such as 0 and 2. When the user inputs a number, the program
should print out the corresponding digit. Do it for the values 0, 1, 2, 3, and 4 and
write out not a number I know if the user enters something that doesn’t correspond, such as stupid computer!.
*/