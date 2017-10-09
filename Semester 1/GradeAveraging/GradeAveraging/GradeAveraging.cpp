// GradeAveraging.cpp : Averages grades for a select number of students.
// Created/Revised by Willy Fox on September 25, 2017

#include "stdafx.h"
#include <iostream>

/*
asks a teacher to enter the number of students in the class
asks the teacher to input three grades for each student
after the teacher enters the three grades for a student, the program should display the student's average score.
use a repetition structure to prompt the teacher to enter three grades
for the number of students keyed earlier to be in the class
*/

int sumGrades(int grd1, int grd2, int grd3) {
	int sumOfGrades; int averageGrade;

	sumOfGrades = grd1 + grd2 + grd3;
	averageGrade = sumOfGrades / 3;
	return averageGrade;
}

int main()
{
	// Define some variables
	int studentCount;
	int studentGrade1; int studentGrade2; int studentGrade3;


	std::cout << "Current number of students: "; std::cin >> studentCount; std::cout << std::endl;

	int x = 1;
	while (x <= studentCount) {
		std::cout << "Student #" << x << "'s grades" << std::endl;
		std::cout << "    First grade: "; std::cin >> studentGrade1;
		std::cout << "    Second grade: "; std::cin >> studentGrade2;
		std::cout << "    Third grade: "; std::cin >> studentGrade3; std::cout << std::endl;
		std::cout << "Average for student #" << x << ": " << sumGrades(studentGrade1, studentGrade2, studentGrade3) << std::endl;
		std::cout << std::endl << "--------------------------" << std::endl << std::endl; // Organize text better
		x++;
	}


    return 0;
}

