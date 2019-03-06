#include <iostream>
#include <vector>
#include <string>
using namespace std;

vector<string> vs = { "zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine" };
int userInput{0};

/*
Use that in a program that converts a digit to its corresponding spelled-out value; e.g., the input 7 gives the output seven.
*/

int main() 
{
	cin >> userInput;
	switch (userInput)
	{
	case 0:
			cout << vs[0] << endl;
			break;
	case 1:
		cout << vs[1] << endl;
		break;
	case 2:
		cout << vs[2] << endl;
		break;
	case 3:
		cout << vs[3] << endl;
		break;
	case 4:
		cout << vs[4] << endl;
		break;
	case 5:
		cout << vs[5] << endl;
		break;
	case 6:
		cout << vs[6] << endl;
		break;
	case 7:
		cout << vs[7] << endl;
		break;
	case 8:
		cout << vs[8] << endl;
		break;
	case 9:
		cout << vs[9] << endl;
		break;

	default:
		cout << "There is no such option." << endl;
		break;
	}



	system("pause");
	return 0;
}

/*
6. Make a vector holding the ten string values "zero", "one", . . . "nine". Use that in a program that converts a
digit to its corresponding spelled-out value; e.g., the input 7 gives the output seven. Have the same program, using
the same input loop, convert spelled-out numbers into their digit form; e.g., the input seven gives the output 7.
*/