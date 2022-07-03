#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	double r, ans1, ans2, ans3;
	const double pi = 3.14159;

		cout << "Please enter the radius" << endl;

		cin >> r;


	


		ans1 = (pi * pow(r,2));

	cout << setprecision(2) << fixed;

	cout << "The area of the circle is " << ans1 << endl;

	
		ans2 = (2 * r);
	cout << "The diameter of the circle is " << ans2 << endl;


	ans3 = (2 * pi * r);
	cout << "The circumference of the circle is " << ans3 << endl;
	


		return 0;

		// area  = pi * r^2
		// diameter = 2*r
		// circumfrence = 2 * pi * r


}