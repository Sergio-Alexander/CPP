#include <iostream>
using namespace std;



void showBigger(int = 0, int = 0);




int main()

{

	int x, y;



	int z = 3;
		for (int i = 0; i < z; i++)
		{
			cout << "Enter two numbers separated by a space: ";
			cin >> x >> y;

			showBigger(x, y);

		}

	





	return 0;
}



void showBigger(int x, int y)
{



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