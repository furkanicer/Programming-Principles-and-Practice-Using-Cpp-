#pragma once
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;



class vec {
private:
	vector<int> vi;
	int topLimit;
public:
	vec();
	~vec();
	void getTopLimit();
	void addToVector();
	void writeVectorElements();
	void removingFunction();
	void writePrimeNumbers();
};
