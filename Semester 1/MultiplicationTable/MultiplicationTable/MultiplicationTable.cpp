// MultiplicationTable.cpp : Calculates all multiples of a number up to 10x.
// Created/Revised by Willy Fox on September 22, 2017

#include "stdafx.h"
#include <iostream>

int main()
{
	// Initialize our variables
	int chosenNumber = 0;
	int newNumber = 0;
	int x = 0;

	// Display and accept user input to be the number to calculate
	std::cout << "Choose a number between 1-10: "; std::cin >> chosenNumber; std::cout << std::endl;

	// Put it in a while loop until it reaches our goal of 10x. 
	while (x < 10) {
		newNumber += chosenNumber; // Add the chosen number to the previously calculated number in our sequence
		std::cout << newNumber << " "; // Print/display the new number on the screen along with whitespace
		x++; // Increment variable 'x' so that it will eventually break out of the loop
	}

    return 0;
}

