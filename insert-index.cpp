/*
	Author : Easter Maxwell
	Date : 24th December, 2022

    change the element of an index in an array
    deletes any element set to zero by default
*/

#include <iostream>

#define DELETED   0

using namespace std;

const int elements = 5;

int main()
{
	int array_input[elements];
	int int_array[elements] = { 1, 2, 3, 4, 5 };

	for (int index = 0; index < elements; index++)
	{
		cout << "Array index [" << (index + 0) << "] = "
		     << int_array[index] << endl;
	}

	cout << endl;

	for (int index = 0; index < elements; index++)
	{
		cout << "New value for index ["
			 << (index) << "] : ";

		cin  >> array_input[index];

		if (array_input[index] == 0)
		{
			array_input[index] = DELETED;
		}
	}

	cout << endl;

	cout << "---------------------------";

	cout << endl << endl;

	for (int index = 0; index < elements; index++)
	{
		if (array_input[index] != DELETED)
		{
			cout << "New value for index [" << (index + 0)
				 << "] : " << array_input[index + 0] << endl;
		}
	}

	return 0;

}
