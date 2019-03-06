#include "class.h"

vec::vec()
	: vi{}, topLimit{0}
{

}

vec::~vec()
{

}

void vec::getTopLimit()
{
	cout << "Enter the top limit value: ";
	cin >> topLimit;
	if (topLimit <= 0 || cin.fail())
	{
		cout << "There is someting wrong with your input value." << endl;
		system("pause");
		exit(0);
	}
}

void vec::addToVector()
{
	for (int i = 2; i <= topLimit; ++i)
	{
		vi.push_back(i);
	}
}

void vec::writeVectorElements()
{
	cout << "Elements of vector :";
	for (int i = 0; i < vi.size(); ++i)
	{
		cout << vi[i] << " ";
	}
	cout << endl;
}

void vec::removingFunction()
{
	bool isDivisible = false;
	for (int i = 0; i < vi.size(); ++i)
	{
		if (vi[i] % 2 == 0)
		{
			vi.erase(remove(vi.begin(), vi.end(), vi[i]), vi.end());
		}
	}

	for (int i = 0; i < vi.size(); ++i)
	{
		if (vi[i] % 3 == 0)
		{
			vi.erase(remove(vi.begin(), vi.end(), vi[i]), vi.end());
		}
	}
	for (int i = 0; i < vi.size(); ++i)
	{
		if (vi[i] % 5 == 0)
		{
			vi.erase(remove(vi.begin(), vi.end(), vi[i]), vi.end());
		}
	}
	for (int i = 0; i < vi.size(); ++i)
	{
		if (vi[i] % 7 == 0)
		{
			vi.erase(remove(vi.begin(), vi.end(), vi[i]), vi.end());
		}
	}


}

void vec::writePrimeNumbers()
{
	vi.push_back(2);
	vi.push_back(3);
	vi.push_back(5);
	vi.push_back(7);
	sort(vi.begin(), vi.end());
	cout << "Prime numbers: ";
	for (int i = 0; i < vi.size(); ++i)
	{
		cout << vi[i] << " ";
	}
	cout << endl;
}
