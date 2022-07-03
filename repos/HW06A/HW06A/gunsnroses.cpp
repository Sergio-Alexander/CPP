#include <iostream>
using namespace std;


double getLength();
double getWidth();
double getArea(double, double);
void displayData(double, double, double);


int main()
{
    double l, w, a;

    l = getLength();
    w = getWidth();
    a = getArea(l, w);
    displayData(l, w, a);


    return 0;
}

double getLength()
{
    double x;
    cout << "Please enter the length of the rectangle " << endl;
    cin >> x;

    return x;
}


double getWidth()
{
    double y;
    cout << "Please enter the width of the rectangle " << endl;
    cin >> y;

    
    return y;
}


double getArea(double length, double width)
{

    return length * width;


}

void displayData(double length, double width, double area)
{

    cout << "The length you entered = " << length << endl;

    cout << "The width you entered = " << width << endl;

    cout << "The area of the rectangle is  = " << area << endl;

}





