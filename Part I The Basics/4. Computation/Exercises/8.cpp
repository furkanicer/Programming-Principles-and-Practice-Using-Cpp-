#include <iostream>
using namespace std;

int square_limit{ 64 };
int grain_limit{ 1000 };
double grain{ 1 };




int main()
{
	for (int i = 1; i <= square_limit; ++i) 
	{
		cout << "You are at square " << i << endl;
		
		if (i == 1)
		{
			grain = 1;
		}
		else
		{
			grain = grain * 2;
		}

		if (grain == 1024) // used actual values for if statements. :)
		{
			cout << "You require " << i << " squares to have atleast 1000 grains of rice." << endl;
		}
		if (grain == 1048576)
		{
			cout << "You require " << i << " squares to have atleast 1,000,000 grains of rice." << endl;
		}
		if (grain == 1073741824)
		{
			cout << "You require " << i << " squares to have atleast 1,000,000,000 grains of rice." << endl;
		}

		cout << grain << endl;
	}


	system("pause");
	return 0;
}


/*
8. There is an old story that the emperor wanted to thank the inventor of the game of chess and asked the inventor to name
his reward. The inventor asked for one grain of rice for the first square, 2 for the second, 4 for the third, and so on, doubling
for each of the 64 squares. That may sound modest, but there wasn’t that much rice in the empire! 

Write a program to calculate how many squares are required to give the inventor at least 1000
grains of rice, at least 1,000,000 grains, and at least 1,000,000,000
grains.

You’ll need a loop, of course, and probably an int to keep track of which square you are at, an int to keep the number of
grains on the current square, and an int to keep track of the grains on all previous squares. We suggest that you write out the value
of all your variables for each iteration of the loop so that you can see what’s going on.
*/


/*
9. Try to calculate the number of rice grains that the inventor asked for in exercise 8 above. You’ll find that the number is so
large that it won’t fit in an int or a double. Observe what happens when the number gets too large to represent exactly as an int
and as a double. What is the largest number of squares for which you can calculate the exact number of grains (using an int)? What
is the largest number of squares for which you can calculate the approximate number of grains (using a double)?
*/

/*
For int max number was -2147483648 -> max number of squares is 32, it goes off the limit after that.
For double max number was 9.22337e+18 -> it said infinite (Inf) after 1024th square.
*/