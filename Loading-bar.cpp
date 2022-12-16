/*
    Author : Easter Maxwell
    Date : 30th November, 2022
*/
/*
    Program : loading / progress bar
*/

#include <iostream>
#include <windows.h>

using namespace std;

void display_percent()
{
	/*green color*/
	system("color 0A");

	Sleep(300);
	cout << " 100%";

	Sleep(2000);
	system("cls");
	
	/*back to normal*/
	system("color 07")

	exit(0);

}

int main()
{
	int index;
	int limit = 20;
	char loader = '#';

	cout << "\n\n\n\n\n\n\n\n\n\n\n\n";
	cout << "\t\t\t\t\t\t";

	cout << "[";

	for (index = 0; index < limit; index++)
	{
		cout << loader;
		
		/*makes it a bit more dramatic*/
		if (index == 9 || index == 15)
		{
			Sleep(1500);
		}

		Sleep(300);
	}

	cout << "]"; 

	display_percent();

	cout << "\n\n\n\n\n\n\n\n\n\n\n\n";

	return -1;

}
