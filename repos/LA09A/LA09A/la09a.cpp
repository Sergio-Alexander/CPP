#include <iostream>
using namespace std;

int main()
{
	int num1 = 10;
	int num2 = 2;

	int* num1ptr;
	int* num2ptr;

	num1ptr = &num1;
	num2ptr = &num2;


	int sum = *num1ptr + *num2ptr;

	cout << "The sum of " << *num1ptr << " and " << *num2ptr << " is " << sum << endl;


	return 0;
}