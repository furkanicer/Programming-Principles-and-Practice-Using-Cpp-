#include <iostream>
using namespace std;



int square(int x) {
	int result = { 0 };
	int *ptr = &result;
	for (int i = 0; i < x; i++) {
		*ptr = *ptr + x;
	}
	return *ptr;
}


int main() {
	
	cout << square(10) << endl;

	system("pause");
	return 0;
}

/*
Implement square() without using the multiplication operator; that is, do the x*x
by repeated addition (start a variable result at 0 and add x to it x times). Then
run some version of “the first program” using that square().
*/

/*

int square(int x)    // return the square of x
{
          return x*x;
}

*/