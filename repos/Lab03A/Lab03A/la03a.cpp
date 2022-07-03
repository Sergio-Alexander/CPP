#include<iostream>
using namespace std;

int main()
{
    // create appropriate variables to store the user's input.
    // select an appropriate data type for the variables.
    double num1, num2, answer;

    // prompt the user to enter the first number:
    cout << "Please enter a number" << endl;

        // read their first response using cin:
    cin >> num1;

        // prompt the user to enter the second number:
    cout << "Please enter another number" << endl;  
        // read their second response using cin: 
    cin >> num2;

        // divide the first number by the second and store the answer:
        answer = num1 / num2;

        // display the answer to the user
        cout << "The answer is: " << answer << endl;

        return 0; 
}