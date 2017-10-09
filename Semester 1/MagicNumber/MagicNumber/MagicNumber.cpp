// MagicNumber.cpp : Guess a random number [Game].
// Created/Revised by Willy Fox on September 25, 2017

#include "stdafx.h"
#include <random>
#include <iostream>


int main()
{
	std::mt19937 rng;
	rng.seed(std::random_device()());
	std::uniform_int_distribution<std::mt19937::result_type> dist6(1, 10);

	const int magicNumber = dist6(rng); // generate random number in range [1, 10]
	int guessedNumber; int guessesCount = 1;

	do {
		std::cout << std::endl << "Guess the magic number: "; std::cin >> guessedNumber; std::cout << std::endl;
		if (guessedNumber == magicNumber) {
			std::cout << "Correct! The magic number was '" << magicNumber << "'" << std::endl;
			std::cout << "You discovered the magic number in " << guessesCount << " attempt(s)!" << std::endl;
			return 0;
		}
		else if (guessedNumber < magicNumber)
			std::cout << "Whoops, you need to guess a higher number!" << std::endl;
		else if (guessedNumber > magicNumber)
			std::cout << "Whoops, you need to guess a lower number!" << std::endl;
		guessesCount++; // Count up in the number of guessed before the correct number was found
	} while (true);

    return 0;
}
