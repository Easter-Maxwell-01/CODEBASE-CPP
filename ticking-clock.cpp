/*
	Author : Easter Maxwell
	Date : 1st December, 2022

	Program : configured clock 
*/

#include <iostream>
#include <windows.h>

using namespace std;

/*delay in milliseconds*/
#define DELAYED 1000

int main()
{
	int hours;
	int minutes;
	int seconds;

	cout << "Configure time [hr mt sec] : ";
	cin	 >> hours >> minutes >> seconds;

	if (hours > 12 || minutes > 60 || seconds > 60)
	{
		cout << "\n";
		cout << "`--> Error : invalid configuration!";
		cout << "\n";
		
		exit(DELAYED);
	}

	while (true)
	{
		seconds++;

		if (seconds > 59)
		{
			minutes++;

			/*update*/
			seconds = 0;
		}

		if (minutes > 59)
		{
			hours++;

			/*update*/
			minutes = 0;
		}

		if (hours > 12)
		{
			/*update*/
			hours = 1;
		}

		cout << "\n\n\n\n\n\n\n\n\n\n\n";

		cout << "\t\t\t\t\t\t\t   CLOCK" << endl;
		cout << "\n\t\t\t\t\t\t[Current Time] -> ";

		cout << hours << " : " << minutes  << " : " << seconds;

		Sleep(DELAYED);

		system("cls");

	}

	return -1;

}
