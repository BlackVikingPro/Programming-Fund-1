// CommissionCalculator.cpp : Displays a salesperson's commission.
// Created/revised by Willy Fox on September 21, 2017

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	// declare named constant and variables
	const double COMM_RATE	= 0.1;
	double sales			= 0.0;
	double commission		= 0.0;

	// enter input item
	cout << "Sales amout: ";
	cin >> sales;

	// Calculate and display the commission
	commission = sales * COMM_RATE;
	cout << "Commission: $"
		<< commission << endl;

    return 0;
	// end of main function
}

