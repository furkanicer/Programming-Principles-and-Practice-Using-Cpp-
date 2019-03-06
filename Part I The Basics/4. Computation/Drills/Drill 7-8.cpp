#include <iostream>
#include <string>
using namespace std;

double input{ 0 };
string unit_type = "unknown";
char terminator = ' ';

int main() {
	while (terminator != '|') {
		cout << "Enter a double value: ";
		cin >> input;
		if (input >= 0) {
			cout << "Enter a unit -> m, cm, in, ft : ";
			cin >> unit_type;
			if (unit_type == "m") {
				cout << "m: " << input << endl;
				cout << "cm: " << input * 100 << endl;
				cout << "inch: " << input * 39.3700787 << endl;
				cout << "ft: " << input * 3.2808399 << endl;
			}
			else if (unit_type == "cm") {
				cout << "m: " << input* 0.01 << endl;
				cout << "cm: " << input << endl;
				cout << "inch: " << input * 0.39370 << endl;
				cout << "ft: " << input * 0.032808399 << endl;
			}
			else if (unit_type == "in") {
				cout << "m: " << input * 0.0254 << endl;
				cout << "cm: " << input * 2.54 << endl;
				cout << "inch: " << input << endl;
				cout << "ft: " << input * 0.0833333333 << endl;
			}
			else if (unit_type == "ft") {
				cout << "m: " << input * 0.3048 << endl;
				cout << "cm: " << input * 30.48 << endl;
				cout << "inch: " << input * 12 << endl;
				cout << "ft: " << input << endl;
			}
			else {
				cout << "That is a unit which i dont know." << endl;
			}
			
		}
		else {
			cout << "Something went wrong." << endl;
			cout << "Try again." << endl;
		}

		cout << "If you want to terminate type | and enter or just write a random char value:";
		cin >> terminator;
		
	}
	
	
}

/*
7. Add a unit to each double entered; that is, enter values such as 10cm, 2.5in, 5ft, or 3.33m.
Accept the four units: cm, m, in, ft. Assume conversion factors 1m == 100cm, 1in == 2.54cm, 1ft == 12in.
Read the unit indicator into a string. You may consider 12 m (with a space between the number and the unit) equivalent to 12m (without a space).
*/


/*
8. Reject values without units or with “illegal” representations of units, such as y, yard, meter, km, and gallons.
*/
