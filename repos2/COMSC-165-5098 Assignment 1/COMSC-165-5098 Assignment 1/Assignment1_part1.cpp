/*
Description: Assignment 1
Student: Sergio Satyabrata
Class: COMSC - 165 - 5098
Date: June 20th, 2021
Status: Complete
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int coffee = 0;
	int tea = 0;
	int coke = 0;
	int orangeJuice = 0;
	int peopleSurveyed = 1;
	int voteNumber = 0;

	cout << "1. Coffee  2. Tea  3. Coke  4. Orange Juice" << endl << endl;

	do 
	{
		cout << "Please input the favourite beverage of person #" << peopleSurveyed++ << ": Choose 1, 2, 3, or 4 from the above menu or -1 to exit the program" << endl;
		cin >> voteNumber;

		switch (voteNumber) 
		{
		case 1: coffee++;
			break;
		case 2: tea++;
			break;
		case 3: coke++;
			break;
		case 4: orangeJuice++;
			break;
		case -1: peopleSurveyed--;
			break;
		default: (cout << "Invalid Input. " && peopleSurveyed--);
			break;
		}
	} while (voteNumber != -1);

	cout << "The total number of people surveyed is " << peopleSurveyed - 1 << "." << "The results are as follows:" << endl;
	cout << "Beverage number of votes" << endl;
	cout << "*************************************************************" << endl << endl;
	cout << "Coffee " << coffee << endl;
	cout << "Tea " << tea << endl;
	cout << "Coke " << coke << endl;
	cout << "Orange Juice " << orangeJuice << endl;
	return 0;
}

