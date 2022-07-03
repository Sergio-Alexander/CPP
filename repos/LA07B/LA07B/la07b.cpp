#include <iostream>
using namespace std;

double findTotal(double[], int);

int main()
{
	const int NUM = 7;
	double total;
	double a[NUM]; 
	
	a[0] = 8.1;
	a[1] = 6; 
	a[2] = 7; 
	a[3] = 5; 
	a[4] = 3;
	a[5] = 0;
	a[6] = 9;

	

	total = findTotal(a, 7);
	cout << "The total of the array named numbers is " << total << endl;

	return 0;
}



double findTotal(double numbers[], int NUM)
{
	
	double sum = 0;



	sum = numbers[0] + numbers[NUM-1];

	return sum;

}