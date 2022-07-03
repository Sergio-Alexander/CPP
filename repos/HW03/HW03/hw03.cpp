#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	
		double num1, num2, num3, num4, num5, avg;

		cout << "Enter 5 numbers seperated by spaces: ";
		cin >> num1 >> num2 >> num3 >> num4 >> num5;

		avg = (num1 + num2 + num3 + num4 + num5) / 5;

		cout << setprecision(1) << fixed;
		cout << "The average of the 5 numbers is " << avg << endl;




		return 0;
	
}