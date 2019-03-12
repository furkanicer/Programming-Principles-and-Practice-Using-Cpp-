#include "Includes.h"
Info User;

int main()
{
	while (!User.terminate)
	{
		User.nameInput();
		User.ageInput();
		User.pushToVector();
		if (User.name == "NoName" && User.age == 0)
		{
			User.terminate = true;
			cout << "All input values are stored in vectors." << endl;
			break;
		}
	}

	User.writeVecElements();
	User.findNameDuplicates();
	User.findAgeFromName();
	User.findNameFromAge();




	User.~Info();


	system("pause");
	return 0;
}

/*
20. Modify the program from exercise 19 so that when you enter a name, the
program will output the corresponding score or name not found.
21. Modify the program from exercise 19 so that when you enter an integer,
the program will output all the names with that score or score not found.
*/