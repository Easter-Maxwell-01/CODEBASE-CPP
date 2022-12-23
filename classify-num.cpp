/*
	Author : Easter Maxwell
	Date : 22nd December, 2022

	classify numbers --- [odd, evens, zeros]
*/
#include <iostream>

using namespace std;

const int ARRAY_SIZE = 20;

int main()
{
	int index;
	int odds = 0;
	int evens = 0;
	int zeros = 0;
	int number_input[ARRAY_SIZE];

	cout << "[:] Enter 20 numbers : ";

	for (index = 0; index < ARRAY_SIZE; index++)
	{
		cin >> number_input[index];

		if (number_input[index] == 0)
		{
			zeros++;
		}

		else if (number_input[index] == 1)
		{
			odds++;
		}

		else if (number_input[index] % 2 == 0)
		{
			evens++;
		}

		else if (number_input[index] % 1 == 0)
		{
			odds++;
		}

	}

	cout << "\n";

	cout << "Odds found : " << odds << endl;
	cout << "Evens found : " << evens << endl;
	cout << "Zeros found : " << zeros << endl;

	return -1;

}
