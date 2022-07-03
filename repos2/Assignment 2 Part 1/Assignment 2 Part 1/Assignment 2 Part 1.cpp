/*
Description: Assignment 2 Part 1
Student: Sergio Satyabrata
Class: COMSC - 165 - 5098
Date: June 20th, 2021
Status: Complete
*/


#include <iostream>
using namespace std;

//Declaring the function
void swap(float&, float&);

int main()
{
	//Declaring the 2 variables
	float first;
	float second;

	//Asking the user for the first and second numbers
	cout << "Enter the first number, then hit enter" << endl;
	cin >> first;
	cout << "Enter the second number, then hit enter" << endl;
	cin >> second;
	cout << "You input the numbers as " << first << " and " << second << endl;

	//Calling the function to swap
	swap(first, second);

	//Displaying the results
	cout << "After swapping, the first number has the value of " << first << " which was the value of the second number" << endl;
	cout << "The second number has the value of " << second << " which was the value of the first number" << endl;

	return 0;
}

//Writing the function
void swap(float& number1, float& number2) 
{
	float x;
	x = number1;
	number1 = number2;
	number2 = x;
}