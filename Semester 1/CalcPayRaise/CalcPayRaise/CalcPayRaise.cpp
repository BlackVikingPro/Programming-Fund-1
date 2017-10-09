// CalcPayRaise.cpp : Calculates pay raise amount based on employee code.
// Created/Revised by Willy Fox on September 22, 2017

#include "stdafx.h"
#include <iostream>
#include <functional>
#include <algorithm>
#include <vector>

int main()
{
	// Initial variables
	char code = ' ';
	double currentPay = 0.0;
	const double RATE1 = 0.045;
	const double RATE2 = 0.035;
	// Processing variables
	double raise = 0.0;
	// Output variables
	double newPay = 0.0;

	std::cout << "Employee Code: "; std::cin >> code;
	std::cout << "Current Pay: "; std::cin >> currentPay;

	if (code == '1' || code == '4' || code == '9')
		raise = currentPay * RATE1;
	else
		raise = currentPay * RATE2;

	newPay = currentPay + raise; // Calculate new payment amount

	std::cout << std::endl << "New Payment Amount: " << newPay;

    return 0;
}

