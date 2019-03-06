#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<double> distances;
double val{ 0 };
double sum{ 0 };

int main() 
{
	for (int i = 0; i < 10; ++i) 
	{
		cin >> val;
		distances.push_back(val);
		sum = sum + val;
	}

	cout << "Total distance: " << sum << endl;

	sort(distances.begin(), distances.end()); // sort the vector, small to large


	cout << "Distances: ";
	for (int i = 0; i < distances.size(); ++i)
	{
		cout << distances[i] << "  ";
	}

	// so the logic is simple, first element is the smallest and the last element is the largest.
	// find the smallest.
	cout << endl;
	cout << "Smallest element: " << distances[0] << endl;
	cout << "Largest element: " << distances[distances.size() - 1]<<endl;
	cout << "Mean distance: " << sum / distances.size() << endl;


	system("pause");
	return 0;
}

/*
3. Read a sequence of double values into a vector. Think of each value as the distance between two cities along a given route.
Compute and print the total distance (the sum of all distances). Find and print the smallest and greatest distance between two
neighboring cities. Find and print the mean distance between two neighboring cities.
*/