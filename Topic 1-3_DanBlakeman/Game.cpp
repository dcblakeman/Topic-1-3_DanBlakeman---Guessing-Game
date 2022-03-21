//Daniel Blakeman
//CIS 2201 502
//01-20-2022
//Design and implement an ADT for a one-person guessing game that chooses n random integers in the range of 1 to m and asks the user to guess them.  
//The same integer might be chosen more than once.  For example, the game might choose the following four integers that range from 1 to 10: 4, 6, 1, 6.

#include "Game.h" // Implementation
#include <iostream>
#include <vector>
#include <algorithm>

//Functions
void Game::randomNumberGenerator(int& max_number, vector<int>& random_vector)
{
	for (int n = 0; n < max_number; n++)
	{
		//Generate a number between 1 and max number
		int random_number = rand() % max_number + 1;
		random_vector.push_back(random_number);
	}
}
void Game::sortVectors(vector<int>& random_vector, vector<int>& integer_vector)
{
	sort(integer_vector.begin(), integer_vector.end());
	sort(random_vector.begin(), random_vector.end());
}

int Game::compareVectors(vector<int>& random_vector, vector<int>& integer_vector)
{
	//Variables
	int correct_guesses = 0;

	//Compare Vectors
	for (int x : random_vector)
	{
		cout << "x = " << x << "\n";

		for (int y : integer_vector)
		{
			cout << "y = " << y << "\n";

			if (x == y)
			{
				correct_guesses += 1;
				cout << "Correct guesses: " << correct_guesses << "\n";
			}
			break;
		}
	}

	return correct_guesses;
}

void Game::clearIntegerVector(vector<int>& integer_vector)
{
	integer_vector.clear();
}

void Game::clearRandomVector(vector<int>& random_vector)
{
	random_vector.clear();
}