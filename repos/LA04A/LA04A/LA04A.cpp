#include <iostream>
using namespace std;

int main()

{

	int x;
	int y;

	cout << "Please enter the first number ";

	cin >> x;

	cout << "Please enter the second number ";

	cin >> y;

	if (x > y)

	{
		cout << x << " is greater than "<< y << endl;

	}


	if (x < y)

	{
		cout << y << " is bigger than " << x << endl;

	}


	if (x == y)

	{
		cout << y << " is equal to " << x << endl;

	}


		return 0;
}