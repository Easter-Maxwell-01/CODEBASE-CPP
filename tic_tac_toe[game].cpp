/*
        Author : Easter Maxwell
        Date : 2nd January, 2022

        Program : Tic_tac_toe game [Multi-player]
*/

#include <iostream>

using namespace std;

bool draw = false;
char current_player = 'X';
int user_input, row, column;

char board[3][3] = { //rows - cols
                     {'1','2','3'},
                     {'4','5','6'},
                     {'7','8','9'}
};

class Tic_Tac_Toe
{
public:

    /*game board*/
    void print_board()
    {
        cout << "\t\t\t\t\t\t   [game__board]  " << endl;

        cout << "\t\t\t\t\t\t +-------+-------+" << endl;
        cout << "\t\t\t\t\t\t |  " << board[0][0] << "    "
             << board[0][1] << "    " << board[0][2] << "  |\n";

        cout << "\t\t\t\t\t\t +-------+-------+" << endl;
        cout << "\t\t\t\t\t\t |  " << board[1][0] << "    "
             << board[1][1] << "    " << board[1][2] << "  |\n";

        cout << "\t\t\t\t\t\t +-------+-------+" << endl;
        cout << "\t\t\t\t\t\t |  " << board[2][0] << "    "
             << board[2][1] << "    " << board[2][2] << "  |\n";

        cout << "\t\t\t\t\t\t +-------+-------+" << endl;
    }

    bool game_on()
    {
        /*checking win for rows and cols*/
        for (int i = 0; i < 3; i++)
        {
            if (board[i][0] == board[i][1] && board[i][0] == board[i][2] ||
                board[0][i] == board[1][i] && board[0][i] == board[2][i])
            {
                return false; // since a win was found
            }
        }

        /*checking win for both diagonal*/
        if (board[0][0] == board[1][1] && board[0][0] == board[2][2] ||
            board[0][2] == board[1][1] && board[0][2] == board[2][0])
        {
            return false; // since a win was found
        }

        /*if game is in continue mode*/
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                //if any row or column has not been filled
                if (board[i][j] != 'X' && board[i][j] != 'O')
                {
                    return true;
                }
            }
        }

        /*else*/
        draw = true;

        return false; 

    }

    void players_turn()
    {
        if (current_player == 'X')
        {
            cout << "\n[:]Enter player x's turn : ";
        }

        else if (current_player == 'O')
        {
            cout << "\n[:]Enter player o's turn : ";
        }

        cin >> user_input;

        switch (user_input)
        {
        case 1: row = 0; column = 0; break;
        case 2: row = 0; column = 1; break;
        case 3: row = 0; column = 2; break;
        case 4: row = 1; column = 0; break;
        case 5: row = 1; column = 1; break;
        case 6: row = 1; column = 2; break;
        case 7: row = 2; column = 0; break;
        case 8: row = 2; column = 1; break;
        case 9: row = 2; column = 2; break;

        default:

            cout << "\n[:] Error : Invalid box input!\n";

            exit(0);
        }

        /*update the position for x, if it is not alreay occupied*/
        if (current_player == 'X' && board[row][column] != 'O')
        {
            board[row][column] = 'X';

            /*update current_player*/
            current_player = 'O';
        }

        /*update the position for o, if it is not already occupied*/
        else if (current_player == 'O' && board[row][column] != 'X')
        {
            board[row][column] = 'O';

            /*update current_player*/
            current_player = 'X';
        }

        else
        {
            cout << "\n[:] Error : Box is occupied!";
            cout << endl;
        }
    }
};

int main()
{
    /*class object*/
    Tic_Tac_Toe display;
    
    cout << "|--------------------|" << endl;
    cout << "|[:]Players : [O - X]|" << endl;
    cout << "|--------------------|" << endl;

    while (display.game_on())
    {
        display.print_board();

        display.players_turn();
    }

    /*checks if player o won the game*/
    if (current_player == 'X' && draw == false)
    {
        display.print_board();

        cout << "\n[:] Decision : player o won the game!";
        cout << endl;

        cout << "\t\t\t\t\t\t  +-------------+" << endl;
        cout << "\t\t\t\t\t\t  |Current Board|" << endl;
        cout << "\t\t\t\t\t\t  +-------------+" << endl;

        cout << endl;

        display.print_board();
    }

    /*checks if player x won the game*/
    else if (current_player == 'O' && draw == false)
    {
        display.print_board();

        cout << "\n[:] Decision : player x won the game!";
        cout << endl;

        cout << "\t\t\t\t\t\t  +-------------+" << endl;
        cout << "\t\t\t\t\t\t  |Current Board|" << endl;
        cout << "\t\t\t\t\t\t  +-------------+" << endl;

        cout << endl;

        display.print_board();
    }

    else
    {
        display.print_board();

        cout << "\n[:] Decision : game ended a draw!" << endl;

        cout << "\t\t\t\t\t\t  +-------------+" << endl;
        cout << "\t\t\t\t\t\t  |Current Board|" << endl;
        cout << "\t\t\t\t\t\t  +-------------+" << endl;

        cout << endl;

        display.print_board();
    }

    return 0;

}
