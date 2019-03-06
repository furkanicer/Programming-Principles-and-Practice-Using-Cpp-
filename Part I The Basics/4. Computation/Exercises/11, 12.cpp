/*
11. Create a program to find all the prime numbers between 1 and 100. One way to do this is to write a function
that will check if a number is prime (i.e., see if the number can be divided by a prime number smaller than itself)
using a vector of primes in order (so that if the vector is called primes, primes[0]==2, primes[1]==3, primes[2]==5, etc.).
Then write a loop that goes from 1 to 100, checks each number to see if it is a prime, and stores each prime found in a vector.
Write another loop that lists the primes you found. You might check your result by comparing your vector of prime numbers with primes.
Consider 2 the first prime.
*/


/*
12. Modify the program described in the previous exercise to take an input value max and then find all prime numbers from 1 to max.
*/


#include <iostream>
#include <vector>
using namespace std;

int main()
{
	vector<int> primeList;
	primeList.push_back(2);

	int topLimit{0};
	cout << "Enter the max value: ";
	cin >> topLimit;
	if (topLimit <= 0 && cin.fail())
	{
		cout << "Something wrong with your input value." << endl;
		system("pause");
		return 0;
	}


	for (int i = 3; i <= topLimit; ++i)
	{
		bool isPrime = true;
		for (int a = 0; a < primeList.size(); ++a)
		{
			if (i % primeList[a] == 0)
			{
				isPrime = false;
				break;
			}
		}

		if (isPrime)
		{
			cout << i << " is a prime number." << endl;
			primeList.push_back(i);
		}



	}

	system("pause");
	return 0;
}
