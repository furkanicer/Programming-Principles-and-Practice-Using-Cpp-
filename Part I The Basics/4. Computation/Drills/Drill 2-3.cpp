#include <iostream>
using namespace std;

void findDiff(int x, int y) {
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


int main() {
	int val1, val2;

	while (true) {
		cin >> val1 >> val2;
		if (cin.fail()) {
			cout << "Terminated." << endl;
			system("pause");
			return 0;
		}
		else {
			findDiff(val1, val2);
		}
	}
	
}

/*
2. Change the program to write out the smaller value is: followed by the smaller
of the numbers and the larger value is: followed by the larger value.
*/


/*
3. Augment the program so that it writes the line the numbers are equal (only) if they are equal.
*/