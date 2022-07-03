#include <iostream>
using namespace std;

int powerFunction(int, int);

int main()
{
	int base, exponent, answer;

	cout << "Enter the base:" << " ";
	cin >> base;

	cout << "Enter the exponent:" << " ";
	cin >> exponent;

	answer = powerFunction(base, exponent);

	cout << base << " " << "raised to the power of " << exponent << " " << "is: " << answer;
		 
	return 0;
}

int powerFunction(int base, int exponent)
{
	if (exponent != 0)
		return (base * powerFunction(base, exponent - 1));
	else
		return 1;
}