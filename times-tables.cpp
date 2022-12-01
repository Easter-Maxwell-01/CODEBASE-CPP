/*
    Author : Easter Maxwell
    Date : 27th November, 2022
*/
/*
    Program : Multiplication tables
*/

#include <iostream>
#include <windows.h>

using namespace std;

int main()
{
	int index;
    int limit = 9950;
	int endpoint = 13;
	int number_to_multiply;

    cout << "\n";
    cout << "\t\t\t\t\t\t";
    cout << "--- MULTIPLICATION TABLES ---";

    cout << "\n";

    cout << "-[:]-Enter number to multiply : ";
    cin  >> number_to_multiply;

    if (number_to_multiply > limit)
    {
        Sleep(500);
        
        cout << "\n";
        cout << "\a";
        cout << "`--> Error : number entered is beyond limit [" << limit << "]!";

        cout << endl;

        exit(0);
    }

    cout << "\n";

	cout << "  Multiplication       Result" << endl;
	cout << "-------- ---------  ------------" << endl;

	for (index = 0; index < endpoint; index++)
	{
		cout << "    " << number_to_multiply << " " << " * " << " " 
             << index << "\t\t" << number_to_multiply * index;
        
        Sleep(200);

		cout << "\n";
	}

	return -1;
	
}
