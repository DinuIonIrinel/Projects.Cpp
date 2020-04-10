//tic tac toe game version 1.1
#include <iostream>
#include <windows.h>
using namespace std;
char matrix[3][3] = { ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ' };
char player = 'X';
int a, n;
void draw()
{
	system("color 1a");
	system("cls");
	cout << "--------------------------------------------------------------------------------" << endl << endl;
	cout << "                        T I C     T A C    T O E     G A M E                    " << endl << endl;
	cout << "                            F I R S T     P L A Y E R: X                        " << endl << endl;
	cout << "                            S E C O N D   P L A Y E R: Y                        " << endl << endl;
	cout << "--------------------------------------------------------------------------------" << endl << endl;

	for (int i = 0; i < 3; i++)
	{
		cout << "                            ";
		for (int j = 0; j < 3; j++)
		{
			cout << "| ";
			cout << "__" << matrix[i][j] << "__";
		}

		cout << "| " << endl;

	}

	cout << endl;
}

void input()
{
	cout << "Enter the field do you want to change : ";
	cin >> a;
	if (a == 1)
	{
		if (matrix[0][0] == ' ')
			matrix[0][0] = player;
		else
		{
			cout << "This fiel is already use,try again..." << endl;
			input();
		}
	}
	else if (a == 2)
	{
		if (matrix[0][1] == ' ')
			matrix[0][1] = player;
		else
		{
			cout << "This fiel is already use,try again..." << endl;
			input();
		}
	}
	else if (a == 3)
	{
		if (matrix[0][2] == ' ')
			matrix[0][2] = player;
		else
		{
			cout << "This fiel is already use,try again..." << endl;
			input();
		}
	}
	else if (a == 4)
	{
		if (matrix[1][0] == ' ')
			matrix[1][0] = player;
		else
		{
			cout << "This fiel is already use,try again..." << endl;
			input();
		}
	}
	else if (a == 5)
	{
		if (matrix[1][1] == ' ')
			matrix[1][1] = player;
		else
		{
			cout << "This fiel is already use,try again..." << endl;
			input();
		}
	}
	else if (a == 6)
	{
		if (matrix[1][2] == ' ')
			matrix[1][2] = player;
		else
		{
			cout << "This fiel is already use,try again..." << endl;
			input();
		}
	}
	else if (a == 7)
	{
		if (matrix[2][0] == ' ')
			matrix[2][0] = player;
		else
		{
			cout << "This fiel is already use,try again..." << endl;
			input();
		}
	}
	else if (a == 8)
	{
		if (matrix[2][1] == ' ')
			matrix[2][1] = player;
		else
		{
			cout << "This fiel is already use,try again..." << endl;
			input();
		}
	}
	else if (a == 9)
	{
		if (matrix[2][2] == ' ')
			matrix[2][2] = player;
		else
		{
			cout << "This fiel is already use,try again..." << endl;
			input();
		}
	}
}

char change_player()
{
	if (player == 'X')
	{
		player = 'O';
		cout << "It is the turn of the Player O" << endl;
	}
	else
	{
		player = 'X';
		cout << "It is the turn of the Player X" << endl;
	}

	return player;
}

char logic()
{
	// 00 01 02
	// 10 11 12
	// 20 21 22

	// IF X WIN
	if (matrix[0][0] == 'X' && matrix[0][1] == 'X' && matrix[0][2] == 'X')
		return 'X';
	if (matrix[1][0] == 'X' && matrix[1][1] == 'X' && matrix[1][2] == 'X')
		return 'X';
	if (matrix[2][0] == 'X' && matrix[2][1] == 'X' && matrix[2][2] == 'X')
		return 'X';
	if (matrix[0][0] == 'X' && matrix[1][0] == 'X' && matrix[2][0] == 'X')
		return 'X';
	if (matrix[0][1] == 'X' && matrix[1][1] == 'X' && matrix[2][1] == 'X')
		return 'X';
	if (matrix[0][2] == 'X' && matrix[1][2] == 'X' && matrix[2][2] == 'X')
		return 'X';
	if (matrix[0][0] == 'X' && matrix[1][1] == 'X' && matrix[2][2] == 'X')
		//IF O WIN
		if (matrix[0][0] == 'O' && matrix[1][1] == 'O' && matrix[2][2] == 'O')
			return 'O';
	if (matrix[0][0] == 'O' && matrix[1][0] == 'O' && matrix[2][0] == 'O')
		return 'O';
	if (matrix[0][2] == 'O' && matrix[1][2] == 'O' && matrix[2][2] == 'O')
		return 'O';
	if (matrix[1][0] == 'O' && matrix[1][1] == 'O' && matrix[1][2] == 'O')
		return 'O';
	if (matrix[2][0] == 'O' && matrix[2][1] == 'O' && matrix[2][2] == 'O')
		return 'O';
	if (matrix[0][0] == 'O' && matrix[1][1] == 'O' && matrix[2][2] == 'O')
		return 'O';
	if (matrix[0][2] == 'O' && matrix[1][1] == 'O' && matrix[2][0] == 'O')
		return 'O';
	return 'd';
}

int main()
{
	n = 0;
	draw();
	while (1)
	{
		n++;
		input();
		draw();
		if (logic() == 'X')
		{
			cout << "Player X wins" << endl;
			break;
		}
		else if (logic() == 'O')
		{
			cout << "Player O wins";
			break;
		}
		else if (logic() == 'd' && n == 9)
		{
			cout << "It is a draw" << endl;
			break;
		}

		change_player();
	}

	return 0;
}
