#include <iostream>
#include <iomanip>
using namespace std;

int main()
{


	cout << "Please enter your height in inches" << endl;
		double height;
		cin >> height;


	cout << "Please enter your weight in pounds" << endl;
		double weight;
		cin >> weight;


	


	double BMI;
		BMI = (weight * 703) / (pow(height, 2));
		cout << setprecision(1) << fixed;
		cout << "Your BMI is " << BMI << endl;



	if ((17.5 <= BMI) && (BMI <= 25))
		{

			cout << "You are at the optimal weight!" << endl;

		}

	else if (BMI > 25)
		{
		
			cout << "You are overweight!" << endl;
		
		}


	else if (BMI < 17.5)
		{

			cout << "You are underweight!" << endl;

		}



	


		return 0;
}