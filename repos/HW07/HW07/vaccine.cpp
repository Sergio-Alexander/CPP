#include <iostream>
using namespace std;

void biggerNumero(const int[], int, int);

int main()
{
	int n;
	const int ARR_SIZE = 6;
	int arr_num[ARR_SIZE];

	for (int z = 0; z < ARR_SIZE; z++)
	{
		cout << "Enter number " << z + 1 << ": ";
		cin >> arr_num[z];
	}
	
	cout << "Give me a number and I'll show you everything that's bigger" << endl;
	cout << "Enter a number" << ":";
	cin >> n;

	cout << "Here are the numbers bigger than " << n << ": ";
	biggerNumero(arr_num, ARR_SIZE, n);
	
	return 0;
}

void biggerNumero(const int array[], int ARR_SIZE, int n)
{
	for (int i = 0; i < ARR_SIZE; i++)
	{
		if (array[i] > n)
		{
			if (i == ARR_SIZE - 1)
				cout << array[i];
			else
				cout << array[i] << " ";
		}
	}
}