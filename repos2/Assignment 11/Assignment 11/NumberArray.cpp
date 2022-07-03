#include <iostream>
#include "NumberArray.h"

using namespace std;

NumberArray::NumberArray(int s) // constructor
{
	arrayPointer = nullptr;
	arrayPointer = new double[s];
	size = s;
}

NumberArray::~NumberArray()// destructor
{
	if (arrayPointer != nullptr)
	{
		delete[] arrayPointer;
		arrayPointer = nullptr;
	}
}

void NumberArray::setCell(int c, double val) //set cell member function
{
	if (arrayPointer != nullptr && c >= 0 && c <= size)
	{
		arrayPointer[c] = val;
	}

	else
	{
		cout << "Invalid Cell Number" << endl;
		exit(EXIT_FAILURE);
	}
}

int NumberArray::getCell(int cellNum) //get cell function
{
	if (cellNum < 0 || cellNum > size)
	{
		cout << "Invalid cell number" << endl;
		exit(EXIT_FAILURE);
	}
	return arrayPointer[cellNum];
}

double NumberArray::getAverage() // get average function
{
	double total = 0;

	for (int count = 0; count < size; count++)
	{
		total += arrayPointer[count];
	}
	return total / size;
}

double NumberArray::getHighest() //  get highest function
{
	double highest = arrayPointer[0];
	
	for (int count = 1; count < size; count++)
	{
		if (arrayPointer[count] > highest)
		{
			highest = arrayPointer[count];
		}
	}
	return highest;
}

double NumberArray::getLowest() //  get lowest function
{
	double lowest = arrayPointer[0];

	for (int count = 1; count < size; count++)
	{
		if (arrayPointer[count] < lowest)
		{
			lowest = arrayPointer[count];
		}
	}
	return lowest;
}
