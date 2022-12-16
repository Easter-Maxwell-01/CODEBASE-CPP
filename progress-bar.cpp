/*
	Author : Easter Maxwell
	Date : 16th December, 2022
*/
/*
	Program : loading / progress bar
*/

#include <iostream>
#include <windows.h>

using namespace std;

int main()
{
	int index;
	int limit = 11;
	char loader = '.';

	cout << "\n\n\n\n\n\n\n\n\n\n\n\n";
	cout << "\t\t\t\t\t\t";

	cout << "loading";

	for (index = 0; index < limit; index++)
	{
		cout << loader;

		if (index == 10)
		{
			cout << "100%" << endl;
		}

		Sleep(1000); 

	}

	cout << "\n\n\n\n\n\n\n\n\n\n\n\n";

	return -1;

}
