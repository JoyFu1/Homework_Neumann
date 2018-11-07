#include "3-26-student.h"

#include <iostream>

using namespace std;

const int N = 10;
void menu();
void Outputstu(Student *array);
void Inputstu(Student *array);
int Searchstu(Student *array, char *na);
int counts = 0;
int main()
{
	Student array[N];
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
					cout << "���޴��ˣ�\n";
				else
					array[i].Display();
				break;
			case 3:Outputstu(array); break;
			default:break;
		}
	} while (choice);
}
void menu()
{
	cout << "********1.¼����Ϣ********" << endl;
	cout << "********2.��ѯ��Ϣ********" << endl;
	cout << "********3.�����Ϣ********" << endl;
	cout << "********0.��    ��********" << endl;
}
void Outputstu(Student *array)
{
	cout << "ѧ��������=" << counts << endl;
	for (int i = 0; i < counts; i++)
		array[i].Display();
}
int Searchstu(Student *array, char *na)
{
	int i, j = N;
	for (i = 0; i < counts; i++)
	if (strcmp(array[i].Getname(), na) == 0)
		j = i;
	return j;
}
void Inputstu(Student *array)
{
	char ch;
	do
	{
		array[counts].Input();
		counts++;
		cout << "���������𣿣�T or N)" << endl;
		cin >> ch;
	} while (ch == 'Y');
}