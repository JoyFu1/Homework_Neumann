#include<iostream>
#include<Windows.h>
using namespace std;
#include "student.h"
const int N = 10;
void menu();
void Outputstu(student *array);
void Inputstu(student *array);
int Searchstu(student *array, char *na);
int counted = 0;
int main()
{
	student array[N];
	int choice;
	do
	{
		menu();
		cout << "Please input your choice:";
		cin >> choice;
		if (choice >= 0 && choice <= 3)
			switch (choice)
			{
			case 1:Inputstu(array); break;
			case 2:cout << "Input the name searched" << endl;
				char na[20];
				cin >> na;
				int i;
				i = Searchstu(array, na);
				if (i == N)
					cout << "Searching fail!" << endl;
				else
					array[i].Display();
				break;
			case 3:Outputstu(array); break;
			default:break;
			}
	}while (choice);
	system("pause");
	return 0;
}

void menu()
{
	cout << "*****************1.¼����Ϣ*****************" << endl;;
	cout << "*****************2.��ѯ��Ϣ*****************" << endl;;
	cout << "*****************3.�����Ϣ*****************" << endl;;
	cout << "*****************0.��    ��*****************" << endl;;
}

void Outputstu(student *array)
{
	cout<<"ѧ��������="<<counted<< endl;
	for (int i = 0; i < counted; i++)
		array[i].Display();
}

int Searchstu(student *array, char *na)
{
	int i, j = N;
	for (i = 0; i < counted; i++)
		if (strcmp(array[i].Getname(), na) == 0)
			j = i;
	return j;
}

void Inputstu(student *array)
{
	char ch;
	do
	{
		array[counted].Input();
		counted++;
		cout << "����������(Y or N)" << endl;
		cin >> ch;
	} while (ch=='Y');
}