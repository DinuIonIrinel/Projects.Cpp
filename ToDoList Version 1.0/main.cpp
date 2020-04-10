#include <iostream>
#include <windows.h>
#include <fstream>
#include <string.h>
using namespace std;
struct todolist
{
	char task[20];
}

list[30];
int sizelist = 20;
void draw()
{
	system("color 1a");
	cout << "1.------------------------------- Show your Tasks----------------------------" << "\n" << "\n";
	cout << "2.--------------------------------Add a new Task-----------------------------" << "\n" << "\n";
	cout << "3.---------------------------------Delete a Task-----------------------------" << "\n" << "\n";
	cout << "4.------------------------------- Close the program--------------------------" << "\n" << "\n";
}

void show_task()
{
	ifstream f("File.txt", ios:: in);
	for (int i = 1; i <= sizelist; i++)
	{
		f >> list[i].task;
		cout << list[i].task << endl;
	}
}

void new_task()
{
	ofstream f("File.txt", ios::app);
	for (int i = 1; i <= 1; i++)
	{
		cout << "Enter your new task here... :";
		cin >> list[i].task;
		f << list[i].task << endl;
	}

	f.close();
}

void delete_task()
{
	ifstream f("File.txt", ios:: in);
	for (int i = 1; i <= sizelist; i++)
		f >> list[i].task;
	char task_input[20];
	cout << "Enter the task that you want to delete:";
	cin >> task_input;
	f.close();
	for (int i = 0; i <= sizelist; i++)
		while (strcmp(list[i].task, task_input) == 0)
		{
			{
				ofstream f("File.txt", ios::out);
				f << list[i - 1].task << endl;
				f << list[i + 1].task << endl;
				if (i == 0)
					f << list[i + 1].task << endl;
				if (i == sizelist)
					f << list[i - 1].task;
				break;
			}
		}

	f.close();
}

int main()
{
	bool gameover = true;
	while (gameover != false)
	{
		draw();
		int choice;
		cout << "Enter your choice....";
		cin >> choice;
		switch (choice)
		{
			case 1:
				{
					show_task();
					break;
				}

			case 2:
				{
					new_task();
					break;
				}

			case 3:
				{
					delete_task();
					break;
				}

			case 4:
				{
					break;

				}

			default:
				{
					cout << "Something was wrong!";
					break;
				}
		}
	}
}
