// Ch6Voters.cpp : Calculates if you are able to vote in the U.S..
// Created/Revised by Willy Fox on September 22, 2017

#include "stdafx.h"
#include <iostream>

int main()
{
	int age = 0;
	char registered = ' ';

	std::cout << "Enter Age: "; std::cin >> age;

	if (age < 18) {
		std::cout << std::endl << "You are too young to vote.";
		return -1;
	}
	else {
		std::cout << "Registered to vote (Y/N)? "; std::cin >> registered; std::cout << std::endl;
		if (toupper(registered) == 'Y') {
			std::cout << "You can vote.";
			return 0;
		}
		else {
			std::cout << "You must register before you can vote.";
			return -1;
		}
	}

    return 0;
}

