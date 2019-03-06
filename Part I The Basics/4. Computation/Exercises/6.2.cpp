#include <iostream>
#include <vector>
#include <string>
using namespace std;

vector<int> vi = { 0,1,2,3,4,5,6,7,8,9 };
string userInput{""};

/*
Have the same program, using the same input loop, convert spelled-out numbers into their digit form; e.g., the input seven gives the output 7.
*/

int main() 
{
	cin >> userInput;
	if (userInput == "zero")
	{
		cout << vi[0] << endl;
	}
	else if (userInput == "one")
	{
		cout << vi[1] << endl;
	}
	else if (userInput == "two")
	{
		cout << vi[2] << endl;
	}
	else if (userInput == "three")
	{
		cout << vi[3] << endl;
	}
	else if (userInput == "four")
	{
		cout << vi[4] << endl;
	}
	else if (userInput == "five")
	{
		cout << vi[5] << endl;
	}
	else if (userInput == "six")
	{
		cout << vi[6] << endl;
	}
	else if (userInput == "seven")
	{
		cout << vi[7] << endl;
	}
	else if (userInput == "eight")
	{
		cout << vi[8] << endl;
	}
	else if (userInput == "nine")
	{
		cout << vi[9] << endl;
	}
	else
	{
		cout << "There is no such option." << endl;
	}



	system("pause");
	return 0;
}

/*
6. Make a vector holding the ten string values "zero", "one", . . . "nine". Use that in a program that converts a
digit to its corresponding spelled-out value; e.g., the input 7 gives the output seven. Have the same program, using
the same input loop, convert spelled-out numbers into their digit form; e.g., the input seven gives the output 7.
*/