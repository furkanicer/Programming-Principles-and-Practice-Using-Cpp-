#include "std_lib_facilities.h"


int main() {
	cout << "Please enter your first name and age\n";
	string first_name;
	double age;
	cin >> first_name;
	cin >> age;
	cout << "Hello, " << first_name << " (age " << age*12 << " months)\n";

	keep_window_open();
	return 0;
}




/* Try This

Get the “name and age” example to run. Then, modify it to write out the age in months:
read the input in years and multiply (using the * operator) by 12. Read the age into a
double to allow for children who can be very proud of being five and a half years old
rather than just five.

*/



/*

// read name and age
int main()
{
          cout << "Please enter your first name and age\n";
          string first_name;          // string variable
          int age;                          // integer variable
          cin >> first_name;         // read a string
          cin >> age;                    // read an integer
          cout << "Hello, " << first_name << " (age " << age << ")\n";
}

*/