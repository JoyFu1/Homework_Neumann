#include<iostream>
using namespace std;
#include "student.h"
const int N = 10;
void munu();
void OutputStu( Student *array );
void IntputStu( Student *array );
int SearchStu(Student *array, char *na);
int cout = 0;
int main()
{
	Student array[N];
	int choice;
	do
	{
		munu();
			cout<<"Please input your choice : ";
			cin >> choice;
		if (choice>=0 && choice<=3)
			switch (choice)
		{
			case 1:IntputStu(array);break;
			case 2:cout << "Input the name searched:" << endl;
				char na[20];
				cin >> na;
				int i;
				i = SearchStu(array, na);
				if (i == N)
					cout << "���޴���!\n";
				else
					array[i].Display();break;
			case 3:OutputStu(array);break;
			default:break;
		}
	} while (choice);
	return 0;
}

void menu()
{
	cout<< "**********1.¼����Ϣ**********" << endl;
	cout << "**********2.��ѯ��Ϣ**********" << endl;
	cout << "**********3.�����Ϣ**********" << endl;
	cout << "**********0.��    ��**********" << endl;
}
void OutputStd(Student *array)
{
	cout << "ѧ��������=" << count << endl;
	for (int i = 0; i < count; i++)
		array[i].Display();
}
int SearchStu(Student *array, char *na)
{
	int i, j = N;
	for (i = 0; i < count; i++)
		if (strcmp(array[i].GetName(), na) == 0)
			j = i;
	return j;
}
void IntputStu(Student *array)
{
	char ch;
	do
	{
		array[count].Input();
		count++;
		cout << "����������?(Y or N)" << endl;
		cin >> ch;
	} while (ch == 'Y')
}
