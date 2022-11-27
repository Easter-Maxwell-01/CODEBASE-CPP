/*
    Author : Easter Maxwell
    Date : 27th November, 2022
*/
/*
	Program : Multiplication tables
*/

#include <iostream>

using namespace std;

int main()
{
	int index;
	int limit = 13;
	int number_to_multiply;

    cout << "\n";

    cout << "-[:]-Enter a number to multiply : ";
    cin  >> number_to_multiply;

    cout << "\n";

	cout << " Multiplication       Result" << endl;
	cout << "------- --------     --------" << endl;

	for (index = 0; index < limit; index++)
	{
		cout << "    " << number_to_multiply << " " << " * " << " " 
             << index << "\t\t" << number_to_multiply * index;

		cout << "\n";
	}

	return -1;

}
