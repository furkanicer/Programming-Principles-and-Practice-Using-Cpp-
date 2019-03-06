#include <iostream>
#include <vector>
using namespace std;

vector<int> primeStorage = {2,3,5,7};
int primeLimit{ 0 };



int main()
{
	cout << "First n prime numbers: ";
	cin >> primeLimit;

	for (int i = 8; i <= numeric_limits<int>::max(); ++i)
	{
		if (i % 2 != 0 && i % 3 != 0 && i % 5 != 0 && i % 7 != 0)
		{
			primeStorage.push_back(i);
			if (primeStorage.size() == primeLimit)
			{
				break;
			}
		}
	}

	for (int i = 0; i < primeStorage.size(); ++i)
	{
		cout << "primes: " << primeStorage[i] << endl;
	}
	


	system("pause");
	return 0;
}

/*
15. Write a program that takes an input value n and then finds the first n primes.
*/