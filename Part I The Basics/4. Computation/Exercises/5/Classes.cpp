#include "Classes.h"

Calc::Calc()
	: val1{0.0}, val2{0.0}, calc_type{' '}, result{0.0}, programState{true}
{
}

Calc::~Calc()
{
}

void Calc::getUserInput()
{
	cout << "Enter two numbers." << endl;
	cin >> val1;
	if (cin.fail()) {
		programState = false;
	}
	cin >> val2;
	if (cin.fail())
	{
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



