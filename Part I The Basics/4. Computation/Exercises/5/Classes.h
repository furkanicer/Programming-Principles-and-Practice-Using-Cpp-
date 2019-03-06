#pragma once
#include <iostream>
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
	
};



