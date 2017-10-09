// VoidApp.cpp : Makes use of the void function type.
// Created/revised by Willy Fox on October 4, 2017

#include "stdafx.h"
#include <iostream>
#include <string>

void getInputChar(std::string const& prompt, char& answer) {
	std::cout << prompt;
	std::cin >> answer;
}

int main()
{
	char finit = ' ';
	getInputChar("First initial: ", finit);

	std::cout << "Your first initial is: " << finit << std::endl;
	system("pause");
    return 0;
}
