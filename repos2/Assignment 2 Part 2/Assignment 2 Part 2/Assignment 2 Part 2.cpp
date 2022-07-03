/*
Description: Assignment 2 Part 2
Student: Sergio Satyabrata
Class: COMSC - 165 - 5098
Date: June 20th, 2021
Status: Complete
*/

#include <iostream>
#include <iomanip>
using namespace std;

// Declaring the function
double calculation(double, double, double&);


int main()
{
	// Declaring variables
	double miles = 0;
	double hours = 0;
	double milesPerHour = 0;

	calculation(miles, hours, milesPerHour); // Calling the function

	cout << fixed << setprecision(2); // Making the output display the speed with 2 decimal points
	cout << "Your speed is " << milesPerHour << " miles per hour" << endl; // Displaying the speed

	return 0;
}
// Writing the function to calculate the speed
double calculation(double miles, double hours, double& milesPerHour)
{
	cout << "Please input the miles traveled" << endl; // Asking the user to input the distance travelled
	cin >> miles;

	cout << "Please input the hours travelled" << endl; // Asking the user to input the time travelled
	cin >> hours;

	milesPerHour = miles / hours; // Calculation for the speed


	return milesPerHour;
}