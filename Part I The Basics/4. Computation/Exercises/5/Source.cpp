#include "Includes/Classes.h"
Calc User;

int main() 
{
	while (User.programState) {
		User.getUserInput();
		User.getCalcType();
		User.operations();
		User.outputResult();
		User.~Calc();	

		if (!User.programState) {
			cout << "Something went wrong!!" << endl;
			cout << "Program is closing." << endl;
			break;
		}
	}

	
	system("pause");
	return 0;
}

/*
5. Write a program that performs as a very simple calculator. Your calculator should be able to handle the four basic math operations
— add, subtract, multiply, and divide — on two input values. Your program should prompt the user to enter three arguments: two double
values and a character to represent an operation. If the entry arguments are 35.6, 24.1, and '+', the program output should be The sum
of 35.6 and 24.1 is 59.7. In Chapter 6 we look at a much more sophisticated simple calculator.
*/