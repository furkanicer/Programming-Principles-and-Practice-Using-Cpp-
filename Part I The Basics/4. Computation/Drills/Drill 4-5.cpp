#include <iostream>
using namespace std;

void findDiff(double x, double y) {
	if (x > y) {
		cout << "the larger value is: " << x << endl;
		cout << "the smaller value is: " << y << endl;
	}
	else if (y > x) {
		cout << "the larger value is: " << y << endl;
		cout << "the smaller value is: " << x << endl;
	}
	else if (x == y) {
		cout << "Values are equal." << endl;
	}
	else {
		cout << "Something went wrong." << endl;
	}
}

void almostEqual(double x, double y) {
	double difference;
	difference = x - y;
	if (difference < 0) { // make sure not get negative value.
		difference = difference * -1;
	}
	if (difference < 1.0 / 100) {
		cout << "Numbers are almost equal." << endl;
	}
}


int main() {
	double val1, val2;

	while (true) {
		cin >> val1 >> val2;
		if (cin.fail()) {
			cout << "Terminated." << endl;
			system("pause");
			return 0;
		}
		else {
			findDiff(val1, val2);
			almostEqual(val1, val2);
		}
	}
	
}

/*
4. Change the program so that it uses doubles instead of ints.
5. Change the program so that it writes out the numbers are almost equal after writing out which is the
larger and the smaller if the two numbers differ by less than 1.0/100.
*/

