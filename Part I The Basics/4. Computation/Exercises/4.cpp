#include <iostream>
#include <cstdlib>
using namespace std;



int beginVal{ 1 };
int endVal{ 100 };
int middle{ 0 };
bool found = false;


char userInput = ' ';
void getUserInput()
{
	cin >> userInput;
	if (userInput != 'y' && userInput != 'n')
	{
		cout << "There is no such option." << endl;
		exit;
	}
}

void checker(int &begin, int &end) {
	middle = (begin + end) / 2;
	if (middle == begin || middle == end) {
		cout << "Your value is " << middle << endl;
		found = true;
		system("pause");
		exit(0);
	}

	cout << "Is it smaller than " << middle << endl;
	getUserInput();
	if (userInput == 'y')
	{
		end = middle;
		cout << "Your value between " << begin << " - " << end << endl;
	}
	else if (userInput == 'n')
	{
		begin = middle;
		cout << "Your value between " << begin << " - " << end << endl;
	}

	
}


int main() 
{
	while (!found)
	{
		checker(beginVal, endVal);
	}
	
	system("pause");
	return 0;
}

/*
4. Write a program to play a numbers guessing game. The user thinks of a number between 1 and
100 and your program asks questions to figure out what the number is (e.g., “Is the number you are thinking of
less than 50?”). Your program should be able to identify the number after asking no more than seven questions.
Hint: Use the < and <= operators and the if-else construct.
*/