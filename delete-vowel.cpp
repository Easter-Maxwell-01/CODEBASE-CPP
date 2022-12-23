/*
	Author : Easter Maxwell
	Date : 22nd December, 2022

	remove all the vowels in a particular sentence
*/

#include <iostream>

#define DELETED   0

using namespace std;

const int LENGTH = 55;

int main()
{
	string sentence;

	cout << "Enter a sentence : ";

	for (int index = 0; index < LENGTH; index++)
	{
		sentence =  sentence[index];

		for (index = 0; index < sentence.length(); index++)
		{
			cin >> sentence[index];

			if (sentence[index] == 'a' || sentence[index] == 'A')
			{
				sentence[index] = DELETED;
			}

			else if (sentence[index] == 'e' || sentence[index] == 'E')
			{
				sentence[index] = DELETED;
			}

			else if (sentence[index] == 'i' || sentence[index] == 'I')
			{
				sentence[index] = DELETED;
			}

			else if (sentence[index] == 'o' || sentence[index] == 'O')
			{
				sentence[index] = DELETED;
			}

			else if (sentence[index] == 'u' || sentence[index] == 'U')
			{
				sentence[index] = DELETED;
			}

			else if (sentence[index] != DELETED)
			{
				cout << sentence[index] << " ";
			}

		}

	}

	exit(0);

	return -1;

}
