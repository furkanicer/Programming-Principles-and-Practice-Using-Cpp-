#pragma once
#include <iostream>
using namespace std;

class Functions {
private:
	double val1{ 0 };
	double val2{ 0 }; // initialize to zero
public:
	
	Functions(); // constructor declaration
	~Functions(); // destructor declaration

	// function declarations
	void getUserInput();
	void determineSmaller();
	void determineLarger();
	double calculateSum();
	double calculateDifference();
	double calculateProduct();
	double calculateRatio(); 
};