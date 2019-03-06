#include <iostream>
using namespace std;

double input{ 0 };
double smallestSoFar = std::numeric_limits<double>::max();
double largestSoFar = std::numeric_limits<double>::min();

int main() {
	
	while (true) {
		cout << "Enter a value: ";
		cin >> input;
		if (cin.fail()) {
			cout << "You have terminated the loop." << endl;
			system("pause");
			return 0;
		}
		else {
			if (input <= smallestSoFar) {
				smallestSoFar = input;
				cout << "Smallest so far:" << smallestSoFar << endl;
			}
			else if (input >= largestSoFar) {
				largestSoFar = input;
				cout << "Largest so far: " << largestSoFar << endl;
			}
			else { // if user inputs value between largest and smallest.
				cout << "Largest so far: " << largestSoFar << endl;
				cout << "Smallest so far:" << smallestSoFar << endl;
			}
		}
	}
	
}

/*
6. Now change the body of the loop so that it reads just one double each time around.
Define two variables to keep track of which is the smallest and which is the largest value you have seen so far.
Each time through the loop write out the value entered. If it’s the smallest so far, write the smallest so far after the number.
If it is the largest so far, write the largest so far after the number.
*/

