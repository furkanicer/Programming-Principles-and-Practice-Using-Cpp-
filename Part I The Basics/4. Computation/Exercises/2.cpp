#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> vi = { 1,2,3,4};
double median{ 0 };


double medianCalculator(vector<int> vec) 
{
	// sorts our vector sequence.
	sort(vec.begin(), vec.end());

	// simple for loop, writes elements of our vector.
	for (int i = 0; i < vec.size(); ++i) {
		cout << vec[i] << "  ";
	}

	cout << endl;

	// checks if our vectors number of elements is even or odd, it changes the way we calculate median.
	if (vec.size() % 2 == 1) // odd
	{
		median = vec[vec.size() / 2];
	}
	else if (vec.size() % 2 == 0) // even
	{
		median = (vec[vec.size() / 2 - 1] + vec[vec.size() / 2]) / 2.0;
	}
	return median;
}

int main() 
{
	cout << medianCalculator(vi) << endl;
	

	
	system("pause");
	return 0;
}

/*
2. If we define the median of a sequence as “a number so that exactly as many elements come before 
it in the sequence as come after it,” fix the program in §4.6.3 so that it always prints out a median
. Hint: A median need not be an element of the sequence.
*/