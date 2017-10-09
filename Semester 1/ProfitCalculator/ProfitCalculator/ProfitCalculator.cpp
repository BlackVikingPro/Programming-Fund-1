// ProfitCalculator.cpp : Calculates profits after expenses.
// Created/Revised by Willy Fox

// Includes
#include "stdafx.h"

int main()
{
	std::string _quantity_sold;
	std::string _item_cost;
	std::string _item_selling_price;
	
	std::cout << "Quantity Sold: "; std::cin >> _quantity_sold; // std::getline(std::cin, quantity_sold);
	std::cout << "Item Cost: "; std::cin >> _item_cost;
	std::cout << "Item Selling Price: "; std::cin >> _item_selling_price;
	

	if (_quantity_sold.find(".") != std::string::npos)
		double quantity_sold = atof(_quantity_sold.c_str());
	else
		int quantity_sold = std::stoi(_quantity_sold);

	if (_item_cost.find(".") != std::string::npos)
		double item_cost = atof(_item_cost.c_str());
	else
		int item_cost = std::stoi(_item_cost);

	if (_item_selling_price.find(".") != std::string::npos)
		double item_selling_price = atof(_item_selling_price.c_str());
	else
		int item_selling_price = std::stoi(_item_selling_price);

	std::cout << quantity_sold << std::endl;
	std::cout << item_cost << std::endl;
	std::cout << item_selling_price << std::endl;

	std::getchar(); // keep console session alive
}

