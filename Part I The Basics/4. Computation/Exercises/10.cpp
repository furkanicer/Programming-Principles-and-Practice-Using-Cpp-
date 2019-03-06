#include <iostream>
#include <string>
#include <vector>
using namespace std;


// gonna implement our own randomness system without using rand.
// it is not a "real" randomness function btw. it repeats itself.

enum class Move
{
	rock		= 1,
	paper		= 2,
	scissors	= 3
};


int get_seed() // getting seed for feeding our randomness function.
{
	int seed{};
	do {
		cout << "enter seed value: ";
		cin >> seed;
	} while (cin && seed == 0); // safety checks.

	if (!cin) // safety check again.
	{
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
	}

	return seed;
}

vector<Move> get_computer_moves(int seed, int num_rounds)
{
	if (num_rounds <= 0) // checking for round number, if it is not positive we are not playing.
	{
		cerr << "number of round must be positive.";
		return{}; // https://stackoverflow.com/questions/39487065/what-does-return-statement-mean-in-c11
	}

	vector<Move> moves{}; // object creating.
	for (int i = 0; i < num_rounds; ++i, ++seed) { // thats where randomness happens. we are feeding it with seed value.
		moves.push_back(static_cast<Move>(abs(seed) % 3 + 1));
	}
	// abs -> absolute value of an integer. we are making sure seed is positive.
	// %3 + 1 makes sure it stays in range 1 - 3

	return moves;
}



int main()
{
	int playerMove;
	int seed = get_seed(); // getting seed value for randomness function.
	auto computer = get_computer_moves(seed, 5);
	for (auto i : computer)
	{
		cout << "What is your move? 1 = paper, 2 = rock, 3 = scissors." << endl;
		cin >> playerMove;
		switch (i)
		{
		case Move::paper:
			cout << "Computer's move is paper." << endl;
			if (playerMove == 1)
			{
				cout << "tie" << endl;
			}
			else if (playerMove == 2)
			{
				cout << "lose" << endl;
			}
			else if (playerMove == 3)
			{
				cout << "win" << endl;
			}
			else
			{
				cout << "something is wrong with your input." << endl;
			}
			break;
		case Move::rock:
			cout << "Computer's move is rock." << endl;
			if (playerMove == 1)
			{
				cout << "win" << endl;
			}
			else if (playerMove == 2)
			{
				cout << "tie" << endl;
			}
			else if (playerMove == 3)
			{
				cout << "loss" << endl;
			}
			else
			{
				cout << "something is wrong with your input." << endl;
			}
			break;
		case Move::scissors:
			cout << "Computer's move is scissors." << endl;
			if (playerMove == 1)
			{
				cout << "loss" << endl;
			}
			else if (playerMove == 2)
			{
				cout << "win" << endl;
			}
			else if (playerMove == 3)
			{
				cout << "tie" << endl;
			}
			else
			{
				cout << "something is wrong with your input." << endl;
			}
			break;

					
				
		default:
			break;
		}
	}
	
	
	system("pause");
	return 0;
}


/*
10. Write a program that plays the game “Rock, Paper, Scissors.” If you are not familiar with the game do some research
(e.g., on the web using Google). Research is a common task for programmers. 

Use a switch-statement to solve this exercise. Also, the machine should give random answers (i.e., select the next rock, paper, or scissors randomly). 
Real randomness is too hard to provide just now, so just build a vector with a sequence of values to be used as “the next value.” If you build
the vector into the program, it will always play the same game, so maybe you should let the user enter some values. Try variations
to make it less easy for the user to guess which move the machine will make next.
*/