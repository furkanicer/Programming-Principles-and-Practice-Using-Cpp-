#pragma once
#include <iostream>
using namespace std;

class Functions {
private:
	int val1{ 0 };
	int val2{ 0 }; // initialize to zero
public:
	
	Functions(); // constructor declarations
	~Functions(); // destructor declarations

	// function declarations
	void getUserInput();
	void determineSmaller();
	void determineLarger();
	int calculateSum();
	int calculateDifference();
	int calculateProduct();
	int calculateRatio(); // int is not best type to calculate ratio.
};