#include <iostream>
#include <conio.h>
#include <stdlib.h>//biblioteca pentru functia keyboard
#include <windows.h>//biblioteca pentru funtii de afisare,grafica
using namespace std;
struct joc
{
	int x;
	int y;
};	//structura joc
enum Directii
{
	STOP, RIGHT, LEFT, DOWN, UP
};	//directii
joc sarpe;
joc coada[200];
joc punct;
bool gameover;	//variabila de tip adevarat sau fals
const int latime = 45;
const int inaltime = 16;
int ccoada = 0;
Directii dir;
int score;
int point;
void setup()	//subprogram Setup
{
	gameover = false;
	sarpe.x = 5;
	sarpe.y = 5;
	punct.x = rand() % latime;
	punct.y = rand() % inaltime;
	dir = STOP;
	score = 0;
	point = 0;

}

void afisare()	//subprogram de afisare
{
	system("color 2");	//functie pentru culoare de fundal si text
	system("cls");	//functie de reimprospatare a imaginii
	for (int i = 0; i < latime; i++)
		cout << "#";
	cout << endl;
	for (int i = 0; i < inaltime; i++)
	{
		for (int j = 0; j < latime; j++)
		{
			if (j == 0 || j == latime - 1)
				cout << "#";
			else
			if (i == sarpe.y && j == sarpe.x) cout << "S";
			else
			if (i == punct.y && j == punct.x) cout << "*";
			else
			{
				bool ecoada = false;
				for (int k = 0; k <= ccoada; k++)
				{
					if (coada[k].x == j && coada[k].y == i)
					{
						ecoada = true;
						break;
					}
				}

				if (!ecoada) cout << " ";
				else cout << "O";
			}
		}

		cout << endl;
	}

	for (int i = 0; i < latime; i++)
		cout << "#";
	cout << endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4);	//funcite de colorare a tetxtului folosit
	cout << "POINTS:" << point << "             W           SCORE:" << score;
	cout << endl;
	cout << "                   A + D ";
	cout << endl;
	cout << "                     S   ";
	cout << endl;
	cout << endl;
	cout << "STATUS:PLAYING...";
}

void citire()	//subprogram de citire,introducere date de la tastatura
{
	if (_kbhit())	//functie keyboard,prin care sunt introduse data
		switch (_getch())	//cat timp nu se sfarseste programu
	{
		case 'a': dir = LEFT;
		break;
		case 'd': dir = RIGHT;
		break;
		case 'w': dir = UP;
		break;
		case 's': dir = DOWN;
		break;

	}
}

void logica()	//subprogram de logica
{
	switch (dir)
	{
		case LEFT:
			sarpe.x--;	//scade la stanga
			break;
		case RIGHT:
			sarpe.x++;	//creste in dreapta
			break;
		case DOWN:
			sarpe.y++;	//creste in jos
			break;
		case UP:
			sarpe.y--;	//scade in sus
			break;
	}

	int xprev, yprev, xprev2, yprev2;	//interschimbare de variabile pentru coada
	xprev = sarpe.x;
	yprev = sarpe.y;
	sarpe.y = yprev;
	for (int i = 0; i <= ccoada; i++)
	{
		xprev2 = coada[i].x;
		yprev2 = coada[i].y;
		coada[i].x = xprev;
		coada[i].y = yprev;
		xprev = xprev2;
		yprev = yprev2;
	}

	if (sarpe.x == punct.x && sarpe.y == punct.y)
	{
		score = score + 10;
		point++;
		ccoada++;
		punct.x = rand() % (latime - 3) + 1;	//punctul va primi dupa ce este mancar o valoare random din caseta
		punct.y = rand() % (inaltime - 3) + 1;
	}

	if (sarpe.x == 0) gameover = true;
	if (sarpe.x == latime) gameover = true;
	if (sarpe.y == 0) gameover = true;
	if (sarpe.y == inaltime) gameover = true;
	for (int i = 1; i <= ccoada; i++)
		if (sarpe.x == coada[i].x && sarpe.y == coada[i].y)
		{
			gameover = true;
			break;
		}
}

int main()
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 1);
	cout << "***-----------------------------***SNAKE GAME***-----------------------------***";
	cout << endl;
	cout << endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 2);
	cout << "  NEW GAME---------------------------PRESS 1";
	cout << endl;
	cout << endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 3);
	cout << "  HIGH SCORE-------------------------PRESS 2";
	cout << endl;
	cout << endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4);
	cout << "  EXIT-------------------------------PRESS 3";
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 1);
	cout << "***--------------------------------------------------------------------------***";
	cout << endl;
	cout << endl;
	cout << "  YOUR CHOISE....";
	int alegere;
	cin >> alegere;
	switch (alegere)
	{
		case 1:
			{
				setup();
				while (!gameover)
				{
					citire();
					logica();
					afisare();
					Sleep(30);
				}	//functia sleep incetineste jouc,rata de refresh a acestuia
				if (gameover) cout << "          GAME OVER        ";
				break;
			}

		case 2:
			{
				cout << "Your High Score is: " << score;
				break;
			}

		case 3:
			{
				cout << "Exit";
				break;
			}
	}

	return 0;
}
