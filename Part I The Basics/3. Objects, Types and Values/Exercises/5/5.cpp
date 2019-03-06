#include "Includes/Functions.h"

int main() {
	Functions User;
	User.getUserInput();
	User.determineSmaller();
	User.determineLarger();
	cout << "sum = " <<  User.calculateSum() << endl;
	cout << "difference = " << User.calculateDifference() << endl;
	cout << "product = " << User.calculateProduct() << endl;
	cout << "ratio = " << User.calculateRatio() << endl;
	system("pause");
	return 0;
}

/*
5. Modify the program above to ask the user to enter floating-point values and store
them in double variables. Compare the outputs of the two programs for some inputs of your
choice. Are the results the same? Should they be? What’s the difference?
*/