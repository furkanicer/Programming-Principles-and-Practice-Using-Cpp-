#include <iostream>
using namespace std;


char start_chr = 'a';

char u_start_chr = 'A';

char digit_start = '0';


int main() {
	
	// lower case letters

	for (int i = 0; i <= 25; ++i) {
		char next_chr = char(start_chr + i);
		int chr_integer_val = next_chr;
		cout << next_chr << " " << chr_integer_val << endl;
	}

	// upper case letters
		
	for (int i = 0; i <= 25; i++) {
		char u_next_chr = char(u_start_chr + i);
		int u_chr_integer_val = u_next_chr;
		cout << u_next_chr << " " << u_chr_integer_val << endl;
	}
	
	// digits

	for (int i = 0; i < 10; i++) {
		char next_char = char(digit_start + i);
		int integer_value = next_char;
		cout << next_char << " " << integer_value << endl;
	}

	system("pause");
	return 0;
}


/*
Rewrite the character value example from the previous Try this to use a
for-statement. Then modify your program to also write out a table of the integer
values for uppercase letters and digits.
*/