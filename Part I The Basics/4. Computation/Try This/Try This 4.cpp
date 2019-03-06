#include <iostream>
using namespace std;


char start_chr = 'a';

int main() {
	
	for (int i = 0; i <= 25; ++i) {
		char next_chr = char(start_chr + i);
		int chr_integer_val = next_chr;
		cout << next_chr << " " << chr_integer_val << endl;
	}
		
	
	system("pause");
	return 0;
}