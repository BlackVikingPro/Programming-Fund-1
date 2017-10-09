// MagicNumber2.cpp : Attempts to guess the users chosen number.
// Crated/Revised by Willy Fox on October 3, 2017

#include "stdafx.h"
#include <iostream>
#include <locale>
#include <random>

int generateRandomNumber(int from, int to)
{
	std::mt19937 rng;
	rng.seed(std::random_device()());
	std::uniform_int_distribution<std::mt19937::result_type> dist6(from, to);

	return dist6(rng);
}

char lowerCase(char Char)
{ std::locale loc; return std::tolower(Char, loc); }

int main()
{
	int guessesCount = 1;
	std::cout << "Think of a number between 1 - 10 and I will try to guess it!" << std::endl;
	std::cout << "Please use the following answer keys:\n    H - Number needs to be higher\n    L - Number needs to be lower\n    C - Number is correct" << std::endl;
	system("pause"); std::cout << std::endl; // pause to give user time to guess a number

	char answer; int minNum = 1; int maxNum = 10;
	while (true)
	{
		int genNum = generateRandomNumber(minNum, maxNum);
		std::cout << "Is " << genNum << " your number [h|l|c]: "; std::cin >> answer; std::cout << std::endl;

		if (lowerCase(answer) == 'c')
		{ std::cout << "Yay, I guessed your number in " << guessesCount << " attempt(s)!" << std::endl; system("pause"); return false; }
		else
		{ 
			guessesCount++; // increment counts

			if (lowerCase(answer) == 'h')
			{ minNum = genNum + 1; }
			else if (lowerCase(answer) == 'l')
			{ maxNum = genNum - 1; }
		}
	}

	system("pause");
    return 0;
}

