#include <iostream>
#include <cstring>
using namespace std;

const int SIZE = 80;

void appendFun(char[]);
void findFun(char[]);
void insertFun(char[]);
void replaceFun(char[]);
void ddeleteFun(char[]);
int searchFun(char sourceString[], char targetString[]);

int main()
{
	char option;
	char buffer[SIZE];

	string menu = "s-search, i-insert, a-append, r-replace, d-delete, e-exit";

	cout << "Enter a string you would like to edit " << endl;
	cin.getline(buffer, SIZE);

	cout << menu << endl;

	cin >> option;
	cin.ignore();

	while (option != 'e')
	{
		switch (option)
		{
		case 's': findFun(buffer);
			break;
		case 'i': insertFun(buffer);
			break;
		case 'a': appendFun(buffer);
			break;
		case 'r': replaceFun(buffer);
			break;
		case 'd': ddeleteFun(buffer);
			break;
		default: cout << "INVALID" << endl;
		}
		cout << menu << endl;
		cin >> option;
		cin.ignore();
	}
	return 0;
}

void appendFun(char buffer[])
{
	char toappend[SIZE];
	char empty[SIZE] = " ";

	cout << "Enter the string to be appended " << endl;
	cin.getline(toappend, SIZE);

	strcat(buffer, empty);
	strcat(buffer, toappend);
	
	cout << "The new string is " << buffer << endl; 
}

void findFun(char buffer[])
{
	char tosearch[SIZE];
	int found;
	
	cout << "Enter a substring to search " << endl;
	cin.getline(tosearch, SIZE);
	found = searchFun(buffer, tosearch);
	if (found == -1)
	{
		cout << "The substring is not found" << endl;
	}
	else
	{
		cout << "The substring is found at the position " << found << endl;
		cout << endl;
	}
	
	cout << "The new string is " << buffer << endl;
}

void insertFun(char buffer[])
{
	char toinsert[SIZE];
	char empty[SIZE] = " ";
	int position;
	char temp[SIZE];

	cout << "Enter a string to insert " << endl;
	cin.getline(toinsert, SIZE);
	cout << "At which position should it be inserted? " << endl;
	cin >> position;
	cin.ignore();

	strcpy(temp, &buffer[position]);
	buffer[position] = '\0';
	strcat(buffer, empty);
	strcat(buffer, toinsert);
	strcat(buffer, temp);

	cout << "The new string is " << buffer << endl;
}

void ddeleteFun(char buffer[])
{
	char todelete[SIZE];
	int position;
	char empty[SIZE] = " ";
	char temp[SIZE];
	cout << "Enter a string to be deleted" << endl;
	cin.getline(todelete, SIZE);
	position = searchFun(buffer, todelete);

	if (position == -1)
	{
		cout << "The substring is not in the string " << endl;
	}
	else
	{
		strcpy(temp, &buffer[position + strlen(todelete)]);
		buffer[position] = '\0';
		strcat(buffer, temp);
		cout << "The updated string is " << buffer << endl;
	}

}

void replaceFun(char buffer[])
{
	char toreplace[SIZE];
	char newsubstring[SIZE];
	char temp[SIZE];
	int found;
	char empty[SIZE] = " ";
	
	cout << "Enter a substring to be replaced " << endl;
	cin.getline(toreplace, SIZE);
	cout << "Enter the new substring " << endl;
	cin.getline(newsubstring, SIZE);
	found = searchFun(buffer, toreplace);
	if (found == -1)
	{
		cout << "The string you want to replace does not exist" << endl;
	}
	else
	{
		strcpy(temp, &buffer[found + strlen(toreplace)]);
		buffer[found] = '\0';
		strcat(buffer, empty);
		strcat(buffer, newsubstring);
		strcat(buffer, temp);

		cout << "The updated string is " << buffer << endl;
	}
}

int searchFun(char sourceString[], char targetString[])
{
	int sourceLength, targetLength, index, returnValue;

	sourceLength = strlen(sourceString);
	targetLength = strlen(targetString);

	index = -1;

	for (int i = 0; i < (sourceLength - (targetLength - 1)); i++)
	{
		returnValue = strncmp(&sourceString[i], targetString, targetLength);

		if (returnValue == 0)
		{
			index = i;
			break;
		}
	}
	return index;
}