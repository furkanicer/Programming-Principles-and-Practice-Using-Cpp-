#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

double input{ 0 };
string unit_type = "unknown";
char terminator = ' ';
double convertedVal{ 0 };
double sum{ 0 };
int num_of_values = { 0 };
double smallestSoFar = std::numeric_limits<double>::max();
double largestSoFar = std::numeric_limits<double>::min();
vector<double> enteredValues;

void convertToMeters(double input, double &converted) 
{
	if (unit_type == "m") 
	{
		converted = input;
	}
	else if (unit_type == "cm") 
	{
		converted = input * 0.01;
	}
	else if (unit_type == "in") 
	{
		converted = input * 0.0254;
	}
	else if (unit_type == "ft") 
	{
		converted = input * 0.3048;
	}
	else 
	{
		cout << "Something went wrong while converting." << endl;
	}
}
void sumTracker(double input, double converted, double &sum) 
{
	convertToMeters(input, converted);
	sum = sum + converted;
}
int numCounter(int &num) {
	return ++num;
}
double isSmallest(double &convertedVal) 
{
	if (convertedVal <= smallestSoFar) 
	{
		smallestSoFar = convertedVal;
	}
	return smallestSoFar;
}
double isLargest(double &convertedVal) 
{
	if (convertedVal >= largestSoFar) 
	{
		largestSoFar = convertedVal;
	}
	return largestSoFar;
}

void vectorWriter(vector<double> dv) 
{
	if (dv.size() >= 0) 
	{
		sort(dv.begin(), dv.end()); // sorting the vector.

		for (int i = 0; i < dv.size(); ++i) 
		{
			cout << "Elements that you entered: " << dv[i] << endl;
		}
	}
	else
	{
		cout << "You didnt enter any element." << endl;
	}
	
}


int main() 
{
	while (true) 
	{
		cout << "Enter a double value: ";
		cin >> input;
		if (input >= 0) 
		{
			cout << "Enter a unit -> m, cm, in, ft : ";
			cin >> unit_type;

			numCounter(num_of_values);
			convertToMeters(input, convertedVal);
			enteredValues.push_back(convertedVal); // add to vector
			sumTracker(input, convertedVal, sum);
			isSmallest(convertedVal);
			isLargest(convertedVal);

			if (unit_type == "m") 
			{
				cout << "m: " << input << endl;
				cout << "cm: " << input * 100 << endl;
				cout << "inch: " << input * 39.3700787 << endl;
				cout << "ft: " << input * 3.2808399 << endl;
			}
			else if (unit_type == "cm") 
			{
				cout << "m: " << input* 0.01 << endl;
				cout << "cm: " << input << endl;
				cout << "inch: " << input * 0.39370 << endl;
				cout << "ft: " << input * 0.032808399 << endl;
			}
			else if (unit_type == "in") 
			{
				cout << "m: " << input * 0.0254 << endl;
				cout << "cm: " << input * 2.54 << endl;
				cout << "inch: " << input << endl;
				cout << "ft: " << input * 0.0833333333 << endl;
			}
			else if (unit_type == "ft") 
			{
				cout << "m: " << input * 0.3048 << endl;
				cout << "cm: " << input * 30.48 << endl;
				cout << "inch: " << input * 12 << endl;
				cout << "ft: " << input << endl;
			}
			else 
			{
				cout << "That is a unit which i dont know." << endl;
			}
			
		}
		else 
		{
			cout << "Something went wrong." << endl;
			cout << "Try again." << endl;
		}

		cout << "If you want to terminate type | and enter or just write a random char value:";
		cin >> terminator;

		if (terminator != '|') 
		{
			cout << "------------------------------------" << endl;
		}
		else 
		{
			cout << "-----------------------------------------------------------------------------" << endl;
			cout << "Terminated." << endl;
			cout << "Number of values you entered is : " << num_of_values << endl;
			cout << "Sum of the values you entered in meters is: " << sum << endl;
			cout << "Smallest value you have entered in meters is: " << smallestSoFar << endl;
			cout << "Largest value you have entered in meters is: " << largestSoFar << endl;
			vectorWriter(enteredValues);
			cout << "-----------------------------------------------------------------------------" << endl;
			system("pause");
			return 0;
		}
		
	}
	
	
}

/*
9. Keep track of the sum of values entered (as well as the smallest and the largest) and the number of values entered.
When the loop ends, print the smallest, the largest, the number of values, and the sum of values. Note that to keep the sum,
you have to decide on a unit to use for that sum; use meters.
*/


/*
10. Keep all the values entered (converted into meters) in a vector. At the end, write out those values.
11. Before writing out the values from the vector, sort them (that’ll make them come out in increasing order).
*/

