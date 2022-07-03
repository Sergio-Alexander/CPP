#include <iostream>
using namespace std;

int* arrayReverse(int[], const int);

int main()
{
    const int SIZE = 5;
    int array[SIZE] = { 8, 6, 7, 5, 3 };

    int* newArray = nullptr;

    newArray = arrayReverse(array, SIZE);

    for (int i = 0; i < SIZE; i++)
    {
        cout << newArray[i] << " ";
    }

    cout << endl;

    
    cout << "In the sample run, the original array was initialized with ";
    for (int z = 0; z < SIZE; z++)
    {
        cout << array[z] << " ";
    }

    delete[] newArray;
 
    return 0;
}

int* arrayReverse(int arrayz[], const int SIZER)
{
    int* arrayRev = new int[SIZER];
    int x = (SIZER - 1);

    for (int i = 0; i < SIZER; i++, x--)
        *(arrayRev + i) = arrayz[x];

    return arrayRev;
}
