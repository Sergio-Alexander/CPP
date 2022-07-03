#include <iostream>
using namespace std;

int* whatAmIDoing(int*, const int);

int main()
{
    const int SIZE = 5;
    int array[SIZE] = { 8, 6, 7, 5, 3 };

    int* doubleArray = whatAmIDoing(array, SIZE);
    int brandNewSize = SIZE * 2;
    for (int y = 0; y < brandNewSize; y++)
    {
        cout << doubleArray[y] << " ";
    }


    delete [] doubleArray;

    return 0;
}

int* whatAmIDoing(int* array, const int SIZE)
{
    const int SIZENEW = SIZE * 2;
    int* doubleSize = new int[SIZENEW] {0};

    for (int z = 0; z < SIZE; z++)
    {
        doubleSize[z] = array[z];
    }

    return doubleSize;
}