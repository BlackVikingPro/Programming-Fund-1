// VolumeCalculator.cpp : Calculate the Volume of a given shape using it's dimensions.
// Created/Revised by Willy Fox

#include "stdafx.h"
#include <iostream>
#include <string>

/*
Create a program to calculate the volume of a pool.  The user will enter the depth, width and length of the pool.

Your program should performs data validation: If the depth, width or length entered by the user is not greater than zero (0),
the program should display an error message. Otherwise, it should calculate the volume and display it on screen.  The volume
calculation is: volume=depth*width*length.

Your variable names for depth, width or length may not be the same in your program as the ones I've chosen above--in that case
use your variable names for volume, depth, width, and length.
*/

int main()
{

	double shapeDepth	= 0.0;
	double shapeWidth	= 0.0;
	double shapeLength	= 0.0;
	double shapeVolume	= 0.0;

	std::cout << "VolumeCalculator - By William Bohannon." << std::endl;
	std::cout << "Depth: "; std::cin >> shapeDepth;
	std::cout << "Width: "; std::cin >> shapeWidth;
	std::cout << "Length: "; std::cin >> shapeLength;
	std::cout << std::endl; // Give it a nice whitespace before displaying output

	if (shapeDepth <= 0.0) {
		std::cout << "Whoops, the depth variable needs to be > 0." << std::endl;
		return 0;
	}
	if (shapeWidth <= 0.0) {
		std::cout << "Whoops, the width variable needs to be > 0." << std::endl;
		return 0;
	}
	if (shapeLength <= 0.0) {
		std::cout << "Whoops, the length variable needs to be > 0." << std::endl;
		return 0;
	}

	// If we've made it this far, we now can proceed with our calculations
	shapeVolume = shapeDepth * shapeWidth * shapeLength; // Volume = Depth * Width * Length
	std::cout << "Volume: " << shapeVolume << std::endl;

    return 0;
}

