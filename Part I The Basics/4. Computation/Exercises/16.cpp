#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> numbers = { 1,2,3,4,5,1,1,1,3,5,7,8,9,9,9,9,9,9};
int freq{ 0 };
int max_val{ 0 };
int result{ 0 };


int main()
{

	sort(numbers.begin(), numbers.end());
	cout << "Numbers: ";
	for (int i = 0; i < numbers.size(); i++)
	{
		cout << numbers[i] << " ";
	}
	cout << endl;


	for (int i = 0; i < numbers.size() - 1; i++)
	{
		if (numbers[i] == numbers[i + 1])
		{
			freq++;
		}
		else
		{
			freq = 0;
		}

		if (freq > max_val)
		{
			max_val = freq + 1;
			result = numbers[i];
		}
	}

	cout << "mode is: " << result << endl;
	cout << "it repeated: " << max_val << " times." << endl;


	system("pause");
	return 0;
}

/*
16. In the drill, you wrote a program that, given a series of numbers, found the max and min of that series.
The number that appears the most times in a sequence is called the mode. Create a program that finds the
mode of a set of positive integers.
*/