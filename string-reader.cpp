/*
	Author : Easter Maxwell
	Date :3rd December, 2022

	Program : String data reader
*/

#include <iostream>
#include <windows.h>

using namespace std;

int main()
{
	int index;
	int signs;
	int spaces;
	int digits;
	int vowels;
	int symbols;
	int consonants;

	signs = 0;
	spaces = 0;
	vowels = 0;
	digits = 0;
	symbols = 0;
	consonants = 0;

	string text;
	size_t length_of_text;
	int total_num_of_alphabets;

	text = ""; /*enter your own text here*/

	length_of_text = text.length();

	for (index = 0; index < text.length(); index++)
	{
		/*checks for spaces*/
		if (text[index] == ' ')
		{
			spaces += 1;
		}

		/*checks for signs*/
		else if (text[index] == '*' || text[index] == '+' || text[index]
				 == '-' || text[index] == '/' || text[index] == '^')
		{
			signs += 1;
		}

		/*checks for vowels*/
		else if (text[index] == 'a' || text[index] == 'i'|| text[index]
			      == 'o' || text[index] == 'e' || text[index] == 'u' ||
			     text[index] == 'A' || text[index] == 'I' || text[index]
			     == 'O' || text[index] == 'E' || text[index] == 'O')
		{
			vowels += 1;
		}

		/*checks for digits*/
		else if (text[index] == '0' || text[index] == '1' || text[index] 
			     == '2' || text[index] == '3' || text[index] == '4' || 
			     text[index] == '5' || text[index] == '6' || text[index] 
			     == '7' || text[index] == '8' || text[index] == '9')
		{
			digits += 1;
		}

		/*checks for symbols*/
		else if (text[index] == '!' || text[index] == '@' || text[index] == '#' ||
				 text[index] == '$' || text[index] == '%' || text[index] == ',' ||
				 text[index] == '&' || text[index] == '?' || text[index] == '(' ||
				 text[index] == ')' || text[index] == '.' || text[index] == '`' || 
			     text[index] == '~' || text[index] == ':' || text[index] == ';' || 
			     text[index] == '"' || text[index] == '{' || text[index] == '}' || 
			     text[index] == '|' || text[index] == '_' || text[index] == '[' || 
			     text[index] == ']' || text[index] == '<' || text[index] == '>')
		{
			symbols += 1;
		}

		/*checks for consonants*/
		else
		{
			consonants += 1;
		}

	}

	total_num_of_alphabets = consonants + vowels;

	cout << "[:]Text : ";

    /*outputs the text word for word*/
	for (int i = 0; i< text.length(); i++)
	{
		cout << text[i];
		
		Sleep(100);

	}

	cout << "\n\n";
	Sleep(200);

	cout << "`--> Signs  : " << signs;
	cout << endl;
	Sleep(200);

	cout << "`--> Spaces : " << spaces;
	cout << endl;
	Sleep(200);

	cout << "`--> Vowels : " << vowels;
	cout << endl;
	Sleep(200);

	cout << "`--> Digits : " << digits;
	cout << endl;
	Sleep(200);

	cout << "`--> Symbols : " << symbols;
	cout << endl;
	Sleep(200);

	cout << "`--> Consonants : " << consonants;
	cout << endl;
	Sleep(200);

	cout << "\n";

	cout << "Total length of text -> " << length_of_text;
	cout << endl;

	cout << "Total number of alphabets -> " << total_num_of_alphabets;
	cout << endl;

	return -1;

}
