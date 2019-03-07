#pragma once
#include <iostream>
#include <vector>
#include <string>
#include <map>
using namespace std;


class Info {
public:
	vector<string> names;
	vector<int> ages;
	string name;
	int age;
	bool terminate;
//-----------------------
	Info();
	~Info();
	string nameInput();
	int ageInput();
	void pushToVector();
	void writeVecElements();
	void findNameDuplicates();
};