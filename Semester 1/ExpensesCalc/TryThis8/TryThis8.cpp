// TryThis8.cpp : Displays total expenses.
// Created/Revised by Willy Fox on September 21, 2017

#include "stdafx.h"
#include <iostream>
#include <string>

int main()
{
	double food = 0.0;
	double rent = 0.0;
	double utilities = 0.0;
	double car = 0.0;

	double totalExpenses = 0.0;

	std::cout << "Please enter expenses below!" << std::endl;
	std::cout << "Food: "; std::cin >> food; // Get food expenses
	std::cout << "Rent: "; std::cin >> rent; // Get rent expenses
	std::cout << "Utilities: "; std::cin >> utilities; // Get utilities expenses
	std::cout << "Car: "; std::cin >> car; std::cout << std::endl; // Get car expenses

	totalExpenses = food + rent + utilities + car; // Adding up all expenses

	std::cout << "Total Expenses Amount: " << totalExpenses << std::endl;

    return 0;
	// end of main function
}

