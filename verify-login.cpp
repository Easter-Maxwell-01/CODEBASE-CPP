/*
	Author : Easter Maxwell
	Date : 7th december, 2022

	Program : user-data validation
*/

#include <iostream>
#include <windows.h>

using namespace std;

namespace user_var
{
	string password;
	string user_name;
}

int main(); /*main function*/

/*return to main screen*/
void main_screen()
{
	Sleep(5000);

	system("cls");

	main();
}

class User_Details
{
private:

	string _user_name;
	string _password_id;

public:

	User_Details(string user_name, string password)
	{
		this -> _user_name = user_name;
		this -> _password_id = password;
	}

	void check_data(string u_n, string p_id)
	{
		if (_user_name == u_n && _password_id == p_id)
		{
			cout << "\n";
			cout << "`--> Login successful!" << endl;
		}

		else if (user_var::user_name != u_n || user_var::password != p_id)
		{
			cout << "\n";
			cout << "`--> login unsuccessful!" << endl; 

			Sleep(1000);
			cout << "`--> #Resolve : check validity of input!";

			main_screen();
		}

		else if (user_var::user_name.length() > 15 || user_var::password.length() > 15)
		{
			cout << "\n";
			cout << "`--> Invalid password - username length!" << endl; 

			Sleep(1000);
			cout << "`--> #Resolve : length must be below 15!";

			main_screen();
		}

		else
		{
			cout << "\n";
			cout << "`--> Invalid input!" << endl;

			Sleep(1000);
			cout << "`--> #Resolve : check for input typo!";

			main_screen();
		}
	}
};

int main()
{
	/*hidden data -> [modify if u wish]*/
	
	string real_password = "#d92039jfaj*;02";
	string real_user_name = "EasterMaxwell01";

	User_Details data(real_user_name, real_password);

	cout << "[:]Enter password : ";
	cin  >> user_var::password;

	cout << "\n";

	cout << "[:]Enter user name : ";
	cin  >> user_var::user_name;

	data.check_data(user_var::user_name, user_var::password);

	return -1;

}
