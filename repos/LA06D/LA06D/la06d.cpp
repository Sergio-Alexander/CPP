#include <iostream>
using namespace std;

void showBigger(double, double);
void getNum(double &);

int main()
{
	double x, y;
	int z = 3;
	for (int i = 0; i < z; i++)
	{
		getNum(x);
		getNum(y);
		showBigger(x, y);
		cout << "----------------------------" << endl;
	}
	return 0;
}


void getNum(double &r)
{
	cout << "Enter a number" << endl;
	cin >> r;
}


void showBigger(double x, double y)
{
	if (x > y)
	{
		cout << "The first number is bigger" << endl;
	}
	if (y > x)
	{
		cout << "The second number is bigger" << endl;
	}
	if (x == y)
	{
		cout << "The numbers are the same" << endl;
	}
}
