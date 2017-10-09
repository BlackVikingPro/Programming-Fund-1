// Weekdays.cpp : Displays weekday based on number given.
// Created/Revised by Willy Fox on September 22, 2017

#include "stdafx.h"
#include <iostream>

int main()
{
	int weekday = 0;

	std::cout << "Weekday number: "; std::cin >> weekday; std::cout << std::endl;

	switch (weekday) {
	case 1:
		std::cout << "That is Sunday!"; break;
	case 2:
		std::cout << "That is Monday!"; break;
	case 3:
		std::cout << "That is Tuesday!"; break;
	case 4:
		std::cout << "That is Wednesday!"; break;
	case 5:
		std::cout << "That is Thursday!"; break;
	case 6:
		std::cout << "That is Friday!"; break;
	case 7:
		std::cout << "That is Saturday!"; break;
	default:
		std::cout << "Invalid code!"; break;
	}

    return 0;
}

