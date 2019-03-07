#include "Includes.h"

Info::Info()
	: names{}, ages{}, name{"Unknown"}, age{0}, terminate{false}
{
}

Info::~Info()
{
}

string Info::nameInput()
{
	cout << "Enter a name: ";
	cin >> name;
	if (cin.fail())
	{
		cout << "Something is wrong with your name input." << endl;
	}
	return name;
}

int Info::ageInput()
{
	cout << "Enter a age value: ";
	cin >> age;
	if (cin.fail())
	{
		cout << "Something is wrong with your age input." << endl;
		cout << "Make sure u have entered an integer value." << endl;
		system("pause");
		exit(0);
	}
	return age;
}

void Info::pushToVector() // simple function to prevent NoName and 0 values to be added our vector.
{
	if (name == "NoName" && age == 0)
	{

	}
	else
	{
		names.push_back(name);
		ages.push_back(age);
	}
}

void Info::writeVecElements()
{
	for (int i = 0; i < names.size() && i < ages.size(); ++i)
	{
		cout << "Name: " << names[i] << " Age: " << ages[i] << endl;
	}
}

void Info::findNameDuplicates()
{
	// got help from https://thispointer.com/c-how-to-find-duplicates-in-a-vector/
	map<string, int> countMap;
	for (auto &elem : names)
	{
		auto result = countMap.insert(pair<string, int>(elem, 1));
		if (result.second == false)
		{
			result.first->second++;
		}
	}

	for (auto &elem : countMap)
	{
		if (elem.second > 1)
		{
			cout << "This name -> " << elem.first << " repeated " << elem.second << " times." << endl;
		}
	}
}




