#include <iostream>
using namespace std;


struct Program
{
	double rainfall;
	double high_temperature;
	double low_temperature;
};


int main()
{
	Program p[3];
	
	for (int i = 0; i < 3; i++)
	{
		cout << "Enter the total rainfall for month" << " " << i + 1 << " ";
		cin >> p[i].rainfall;
		cout << "Enter the high temperature for month" << " " << i + 1 << " ";
		cin >> p[i].high_temperature;
		cout << "Enter the low temperature for month" << " " << i + 1 << " ";
		cin >> p[i].low_temperature;
	}

	double high = p[0].high_temperature;

	if (p[1].high_temperature > high)
		high = p[1].high_temperature;

	if (p[2].high_temperature > high)
		high = p[2].high_temperature;


	double low = p[0].low_temperature;

	if (p[1].low_temperature < low)
		high = p[1].low_temperature;

	if (p[2].low_temperature < low)
		low = p[2].low_temperature;
	

	cout << "The total rainfall for all three months is " << p[0].rainfall + p[1].rainfall + p[2].rainfall << endl;
	cout << "The average rainfall is " << (p[0].rainfall + p[1].rainfall + p[2].rainfall) / 3 << endl;
	cout << "The highest high temperature is " << high << endl;
	cout << "The lowest low temperature is " << low << endl;

	return 0;
}
