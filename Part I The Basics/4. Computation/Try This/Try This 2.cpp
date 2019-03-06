#include <iostream>
#include <string>
using namespace std;

const double yen_to_dollar = 0.0091;
const double kroner_to_dollar = 0.15;
const double pound_to_dollar = 1.29;


int main() {

	double amount{ 0 }; 
	char type{ 0 };
	cout << "Which currency you have? 'y' for Yen, 'k' for Danish Kroner, 'p' for Pounds: ";
	cin >> type;
	cout << "Enter the amount of the money you have: ";
	cin >> amount;


	if (amount <= 0) { // make sure user has money.
		cout << "You dont have money." << endl;
	}
	else {
		switch (type)
		{
		case 'y':
			cout << "You have " << amount << " yen." << endl;
			cout << "In dollars: " << amount * yen_to_dollar << endl;
			break;
		case 'k':
			cout << "You have " << amount << " kroner." << endl;
			cout << "In dollars: " << amount * kroner_to_dollar << endl;
			break;
		case 'p':
			cout << "You have " << amount << " pound." << endl;
			cout << "In dollars: " << amount * pound_to_dollar << endl;
			break;
		default:
			cout << "That is a currency which i dont know." << endl;
			break;
		}

	}
	

	system("pause");
	return 0;
}

/*
Rewrite your currency converter program from the previous Try this to use a
switch-statement. Add conversions from yuan and kroner. Which version of the program
is easier to write, understand, and modify? Why?
*/