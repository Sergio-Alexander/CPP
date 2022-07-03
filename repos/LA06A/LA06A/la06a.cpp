#include <iostream>
using namespace std;



void showBigger();




int main()

{

	showBigger();

	showBigger();

	showBigger();



	
	return 0;
}



void showBigger()
{

	int x, y = 0;

	cout << "Please enter two numbers, seperated by a space:" << " ";
	cin >> x >> y;


	if (x > y)
	{

		cout << x << " " << "Is greater than" << " " << y << endl;

	}


	if (y > x)
	{

		cout << y << " " << "Is greater than" << " " << x << endl;

	}



	if (x == y)
	{

		cout << x << " " << "Is equal to" << " " << y << endl;


	}

}