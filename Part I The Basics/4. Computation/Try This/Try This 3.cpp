#include <iostream>
using namespace std;

int index = 0;
char start_chr = 'a';



int main() {
	while (index <= 25) {
		char next_chr = char(start_chr + index);
		int chr_integer_val = next_chr;
		cout << next_chr << " " << chr_integer_val << endl;
		++index;
	}

	system("pause");
	return 0;
}

/*
The character 'b' is char('a'+1), 'c' is char('a'+2), etc. Use a loop to write out a
table of characters with their corresponding integer values:
a     97
b     98
. . .
z     122
*/