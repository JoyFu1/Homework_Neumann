#include <iostream>
using namespace std;
const int N = 10;
#include "��ͷ.h"
void menu();
void inputstu(student *array);
void outputstu(student *array);
int searchstu(student *array, char *na);
int counts = 0;
int main()
{
	student array[N];
	int choice;
	do
	{
		menu();
		cout << "PLEASE INPUT YOUR CHOICE:";
		cin >> choice;
		if (choice >= 0 && choice <= 3)
			switch (choice)
		{
			case 1:inputstu(array); break;
			case 2:cout << "input the name searched" << endl;
				char na[20];
				cin >> na;
				int i;
				i = searchstu(array, na);
				if (i == N)
					cout << "���޴���!\n";
				else
					array[i].display();
				break;
			case 3:outputstu(array);
				break;
			default:break; 
		}
	} while (choice);
	return 0;

		}
void menu()
{
	cout << "**********1.¼����Ϣ***********" << endl;
	cout << "**********2.��ѯ��Ϣ***********" << endl;
	cout << "**********3.�����Ϣ***********" << endl;
	cout << "**********0.��    ��***********" << endl;
}
void outputstu(student *array)
{ 

	cout << "ѧ������" << counts << endl;
	for (int i = 0; i < counts; i++)
	{
		array[i].display();
	}
    
}
int searchstu(student *array, char *na)
{
	int i, j = N;
	for (i = 0; i < counts; i++)
	if (strcmp( array[i].getname(), na) == 0)
		j = i;
	return j;
}
void inputstu(student *array)
{
	char ch;
	do
	{
		array[counts].input();
		counts++;
		cout << "����������?(y or n)" << endl;
		cin >> ch;
	} while (ch=='y');

}