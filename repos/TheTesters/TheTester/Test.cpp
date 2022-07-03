#include <iostream>
using namespace std;

int findTotal(int[], int);

int main()
{
	const int NUM = 7;
	double total;
	double numbers[NUM] = { 8.1, 6, 7, 5, 3, 0, 9 };

	total = findTotal(numbers, 7);
	cout << "The total of the array named numbers is " << total << endl;

	return 0;
}



int findTotal(double numbers[], int NUM)
{

	double sum = 0;


	for (int i = 0; i < NUM; i++)
	{
		sum += numbers[i];
	}

	return sum;

}