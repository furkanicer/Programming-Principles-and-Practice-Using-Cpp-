#include "Classes.h"

Calc::Calc()
	: val1{ 0.0 }, val2{ 0.0 }, calc_type{ ' ' }, result{ 0.0 }, programState{ true }, s_val1{""}, s_val2{""}
{
}

Calc::~Calc()
{
}


void Calc::getUserInput()
{
	// going to take user input as string.
	cout << "Enter two single-digit numbers." << endl;
	cin >> s_val1;
	
	if (s_val1 == "0" || s_val1 == "zero")
	{
		val1 = 0.0;
	}
	else if (s_val1 == "1" || s_val1 == "one")
	{
		val1 = 1.0;
	}
	else if (s_val1 == "2" || s_val1 == "two")
	{
		val1 = 2.0;
	}
	else if (s_val1 == "3" || s_val1 == "three")
	{
		val1 = 3.0;
	}
	else if (s_val1 == "4" || s_val1 == "four")
	{
		val1 = 4.0;
	}
	else if (s_val1 == "5" || s_val1 == "five")
	{
		val1 = 5.0;
	}
	else if (s_val1 == "6" || s_val1 == "six")
	{
		val1 = 6.0;
	}
	else if (s_val1 == "7" || s_val1 == "seven")
	{
		val1 = 7.0;
	}
	else if (s_val1 == "8" || s_val1 == "eight")
	{
		val1 = 8.0;
	}
	else if (s_val1 == "9" || s_val1 == "nine")
	{
		val1 = 9.0;
	}
	else
	{
		cout << "There is something wrong with first value." << endl;
		programState = false;
	}

	cin >> s_val2;

	if (s_val2 == "0" || s_val2 == "zero")
	{
		val2 = 0.0;
	}
	else if (s_val2 == "1" || s_val2 == "one")
	{
		val2 = 1.0;
	}
	else if (s_val2 == "2" || s_val2 == "two")
	{
		val2 = 2.0;
	}
	else if (s_val2 == "3" || s_val2 == "three")
	{
		val2 = 3.0;
	}
	else if (s_val2 == "4" || s_val2 == "four")
	{
		val2 = 4.0;
	}
	else if (s_val2 == "5" || s_val2 == "five")
	{
		val2 = 5.0;
	}
	else if (s_val2 == "6" || s_val2 == "six")
	{
		val2 = 6.0;
	}
	else if (s_val2 == "7" || s_val2 == "seven")
	{
		val2 = 7.0;
	}
	else if (s_val2 == "8" || s_val2 == "eight")
	{
		val2 = 8.0;
	}
	else if (s_val2 == "9" || s_val2 == "nine")
	{
		val2 = 9.0;
	}
	else
	{
		cout << "There is something wrong with value two." << endl;
		programState = false;
	}





}

char Calc::getCalcType()
{
	cout << "Enter the operator which you liked to use." << endl;
	cout << " * / + - " << endl;
	cin >> calc_type;
	if (calc_type != '*' && calc_type != '/' && calc_type != '+' && calc_type != '-')
	{
		cout << "There is no such operator that i know." << endl;
	}
	return calc_type;
}

double Calc::operations()
{
	if (calc_type == '*') {
		result = val1 * val2;
	}
	else if (calc_type == '/') {
		result = val1 / val2;
	}
	else if (calc_type == '+') {
		result = val1 + val2;
	}
	else if (calc_type == '-') {
		result = val1 - val2;
	}
	else {
		cout << "You have entered wrong operator, try again." << endl;
	}
	return result;
}

void Calc::outputResult()
{
	cout << "Result is: " << result << endl;
}



