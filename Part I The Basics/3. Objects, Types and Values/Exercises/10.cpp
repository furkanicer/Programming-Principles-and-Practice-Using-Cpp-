#include <iostream>
#include <string>
using namespace std;

string operation = "None"; // initialization
double operand1 = 0.0;
double operand2 = 0.0;

void function(string x, double y, double z) {
	if (x == "+") {
		cout << "Sum = " << y + z << endl;
	}
	else if (x == "-") {
		cout << "Difference = " << y - z << endl;
	}
	else if (x == "*") {
		cout << "Mul = " << y * z << endl;
	}
	else if (x == "/") {
		cout << "Division = " << y / z << endl;
	}
	else {
		cout << "Not a valid operator." << endl;
	}
}



int main() {
	cout << " + - * /" << endl;
	cout << "Write the symbol for the operation you want: ";
	cin >> operation;
	cout << "Write two operands." << endl;
	cin >> operand1;
	cin >> operand2;
	function(operation, operand1, operand2);




	system("pause");
	return 0;
}


/*
10. Write a program that takes an operation followed by two operands and outputs the result. For example:
+ 100 3.14
* 4 5

Read the operation into a string called operation and use an if-statement to figure out which operation the user
wants, for example, if (operation=="+"). Read the operands into variables of type double. Implement this for operations called
+, –, *, /, plus, minus, mul, and div with their obvious meanings.
*/