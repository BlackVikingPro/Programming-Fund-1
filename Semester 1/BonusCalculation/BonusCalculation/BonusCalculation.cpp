// BonusCalculation.cpp : Calculate sales commission based on sales amount.
// Created/Revised by Willy Fox on September 22, 2017

#include "stdafx.h"
#include <iostream>
#include <iomanip>


int main()
{
	double commissionRate1 = .02;
	double commissionRate2 = .015;
	double sales; double bonus;

	std::cout << "Sales Amount: "; std::cin >> sales; std::cout << std::endl;

	if (sales >= 15000.0)
		bonus = sales * commissionRate1;
	else
		bonus = sales * commissionRate2;

	std::cout << std::fixed << std::setprecision(2);
	std::cout << "Total Commission: " << bonus << std::endl;

    return 0;
}

