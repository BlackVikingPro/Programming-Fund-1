// CamelCasing.cpp : Converts a string to Camel Casing format.
// Created/Revised by Willy Fox

#include "stdafx.h"
#include <iostream>
#include <string>
#include <vector>
#include <locale>

std::string camelCase(std::string s, std::string delimiter)
{
	size_t pos = 0;
	std::string token;
	std::locale loc;
	std::vector< std::string > tokenArry;

	while ((pos = s.find(delimiter)) != (std::string::npos)) {
		token = s.substr(0, pos);
		tokenArry.push_back(token);
		s.erase(0, pos + delimiter.length());
	}
	tokenArry.push_back(s); // include last instance

	for (int x = 1; x < 3; x++)
		tokenArry[x].at(0) = std::toupper(tokenArry[x].at(0), loc);

	std::string output;
	for (int i = 0; i < 3; i++)
		output += tokenArry[i];

	return output;

}

int main()
{
	std::string s = "my_char_at()";
	std::string delimiter = "_";

	std::cout << camelCase(s, delimiter) << std::endl;

	system("pause");
	return 0;
}
