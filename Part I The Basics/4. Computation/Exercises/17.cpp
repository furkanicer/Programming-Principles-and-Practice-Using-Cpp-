#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

vector<string> vs = { "Apple", "Orange", "Grape", "Apple"};
string sMode{ "" };
int newMode{ 0 };
int tempMode{ 0 };

string maxStringValue = *max_element(vs.begin(), vs.end());
string minStringValue = *min_element(vs.begin(), vs.end());


int main()
{
	sort(vs.begin(), vs.end());

	cout << "Max element: " << maxStringValue << endl;
	cout << "Min element: " << minStringValue << endl;

	cout << "Elements of vector: ";
	for (int i = 0; i < vs.size(); ++i)
	{
		cout << vs[i] << " ";
	}
	cout << endl;
	
	
	

	for (int i = 0; i < vs.size(); ++i)
	{
		for (int x = i; x < vs.size() - 1; ++x)
		{
			if (vs[x] == vs[x + 1])
			{
				// cout << "At " << x << ". element." << endl;
				// cout << vi[x] << " equals = " << vi[x + 1] << endl;
				++tempMode;
				if (tempMode >= newMode)
				{
					newMode = tempMode + 1;
					sMode = vs[x];
					// cout << "Mode atm : " << newMode << endl;
				}
			}

			else
			{
				tempMode = 0;
				i = x;
				break;
			}

		}

	}

	cout << "The string that appears the most times in a sequence is " << sMode << endl;
	cout << "It appeared " << newMode << " times." << endl;
	


	system("pause");
	return 0;
}

/*
16. In the drill, you wrote a program that, given a series of numbers, found the max and min of that series.
The number that appears the most times in a sequence is called the mode. Create a program that finds the
mode of a set of positive integers.
*/