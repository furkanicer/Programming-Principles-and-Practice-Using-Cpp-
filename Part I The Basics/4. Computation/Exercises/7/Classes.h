#pragma once
#pragma once
#include <iostream>
#include <string>
using namespace std;

class Calc
{
public:
	Calc();
	~Calc();
	void getUserInput();
	char getCalcType();
	double operations();
	void outputResult();

	bool programState;

private:
	double val1;
	double val2;
	double result;
	char calc_type = ' ';
	string s_val1;
	string s_val2;
};



