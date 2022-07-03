#include <iostream>
using namespace std;

int main()


{

	double speed, time, distance = 0;

	cout << "Please enter your speed in mph" << endl;
	cin >> speed;

	while (speed < 0)
	{

		cout << "Negative speeds not allowed. Try again." << endl;
		cout << "Please enter your speed in mph" << endl;

		cin >> speed;
	}


	cout << "Please enter your time travelled in hours" << endl;
	cin >> time;

	while (time < 1)

	{
		cout << "Hours less than 1 are not allowed. Try again." << endl;
		cout << "Please enter your time travelled in hours" << endl;

		cin >> time;
		

	}


	cout << "--------------------------" << endl;


	cout << "Speed of the vehicle is " << speed << endl;
	cout << "Hours traveled " << time << endl;
	

	cout << "Hour   Distance Traveled" << endl;
	cout << "--------------------------" << endl;

	for (double i = 0; i < time; i++)
	{

		
		distance += speed;

		cout << "  " << (i + 1) << "          " << distance << endl;



	}


	return 0;
}

