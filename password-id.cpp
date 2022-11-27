/*
    Author : Eater Maxwell
    Date : 27th November, 2022
*/
/*
    Program : Password generator
*/

#include <ctime>
#include <cstdlib>
#include <iostream>

using namespace std;

const char pwd_characters[] = "0123456789"
                              "@!~#$%^&*?"
                              "abcdefghijklmnopqrstuvwxyz"
                              "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

/*gets the size of pwd_characters*/
int pwd_characters_size = sizeof(pwd_characters) - 1;

int main()
{
    int index;
    int pwd_length;

    cout << "\n\t\t\t\t\t\t";
    cout << "--- Password Generator ---";

    cout << "\n";

    cout << "-[:]-Enter password length : ";
    cin  >> pwd_length; 

    /*seeds the password generator*/
    srand(time(NULL));

    if (pwd_length <= 0)
    {
        cout << "\n";
        cout << "|" << endl;
        cout << "`--> Invalid password length!" << endl;
        cout << "`--> Error : Password length less than 1";
    }

    else if (pwd_length > 50)
    {
        cout << "\n";
        cout << "|" << endl;
        cout << "`--> Invalid password length!" << endl;
        cout << "`--> Error : Password length greater than 50";
    }

    else
    {
        cout << "\n";
        cout << "|" << endl;
        cout << "`--> Generated Password : ";

        for (index = 0; index < pwd_length; index++)
        {
            /*to randomly generate a password within range*/
            cout << pwd_characters[rand() % ::pwd_characters_size];
        }

    }

    cout << "\n";

    return -1;

}

