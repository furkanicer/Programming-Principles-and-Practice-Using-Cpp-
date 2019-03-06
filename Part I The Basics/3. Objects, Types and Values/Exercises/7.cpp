#include <iostream>
#include <string>
using namespace std;

string x, y, z;

void strSeq(string a,string b,string c) {
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
	cout << "Enter three string values.\n";
	cin >> x >> y >> z;
	cout << "Outputing the string in sequence." << endl;
	strSeq(x, y, z);



	system("pause");
	return 0;
}

/*
7. Do exercise 6, but with three string values. So, if the user enters the values Steinbeck,
Hemingway, Fitzgerald, the output should be Fitzgerald, Hemingway, Steinbeck.
*/