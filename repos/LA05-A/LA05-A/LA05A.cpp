#include <iostream>
using namespace std;

int main()

{
	int val;
	int sum = 0;

	cout << "Please enter a positive integer value" << endl;
	cin >> val;

	while (val < 0)
	{

		cout << "Please enter a POSITIVE integer value" << endl;
		cin >> val;

	}


	for (int a = 1; a <= val; a++)
	{


		sum += a;


	}

	 
	cout << "The sum is " << sum << endl;


	return 0;
}



