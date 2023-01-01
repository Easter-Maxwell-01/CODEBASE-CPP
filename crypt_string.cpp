/*
        Author : Easter Maxwell
        Date : 1st January, 2022 

        Program : string decryptor/encryptor
*/
#include <iostream>

using namespace std;

int main()
{
    int index;
    int option;
    char text[100];

    cout << "[:]Enter a string : ";
    cin  >> text;

    cout << endl;

    cout << "[1]Encrypt the string" << endl;
    cout << "[2]Decrypt the string" << endl;

    cout << endl;

    cout << "[:]Enter option : ";
    cin  >> option;

    switch (option)
    {
    case 1: //encryption

        for (index = 0; (index < 100 && text[index] != '\0'); index++)
        {
            // the key for encryption is 3 (added to ASCII value)
            text[index] = text[index] + 2; 
        }

        cout << endl;
        cout << "`--> Encrypted string : " << text << endl;

        break;

    case 2: //decryption

        for (index = 0; (index < 100 && text[index] != '\0'); index++)
        {
            // the key for decryption is 3 (subtracted from ASCII value)
            text[index] = text[index] - 2;
        }

        cout << endl;
        cout << "`--> Decrypted string : " << index << endl;

        break;

    default:

        cout << endl;
        cout << "`--> Error : Invalid input!" << endl;

    }

    return 0;

}
