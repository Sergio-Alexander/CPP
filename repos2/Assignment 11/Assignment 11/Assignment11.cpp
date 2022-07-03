/*
Description: Assignment 11
Student: Sergio Satyabrata
Class: COMSC - 165 - 5098
Date: July 22nd, 2021
Status: Complete
With help from the professor
*/


#include <iostream>
#include "NumberArray.h"
using namespace std;

int main()
{
	//declaring the variables 
	int howMany;
	int count;
	double val;

	cout << "How many numbers do you want to store? "; // asking the user the size of the array
	cin >> howMany; // user inputting the array

	NumberArray numbers(howMany); 

	cout << "\nEnter the " << howMany << " numbers" << endl; // asking the user to input the a number into the array

	for (count = 0; count < howMany; count++) // user will input a number into the array
	{
		cout << "Number " << (count + 1) << ": ";
		cin >> val;

		numbers.setCell(count, val);
	}

	cout << "\n----------------------------------\n";
	cout << "\nHere are the numbers you entered: \n";

	for (count = 0; count < howMany; count++)
	{
		cout << "Number " << (count + 1) << ": " << numbers.getCell(count) << endl; //  the system will display the numbers that have been inputted
	}

	cout << "\n-----------------------------------\n";
	cout << "The average of those numbers is: ";
	cout << numbers.getAverage() << endl; // the system will display the average of the numbers inputted

	cout << "The highest of those numbers is: ";
	cout << numbers.getHighest() << endl; // the system will display the highest number inputted in the array

	cout << "The lowest of those numbers is: ";
	cout << numbers.getLowest() << endl; // the system will display the lowest number inputted in the array

	return 0;
}