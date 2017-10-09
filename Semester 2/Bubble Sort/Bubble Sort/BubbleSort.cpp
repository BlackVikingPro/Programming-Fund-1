// Bubble Sort.cpp - uses the bubble sort to sort the contents of a one-dimensional array in ascending order
// Created/revised by Willy Fox on October 3, 2017

#include "stdafx.h"
#include <iostream>
#include <string>

int main()
{
	int numbers[4] = {};
	int sub = 0;	    //keeps track of subscripts
	int temp = 0;       //variable used for swapping
	int maxSub = 3;     //maximum subscript
	int lastSwap = 0;   //position of last swap
	char swap = 'Y';    //indicates if a swap was made

	std::cout << "Give me 4 numbers to sort for you!\n" << std::endl;
	for (int i = 0; i < 4; i++)
	{
		std::cout << "Number " << (i + 1) << ": "; std::cin >> numbers[i]; std::cout << std::endl;
	}

	//repeat loop instructions as long as a swap was made
	while (swap == 'Y')
	{
		swap = 'N';    //assume no swaps are necessary
		
		sub = 0;       //begin comparing with first 
					   //array element
		
		//compare adjacent array elements to determine
		//whether a swap is necessary
		while (sub < maxSub)
		{
			if (numbers[sub] < numbers[sub + 1])
			{
				//a swap is necessary
				temp = numbers[sub];
				numbers[sub] = numbers[sub + 1];
				numbers[sub + 1] = temp;
				swap = 'Y';
				lastSwap = sub;
			} //end if
			sub += 1;  //increment subscript
		} //end while
		
		maxSub = lastSwap;  //reset maximum subscript
	} //end while
	
	//display sorted array
	for (int x = 0; x < 4; x += 1)
		std::cout << numbers[x] << std::endl;
	//end for

	system("pause");
	return 0;
}   //end of main function
