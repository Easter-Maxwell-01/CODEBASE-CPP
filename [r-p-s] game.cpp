/*
    Author : Easter Maxwell
    Date : 28th November, 2022
*/
/*
    [
        Rock wins against scissors, scissors wins against paper,
        paper wins against rock, else, it's a tie between players
    ]
*/
/*
    note : I recommend that this program be run on visual studio...
*/

#include <ctime>
#include <cstdlib>
#include <iostream>
#include <windows.h>

using namespace std;

int main();

void return_to_main_screen()
{
    Sleep(5000);

    system("cls");

    cout << "\n";

    main();

}

void replay_game_option()
{
    string user_input;

    Sleep(3000);

    system("cls");

    cout << "DO YOU WANT TO PLAY AGAIN? [Y/N] -> ";
    cin >> user_input;

    if (user_input == "Y" || user_input == "Yes")
    {
        if (user_input == "y" || user_input == "yes")
        {
            Sleep(1000);

            system("cls");

            cout << "\n";

            main();
        }
    }

    else if (user_input == "N" || user_input == "No")
    {
        cout << "\n";
        cout << "`--> Terminating program..." << endl;

        Sleep(1000);
        cout << "`--> Program Terminated by default!" << endl;

        exit(500);
    }

    else
    {
        Sleep(500);
        cout << "\n";
        cout << "`--> Invalid option input!" << endl;
        cout << "`--> Error : Not a valid Option!" << endl;
        cout << "`--> Program Terminated by default!" << endl;

        Sleep(2000);
    }
}


int main()
{
    int max_num = 3;
    int min_num = 1;
    string option_input;
    int computer_generator;

    /*srand(time(NULL)), works fine*/

    /*seeds the random generator*/
    srand(unsigned int(time(NULL)));

    /*generates a random number between max_num and min_num*/
    computer_generator = (rand() % max_num + min_num);

    cout << "\t\t\t\t     ";
    cout << " --- ROCK - PAPER - SCISSORS ---" << endl;

    Sleep(500);

    cout << "\n";
    cout << "\t\t\t\t\t  ";
    cout << "** Rules of the game **";

    cout << "\n";
    cout << "\t\t\t\t    "
         << "+---------------------------------+"
         << "\n"
         << "\t\t\t\t    "
         << "|[Rule 1] paper wins against rock |"
         << "\n"
         << "\t\t\t\t    "
         << "+---------------------------------+"
         << "\n"
         << "\t\t\t\t    "
         << "|[Rule 2] scissors against paper  |"
         << "\n"
         << "\t\t\t\t    "
         << "+---------------------------------+"
         << "\n"
         << "\t\t\t\t    "
         << "|[Rule 3] rocks against scissors  |"
         << "\n"
         << "\t\t\t\t    "
         << "+---------------------------------+";

    Sleep(1000);

    cout << "\n";
    cout << "[1]Rock";

    cout << "\n";
    cout << "[2]Paper";

    cout << "\n";
    cout << "[3]Scissors";

    cout << "\n\n";

    cout << "-[:]-Enter option : ";
    cin >> option_input;

    /*checks if the option_input is invalid*/
    if (option_input != "1" && option_input != "rock")
    {
        if (option_input != "2" && option_input != "paper")
        {
            if (option_input != "3" && option_input != "scissors")
            {
                Sleep(500);
                cout << "\n" << endl;
                cout << "`--> Invalid option input!" << endl;
                cout << "`--> Error : Not a valid Option!" << endl;

                exit(500);
            }

        }
    }

    /*checks if computer chose rock*/
    while (computer_generator == 1)
    {
        if (option_input == "1" || option_input == "rock")
        {
            cout << "\n";
            cout << "``--> No Winner, It's a tie [computer chose : rock[" << computer_generator << "]]";
        }

        else if (option_input == "2" || option_input == "paper")
        {
            cout << "\n";
            cout << "`--> Great Job, You Won! [computer chose : rock[" << computer_generator << "]]";
        }

        else if (option_input == "3" || option_input == "scissors")
        {
            cout << "\n";
            cout << "`--> Ooops, You lost! [computer chose : rock[" << computer_generator << "]]";
        }

        else
        {
            Sleep(500);
            cout << "\n" << endl;
            cout << "`--> Invalid option input!" << endl;
            cout << "`--> Error : Not a valid Option!" << endl;
        }

        replay_game_option();

        break;

    }

    /*checks if computer chose paper*/
    while (computer_generator == 2)
    {
        if (option_input == "1" || option_input == "rock")
        {
            cout << "\n";
            cout << "`--> Oops, You lost! [computer chose : paper[" << computer_generator << "]]";
        }

        else if (option_input == "2" || option_input == "paper")
        {
            cout << "\n";
            cout << "`--> No Winner, it's a tie [computer chose : paper[" << computer_generator << "]]";
        }

        else if (option_input == "3" || option_input == "scissors")
        {
            cout << "\n";
            cout << "`--> Great Job, You won! [computer chose : rock[" << computer_generator << "]]";
        }

        else
        {
            Sleep(500);
            cout << "\n";
            cout << "`--> Invalid option input!" << endl;
            cout << "`--> Error : Not a valid Option!" << endl;
        }

        replay_game_option();

        break;

    }

    /*checks if computer chose scissors*/
    while (computer_generator == 3)
    {
        if (option_input == "1" || option_input == "rock")
        {
            cout << "\n";
            cout << "`--> Great job, You won! [computer chose : scissors[" << computer_generator << "]]";
        }

        else if (option_input == "2" || option_input == "paper")
        {
            cout << "\n";
            cout << "`--> Ooops, You lost! [computer chose : scissors[" << computer_generator << "]]";
        }

        else if (option_input == "3" || option_input == "scissors")
        {
            cout << "\n";
            cout << "`--> No Winner, it's a tie [computer chose : scissors[" << computer_generator << "]]";
        }

        else
        {
            Sleep(500);
            cout << "\n";
            cout << "`--> Invalid option input!" << endl;
            cout << "`--> Error : Not a valid Option!" << endl;
        }

        replay_game_option();

        break;

    }

    return -1;

}
