/*
	Author : Easter Maxwell
	Date : 24th December, 2022

	change the element of an index in an array
	deletes any element set to zero by default
*/

#include <iostream>
#include <windows.h>

#define DELETED   0

using namespace std;

const int elements = 5;

int main()
{
	int index;
	int array_input[elements];
	int int_array[elements] = { 1, 2, 3, 4, 5 };

	for (index = 0; index < elements; index++)
	{
		cout << "`--> Array index [" << (index + 0) << "] = "
			 << int_array[index] << endl;
	}

	cout << endl;

	for (index = 0; index < elements; index++)
	{
		cout << "New value for index ["
			 << (index) << "] : ";

		cin >> array_input[index];

		/*delete 0 value elements*/
		if (array_input[index] == 0)
		{
			array_input[index] = DELETED;
		}
	}

	cout << endl;

	string loader = "---------------------------";

	for (index = 0; index < loader.length(); index++)
	{
		cout << loader[index];

		Sleep(100);
	}

	cout << endl << endl;

	for (index = 0; index < elements; index++)
	{
		if (array_input[index] != DELETED)
		{
			cout << "New value for index [" << (index + 0)
				 << "] : " << array_input[index + 0] << endl;
		}
	}

	cout << endl;
	cout << "#Auto deleted elements of 0 value!";

	cout << endl;

	return 0;

}
