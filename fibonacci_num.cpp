/*
		Author : Easter Maxwell
		Date : 6th January, 2023

		Program : Fibonacci series (nested loops)
*/

#include <iostream>

using namespace std;

const int range_to_calculate = 5;

int main(int prototype)
{
	int index;
	int substitute;
	int f_operand = 0;
	int s_operand = 1;
	char option_input;

	do
	{
		for (index = 0; index < range_to_calculate; index++)
		{
			cout << f_operand + s_operand << " ";

			substitute = s_operand;

			s_operand = f_operand + s_operand;

			f_operand = substitute;
		}

		cout << "\n\nDo you want more numbers? [y/n] -> ";
		cin  >> option_input;

		cout << endl;

	} while (option_input == 'y');

	cout << "Program terminated!" << endl;

	return 0;

}
