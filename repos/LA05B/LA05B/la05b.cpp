#include <fstream>
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;


void perror();


int main()

{
	string File_Name;

	cout << "Please name your file and end it with a .txt" << endl;
	cout << "An example would be, File.txt" << endl;
	cin >> File_Name;



	double a, b, c;

	ofstream fout;

	cout << "Please enter 3 numbers. Make sure to leave a space after each number." << endl;
	cin >> a >> b >> c;


	fout.open(File_Name); 
	if (fout)
	{

		fout << a << endl;
		fout << b << endl;
		fout << c << endl;

		fout.close();

	}
	else
		perror();

	return 0;
}

void perror()

{

	cout << "error opening files!" << endl;

}