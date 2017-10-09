// HelloWorld.cpp : Defines the entry point for the console application.
//

// Includes
#include "stdafx.h"
#include <iostream>
#include <string>

int main()
{
	std::string greeting = "Hello, World!"; // Create a memory location named 'greeting' holding value of "Hello, World!"
	std::cout << greeting << std::endl; // Display our greeting on the screen as standard output

	system("pause");
    return 0; // Close the application
}

