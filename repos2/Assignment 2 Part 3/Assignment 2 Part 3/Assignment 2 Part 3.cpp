/*
Description: Assignment 2 Part 3
Student: Sergio Satyabrata
Class: COMSC - 165 - 5098
Date: June 20th, 2021
Status: Complete
*/

#include <iostream>
#include <iomanip>
using namespace std;

double calculation(double&, double); //Declaring the function

int main()
{
    // Declaring the variables
    double mark;
    double sum = 0;
    double avg;
    double numGrades = 0;
    cout << "Enter the number of grades" << endl; // Asking the user on how many grades will be used
    cin >> numGrades;
    
    for (int i = 0; i < numGrades; i++) // Loop statement will ask the user to input the grades based on the number the user has given for "number of grades"
    {
        cout << "Enter a numeric grade between 0-100" << endl;

        cin >> mark;
        sum = sum + mark; // summation of all the marks
    }


   avg = calculation(sum, numGrades);

   cout << endl;

    //Main function determining the letter grade of the average based on a 10-point scale

    if (avg >= 90 && avg <= 100)
        cout << "The grade is A";
    else if (avg >= 80 && avg < 89)
        cout << "The grade is B";
    else if (avg >= 70 && avg < 79)
        cout << "The grade is C";
    else if (avg >= 60 && avg < 69)
        cout << "The grade is D";
    else if (avg >= 0 && avg < 59)
        cout << "The grade is F";
    else
        cout << "Invalid!";


    return 0;
}

double calculation(double& sum, double numGrades) // Writing the function
{
    double average;
    average = (sum / numGrades); // Inpputing the formula to calculate the average
    return average;
}
