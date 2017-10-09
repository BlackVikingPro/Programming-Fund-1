// CaseCompare.cpp : Checks if two characters match up or not.
// Created/Revised by Willy Fox on October 9, 2017

#include "stdafx.h"
#include <iostream>
#include <locale>

bool ignoreCaseCompare(char char1, char char2)
{
	std::locale loc;
	if (std::tolower(char1, loc) == std::tolower(char2, loc))
		return true;
	else
		return false;
}

void getInputChar(std::string s, char& char_)
{ std::cout << s; std::cin >> char_; std::cout << std::endl; }

int main()
{
	char char1; char char2;
	getInputChar("Character 1: ", char1);
	getInputChar("Character 2: ", char2);

	if (ignoreCaseCompare(char1, char2) == true)
		std::cout << "Your characters match!" << std::endl;
	else
		std::cout << "Your characters don't match!" << std::endl;

	system("pause");
    return 0;
}

