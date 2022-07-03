#include <iostream>
using namespace std;



void showBigger(int = 0, int = 0);
double getNum();



int main()

{

	int x, y;

	int z = 3;
	for (int i = 0; i < z; i++)
	{
		x = getNum();
		y = getNum();

		
		showBigger(x, y);

		cout << "--------------------------------------------------------" << endl;
	}
	return 0;
}


double getNum()
{

	double r;

	cout << "Enter a number" << endl;
	cin >> r;

	return r;

}


void showBigger(int x, int y)
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