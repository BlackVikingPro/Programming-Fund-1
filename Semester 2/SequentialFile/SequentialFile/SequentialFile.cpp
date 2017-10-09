// SequentialFile.cpp : Saves movie titles and release years in a sequential access file.
// Created/revised by Willy Fox on October 9, 2017

#include "stdafx.h"
#include <iostream>
#include <string>
#include <fstream>

int main()
{
	std::string filename = "movies.txt";
	std::string title = "";
	std::string year = "";

	//create file object and open the file
	std::ofstream outFile;
	outFile.open(filename, std::ios::out);

	//determine whether the file is open
	if (outFile.is_open())
	{
		while (title != "-1")
		{
			//get movie title
			std::cout << "Movie title (-1 to stop): "; std::getline(std::cin, title);
			if (title == "-1")
				break;

			//get the release year
			std::cout << "Year released: "; std::getline(std::cin, year);

			//write the record to the file
			outFile << title << '#' << year << std::endl;
		}  //end while

		   //close the file
		outFile.close();
	}
	else
		std::cout << "The file '" << filename << "' could not be opened." << std::endl;
	//end if

	//system("pause");
	return 0;
}	//end of main function
