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
7. Modify the “mini calculator” from exercise 5 to accept (just) single-digit numbers written as either digits or spelled out.
*/