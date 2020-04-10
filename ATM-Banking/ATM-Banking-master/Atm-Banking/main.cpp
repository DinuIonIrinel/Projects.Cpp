#include <iostream>
#include <fstream>
#include <string>
#include <stdio.h>
#include <windows.h>
using namespace std;
struct bank
{
	string pin;
	int sold;
}

client;
void change_text()
{
	ifstream g("new.txt", ios:: in);
	ofstream f("database.txt");
	while (!g.eof())
	{
		g >> client.pin >> client.sold;
		f << client.pin << " " << client.sold << endl;

	}

	f.close();
	g.close();
}

void adding()
{
	ifstream f;
	f.open("database.txt");
	ofstream g;
	g.open("new.txt");
	int value = false;
	string pin;
	int money;
	cout << "ENTER YOUR PIN AGAIN...: ";
	cin >> pin;
	f >> client.pin >> client.sold;
	while (!f.eof())
	{
		if (client.pin != pin)
		{
			g << client.pin << " " << client.sold << endl;

		}
		else
		{
			cout << "ENTER THE AMOUNT YOU WANT TO ADD IN YOUR SOLD ...: ";
			cin >> money;
			g << client.pin << " " << client.sold + money << endl;
			break;
		}

		f >> client.pin >> client.sold;

	}

	cout << "TRANSACTION WAS WITH SUCCESSFUL...\n";
	f.close();
	g.close();
}

void check()
{
	cout << "YOUR CURRENT PIN IS : " << client.pin << endl;
	cout << "YOUR CURRENT SOLD IS: " << client.sold << endl;
}

void change_pin()
{
	ifstream f;
	f.open("database.txt");
	ofstream g;
	g.open("new.txt");
	int value = false;
	string pin, pin2;
	cout << "ENTER YOUR PIN AGAIN...: ";
	cin >> pin;
	f >> client.pin >> client.sold;
	while (!f.eof())
	{
		if (client.pin != pin)
		{
			g << client.pin << " " << client.sold << endl;

		}
		else
		{
			cout << "ENTER YOUR NEW PIN ...: ";
			cin >> pin2;
			g << pin2 << " " << client.sold << endl;
			break;
		}

		f >> client.pin >> client.sold;

	}

	cout << "YOUR PIN WAS CHANGED...\n";
	f.close();
	g.close();
}

void withdrawal()
{
	ifstream f;
	f.open("database.txt");
	ofstream g;
	g.open("new.txt");
	int value = false;
	string pin;
	int money;
	bool sold_empty = false;
	cout << "ENTER YOUR PIN AGAIN...: ";
	cin >> pin;
	f >> client.pin >> client.sold;
	while (!f.eof())
	{
		if (client.pin != pin)
		{
			g << client.pin << " " << client.sold << endl;

		}
		else
		{
			cout << "ENTER THE AMOUNT YOU WANT TO EXTRACT FROM YOUR SOLD...:";
			cin >> money;
			if (money > client.sold)
			{
				sold_empty = true;
				cout << "YOU ACTUAL SOLD IS IT TOO SMALL FOR THIS TRANSACTION ";
			}

			if (sold_empty == false)
			{
				g << client.pin << " " << client.sold - money << endl;
				cout << "TRANSACTION WAS WITH SUCCESSFUL...\n";
			}

			break;
		}

		f >> client.pin >> client.sold;

	}

	f.close();
	g.close();
}

void global_market()
{
	cout << "\n";
	cout << "----EUR	4,8184	4,8170	4,8167	4,8157	\n\n";
	cout << "----GBP	5,5238	5,5361	5,5035  5,5036  \n\n";
	cout << "----USD	4,2182	4,2433	4,2539	4,2856  \n\n";
}

void account_menu()
{
	system("cls");
	cout << "\n\n\n";
	cout << "     ------------------------------ATM BANKING-----------------------------\n\n\n";
	cout << "   1.ADDING ---------------------------------------------- 4. WITHDRAWAL \n\n\n";
	cout << "   2.CHECK YOUR ACCOUNT ---------------------------------- 5. GLOBAL MARKET \n\n\n";
	cout << "   3.CHANGE PIN  ----------------------------------------- 6. EXIT \n\n\n";
	cout << "\t_________________________________________\n" << endl <<
		"\t ENTER TRANSACTION NUMBER:- ";
	while (1 != 0)
	{
		int transaction;
		cin >> transaction;
		switch (transaction)
		{
			case 1:
				{
					adding();
					change_text();
					break;
				}

			case 2:
				{
					check();
					break;
				}

			case 3:
				{
					change_pin();
					change_text();
					break;
				}

			case 4:
				{
					withdrawal();
					change_text();
					break;
				}

			case 5:
				{
					global_market();
					break;
				}

			case 6:
				{
					break;
				}

			default:
				{
					cout << "INCORRECT OPTION.TRY AGAIN ...\n";
					break;
				}
		}
	}
}

void display_first()
{
	cout << "          ------------------------- ATM BANKING ------------------ \n\n\n";
	cout << "     1. ------------------------ CREATE AN ACCOUNT ----------------- \n\n\n";
	cout << "     2. ---------------------- LOGIN WITH AN ACCOUNT ----------------- \n\n\n";
}

void account_register()
{
	ifstream f;
	f.open("database.txt");
	ofstream g;
	g.open("new.txt");
	string pin;
	cout << "ENTER YOUR PIN ...:- - - - ";
	cin >> pin;
	int first_sold = 0;
	f >> client.pin >> client.sold;
	while (!f.eof())
	{
		if (client.pin != pin)
		{
			g << pin << " " << first_sold << endl;
			cout << "CONGRATULATIONS,YOU HAVE A NEW ACCOUNT...\n";
			break;

		}
		else
		{
			cout << "THIS ACCOUNT EXIST IN OUR BASE.TRY AGAIN WITH NEW PIN...\n ";
			break;
		}

		f >> client.pin >> client.sold;

	}

	f.close();
	g.close();

}

void account_login()
{
	ifstream f("database.txt", ios:: in);
	string pin2;
	cout << "ENTER YOUR PIN  : ";
	cin >> pin2;
	int value = false;
	while (!f.eof())
	{
		f >> client.pin >> client.sold;
		if (pin2 == client.pin)
		{
			account_menu();
			value = true;
			break;
		}
	}

	if (value == false)
		cout << "THIS ACCOUNT DOSE NOT EXIST IN BASE!";
	f.close();
}

int main()
{
	system("color 1a");
	system("cls");
	display_first();
	int choice;
	cout << "       ENTER YOUR CHOICE: ";
	cin >> choice;
	switch (choice)
	{
		case 1:
			{
				account_register();
				change_text();
				break;
			}

		case 2:
			{
				account_login();
				break;
			}

		default:
			{
				cout << "YOUR CHOICE IS INCORRECT.TRY AGAIN!!!\n";
				break;
			}
	}

	return 0;

}
