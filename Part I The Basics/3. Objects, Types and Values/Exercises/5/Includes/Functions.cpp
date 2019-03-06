#include "Functions.h"


// constructor definition

Functions::Functions()
	: val1{ 0 }, val2{ 0 }{ // always initialize

}

// destructor definition
Functions::~Functions() {

}

void Functions::getUserInput() {
	cout << "Enter two floating-point values." << endl;
	cin >> val1;
	cin >> val2;
}

// function definitions
void Functions::determineSmaller() {
	if (val1 < val2) {
		cout << val1 << " smaller than " << val2 << endl;
	}
	else if (val2 < val1) {
		cout << val2 << " smaller than " << val1 << endl;
	}
	else {
		cout << "Numbers are equal." << endl;
	}
}

void Functions::determineLarger() {
	if (val1 > val2) {
		cout << val1 << " bigger than " << val2 << endl;
	}
	else if (val2 > val1) {
		cout << val2 << " bigger than " << val1 << endl;
	}
	else {
		cout << "numbers are equal." << endl;
	}
}

double Functions::calculateSum() {
	return val1 + val2;
}

double Functions::calculateDifference()
{
	return val1 - val2;
}

double Functions::calculateProduct()
{
	return val1 * val2;
}

double Functions::calculateRatio()
{
	return val1 / val2;
}


