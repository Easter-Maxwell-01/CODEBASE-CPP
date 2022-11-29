/*
	Author : Easter Maxwell
    Date : 27th November, 2022
*/
/*
    Program : temperature calculator (Fahrenheit, Celsius)
*/
/*	
	Note : Don't mind the design, just wanted something good looking!
*/

#include <iomanip>  
#include <iostream> 
#include <windows.h>

using namespace std;

void standard_output()
{
	int fahr;
	int order;
	int celsius;
	int lower_value;
	int upper_value;

	cout << "\n";
	cout << "[+]Enter Order value : ";
	cin  >> order;

	cout << "\n";
	cout << "[+]Enter Lower Value : ";
	cin  >> lower_value;

	cout << "\n";
	cout << "[+]Enter Upper Value : ";
	cin  >> upper_value;

	fahr = lower_value;

	cout << "\n";
	cout << "\t\t\t\t\t         ";
	cout << "--- Temperature ---" << endl;

	cout << "\n";
	cout << "\t\t\t\t\t    "
	     << "+----------------------------+"
	     << "\n"
	     << "\t\t\t\t\t    "
	     << "| Fahrenheit       Celsius   |"
	     << "\n"
	     << "\t\t\t\t\t    "
	     << "+--------------|-------------+";

	while (fahr <= upper_value)
	{
		/*Formula (Fahrenheit to Celsius)*/
		celsius = 5 * (fahr - 32) / 9;

		cout << "\n";
		cout << "\t\t\t\t\t    ";

		cout << "      " << fahr << "\t\t " << celsius << "      ";

		cout << "\n";
		cout << "\t\t\t\t\t    ";
		cout << "+--------------|-------------+";

		cout << "\n";

		fahr = fahr + order;
	}

}

void user_specific_output()
{
	string option;
	float fahr_input;
	float fahr_value;
	float celsius_input;
	float celsius_value;

	cout << "\t\t\t\t\t       "
		 << "--- Available Options ---" << endl;

	cout << "\t\t\t     "
	     << "\n"
	     << "\t\t\t     "
	     << "+-----------------------------------------------------------+"
	     << "\t\t\t     "
	     << "\n"
	     << "\t\t\t     "
	     << "| Press F to convert temperature from Fahrenheit to celsius |"
	     << "\t\t\t     "
	     << "\n"
	     << "\t\t\t     "
	     << "| --------------------------------------------------------- |"
	     << "\t\t\t     "
	     << "\n"
	     << "\t\t\t     "
	     << "| Press C to convert temperature from Celsius to Fahrenheit |"
	     << "\t\t\t     "
	     << "\n"
	     << "\t\t\t     "
	     << "+-----------------------------------------------------------+";

	cout << "\n\n";
	cout << "[:]Enter Option : ";
	cin  >> option;

	if (option == "C" || option == "c")
	{
		cout << "\n";
		cout << "[+]Enter Temperature in Celsius : ";
		cin  >> celsius_input;

		/*Formula (Celsius to Fahrenheit)*/
		fahr_value = (9.0 / 5.0) * celsius_input + 32;

		cout << "\n";
		cout << "\t\t\t\t\t            ";
		cout << "--- Result ---" << endl;

		cout << "\n";
		cout << "\t\t\t\t\t    "
		     << "+----------------------------+"
		     << "\n"
		     << "\t\t\t\t\t    "
		     << "|   Celsius       Fahrenheit |"
		     << "\n"
		     << "\t\t\t\t\t    "
		     << "+--------------|-------------+";

		cout << "\n";
		cout << "\t\t\t\t\t    ";
		cout << "      " <<  celsius_input << "\t   |      " << setprecision(3) << fahr_value << "   ";

		cout << "\n";
		cout << "\t\t\t\t\t    ";
		cout << "+----------------------------+";

		cout << "\n";

	}

	else if (option == "F" || option == "f")
	{
		cout << "\n";
		cout << "[+]Enter Temperature in Fahrenheit : ";
		cin  >> fahr_input;

		/*Formula (Fahrenheit to Celsius)*/
		celsius_value = 5 * (fahr_input - 32) / 9;

		cout << "\n";
		cout << "\t\t\t\t\t            ";
		cout << "--- Result ---" << endl;

		cout << "\n";
		cout << "\t\t\t\t\t    "
		     << "+----------------------------+"
		     << "\n"
		     << "\t\t\t\t\t    "
		     << "|  Fahrenheit       Celsius  |"
		     << "\n"
		     << "\t\t\t\t\t    "
		     << "+--------------|-------------+";

		cout << "\n";
		cout << "\t\t\t\t\t    ";
		cout << "      " << fahr_input << "\t   |    " << setprecision(3) << celsius_value << "\t   ";

		cout << "\n";
		cout << "\t\t\t\t\t    ";
		cout << "+----------------------------+";

		cout << "\n";
	}

	else
	{
		Sleep(500);
		cout << "\n|" << endl;
        cout << "`--> Invalid option input!" << endl;
        cout << "|" << endl;
        cout << "`--> Error : Not a valid Option!" << endl;
	}

}

int main()
{
	string user_input;

	cout << "\n\t\t\t\t\t    ";
	cout << "--- TEMPERATURE CALCULATOR ---";
    cout << "\n\n";


	cout << "\t\t\t\t\t"
	     << "+------------------------------------+"
	     << "\t\t\t\t\t"
	     << "\n"
	     << "\t\t\t\t\t"
	     << "| Press 0 to display standard  input |"
	     << "\t\t\t\t\t"
	     << "\n"
	     << "\t\t\t\t\t"
	     << "| ---------------------------------- |"
	     << "\t\t\t\t\t"
	     << "\n"
	     << "\t\t\t\t\t"
	     << "| Press X to display specific output |"
	     << "\t\t\t\t\t"
	     << "\n"
	     << "\t\t\t\t\t"
	     << "+------------------------------------+"
	     << "\n\n";

	cout << "[:]Enter option : ";
	cin  >> user_input;

	if (user_input == "0" || user_input == "o" || user_input == "O")
	{
		Sleep(500);

		standard_output();
	}

	else if (user_input == "X" || user_input == "x" || user_input == "*")
	{
		Sleep(500);

		user_specific_output();
	}

	else
	{
		Sleep(500);
		cout << "\n|" << endl;
        cout << "`--> Invalid option input!" << endl;
        cout << "|" << endl;
        cout << "`--> Error : Not a valid Option!" << endl;
	}

	return -1;

}
