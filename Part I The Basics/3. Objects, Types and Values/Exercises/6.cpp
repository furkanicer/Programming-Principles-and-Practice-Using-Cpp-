#include <iostream>
using namespace std;

int x, y, z;

void numSeq(int a,int b,int c) {
	if (a <= b && a <= c && b <= c) {
		cout << a << " " << b << " " << c << endl;
	}
	else if (a <= b && a <= c && c <= b) {
		cout << a << " " << c << " " << b << endl;
	}
	else if (b <= a && b <= c && a <= c) {
		cout << b << " " << a << " " << c << endl;
	}
	else if (b <= a && b <= c && c <= a) {
		cout << b << " " << c << " " << a << endl;
	}
	else if (c <= a && c <= b && a <= b) {
		cout << c << " " << a << " " << b << endl;
	}
	else if (c <= a && c <= b && b <= a) {
		cout << c << " " << b << " " << a << endl;
	}
}


int main() {
	cout << "Enter three integer values.\n";
	cin >> x >> y >> z;
	cout << "Outputing the values in numerical sequence." << endl;
	numSeq(x, y, z);

	system("pause");
	return 0;
}

/*
6. Write a program that prompts the user to enter three integer values,
and then outputs the values in numerical sequence separated by commas. So, if the user enters the values
10 4 6, the output should be 4, 6, 10. If two values are the same, they should just be ordered together.
So, the input 4 5 4 should give 4, 4, 5.
*/