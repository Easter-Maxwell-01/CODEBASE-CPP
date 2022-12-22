/*
    Author : Easter Maxwell
    Date : 20th December 2022

    program : determine largest number
*/

#include <iostream>

using namespace std;

double is_larger(double x, double y)
{
	double largest;

	if (x > y)
	{
		largest = x;
	}

	else if (y > x)
	{
		largest = y;
	}

	/*if both numbers are equal but not equal to zero*/
	else if (x == y && x != 0 || y != 0)
	{
        cout << endl;
		cerr << "`--> cannot determine largest!";

        exit(1);

	}

	else if (x == 0 && y == 0)
	{
        cout << endl;
		cerr << "`--> invalid number combination!";

        exit(1);
	}

	return largest;
}

int main()
{

	double f_num;
	double s_num;
	
	cout << "[:]Enter first number : ";
	cin  >> f_num;

	cout << "[:]Enter second number : ";
	cin  >> s_num;

	cout << endl;
	cout << "`--> Largest number determined : " << is_larger(f_num, s_num);
    cout << endl;

	return -1;

}
