/*
Description: Assignment 1 Part 2
Student: Sergio Satyabrata
Class: COMSC - 165 - 5098
Date: June 20th, 2021
Status: Complete
*/

#include <iostream>
using namespace std;

int main()
{
	//Declaring the variables

	int tellers = 0;
	int years = 3;
	int sickDays;
	int sumSickDays = 0;

	// Asking the user how many tellers there are

	cout << "How many tellers worked at Nation's Bank during each of the last three years?" << endl;
	cin >> tellers;

	// Creating the loop
	
	for (int i = 1; i < tellers + 1; i++) // The loop will continue until it reaches the number that the user has inputed
	{
		for (int x = 1; x < years + 1; x++) // The loop will continue three times for each teller 
		{
			cout << "How many days was teller " << i << " out sick during year " << x << "?" << endl;
			cin >> sickDays;
			sumSickDays += sickDays;
			sickDays = 0;
		}
	}

	// This statement will tell the user how many tellers there are, and the sum of all of the sick days  
	cout << "The " << tellers << " Tellers were sick for a total of " << sumSickDays << " days during the last three years" << endl;
	return 0;
}