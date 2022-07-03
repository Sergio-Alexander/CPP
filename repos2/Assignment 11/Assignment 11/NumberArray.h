#pragma once

class NumberArray
{
private:
	double* arrayPointer;
	int size;

public:
	// Constructor
	NumberArray(int);
	//Destructor
	~NumberArray();
	//Mutator
	void setCell(int, double);
	//Accessor
	int getCell(int);
	//function
	double getAverage();
	//function
	double getHighest();
	//function
	double getLowest();
};