#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

vector<string> userInput;



int main() {

	for (string x; cin >> x;)
	{
		userInput.push_back(x);
	}

	for (int i = 0; i < userInput.size(); ++i)
	{
		if (userInput[i] == "Broccoli") {
			cout << "BLEEP" << endl;
		}
		else {
			cout << "Elem: " << userInput[i] << endl;
		}
		
	}
		
	
	system("pause");
	return 0;
}


/*
Write a program that “bleeps” out words that you don’t like; that is, you read in words using cin and print them again on cout.
If a word is among a few you have defined, you write out BLEEP instead of that word. Start with one “disliked word” such as
string disliked = “Broccoli”;

When that works, add a few more.
*/