#include <iostream>
using namespace std;

int main()
{
	const int NUM = 5;
	int a[NUM];
	
	a[0] = 8;
	a[1] = 6;
	a[2] = 7;
	a[3] = 5;
	a[4] = 3;

	cout << "The sum of a[0] and a[1] is" << " " << a[0] + a[1] << endl;

	for (int i = 0; i < NUM; i++)
	{
		cout << a[i] << "\t";
	}
	
	return 0;
}

