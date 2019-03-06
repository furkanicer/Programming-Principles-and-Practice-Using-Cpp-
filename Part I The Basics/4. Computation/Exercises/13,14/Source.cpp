#include "Includes/class.h"
vec user;


int main()
{
	user.getTopLimit();
	user.addToVector();
	user.removingFunction();
	user.writePrimeNumbers();
    	user.~vec();

	system("pause");
	return 0;
}

/*
13. Create a program to find all the prime numbers between 1 and 100. There is a classic method for doing this, called
the “Sieve of Eratosthenes.” If you don’t know that method, get on the web and look it up. Write your program using this method.
https://en.wikipedia.org/wiki/Sieve_of_Eratosthenes
*/
