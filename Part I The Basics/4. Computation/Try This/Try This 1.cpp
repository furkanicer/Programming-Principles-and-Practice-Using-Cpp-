/*
Use the example above as a model for a program that converts yen ('y'), kroner ('k'), and pounds ('p') into dollars. If you like realism, you can find conversion rates on the web.
12.02.2019 23:51 UTC+3 Turkey
1 Yen = 0,0091$
1 Danish Kroner = 0,15$
1 Pound = 1,29$
*/

#include <iostream>
#include <string>
using namespace std;

const double yen_to_dollar = 0.0091;
const double kroner_to_dollar = 0.15;
const double pound_to_dollar = 1.29;


int main() {
	
	double amount{0};
	char type{ 0 };
	cout << "Which currency you have? 'y' for Yen, 'k' for Danish Kroner, 'p' for Pounds: ";
	cin >> type;
	cout << "Enter the amount of the money you have: ";
	cin >> amount;
	
	if (amount <= 0) {
		cout << "You dont have money." << endl;
	}
	else {
		if (type == 'y') {
			cout << "You have " << amount << " yen." << endl;
			cout << "In dollars: " << amount * yen_to_dollar << endl;
		}
		else if (type == 'k') {
			cout << "You have " << amount << " kroner." << endl;
			cout << "In dollars: " << amount * kroner_to_dollar << endl;
		}
		else if (type == 'p') {
			cout << "You have " << amount << " pound." << endl;
			cout << "In dollars: " << amount * pound_to_dollar << endl;
		}
		else {
			cout << "That is a currency which i dont know." << endl;
		}
	}



	system("pause");
	return 0;
}