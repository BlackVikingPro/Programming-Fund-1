// Palindromes.cpp : Determines if a string is a palindrome or not.
// Created/revised by Willy Fox on October 9, 2017

#include "stdafx.h"
#include <iostream>
#include <string>
#include <algorithm>

bool testPal(std::string pal)
{
	std::transform(pal.begin(), pal.end(), pal.begin(), ::tolower); // transform input string to lowercase
	std::string revPal = pal;

	// Reverse the string
	std::reverse(revPal.begin(), revPal.end());

	// Test the string
	return (pal == revPal) ? true : false;
}

void getInputString(std::string message, std::string& str)
{ std::cout << message; std::cin >> str; std::cout << std::endl; }

int main()
{
	std::string pal;
	getInputString("Type a word: ", pal);
	
	if (testPal(pal)) // is True
		std::cout << "Your word is a Palindrome!" << std::endl;
	else
		std::cout << "Your word is not a Palindrome!" << std::endl;

	system("pause");
    return 0;
}

