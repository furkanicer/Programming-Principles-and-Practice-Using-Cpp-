#include <iostream>
using namespace std;

double a{ 0 }, b{ 0 }, c{ 0 };
double discriminant{ 0 };

// discriminant = b^2 - 4ac

double root1{ 0 }, root2{ 0 };


int main()
{
	cout << "ax2 + bx + c = 0" << endl;
	cout << "Enter the a, b and c values." << endl;
	cin >> a >> b >> c;

	discriminant = (b*b) - (4 * a*c);

	if (discriminant < 0)
	{
		cout << "There is no result, empty." << endl;
	}
	else if (discriminant == 0)
	// if discriminant = 0 is x1 = x2    -b/2a
	{
		root1 = -b / 2 * a;
		cout << "Root1 = " << root1 << " root2 = " << root1 << endl;
	}
	else if (discriminant > 0)
	{
		root1 = (-b + sqrt(discriminant)) / 2 * a;
		root2 = (-b - sqrt(discriminant)) / 2 * a;

		cout << "Root1 = " << root1 << " root2 = " << root2 << endl;
	}
	else
	{
		cout << "Something went wrong." << endl;
	}


	system("pause");
	return 0;
}

/*
18. Write a program to solve quadratic equations. A quadratic equation is of the form

									ax2 + bx + c = 0

If you don’t know the quadratic formula for solving such an expression, do some research. Remember,
researching how to solve a problem is often necessary before a programmer can teach the computer how to
solve it. Use doubles for the user inputs for a, b, and c. Since there are two solutions to a quadratic
equation, output both x1 and x2.
*/