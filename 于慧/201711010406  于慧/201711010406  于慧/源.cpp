#include "STUDENT.h"
#include <iostream>
using namespace std;

const int N = 10;
/********************����**************************/
void menu(); //�˵�����
void Outputstu(Student *array);  //����������麯��
void Inputstu(Student *array);    //����������麯��
int Searchstu(Student *array, char *na);   //��������ѯ
/**************************************************/

int counts = 0;

int main()
{
	Student array[N];   //����ѧ������
	int choice;         //����˵��е�ѡ��
	do
	{
		menu();
		cout << "Please input your choice :";
		cin >> choice;            //����ѡ��
		if (choice >= 0 && choice <= 3)
			switch (choice)
			{
			case 1:Inputstu(array); break;        //¼����Ϣ
			case 2:cout << "Input the name searched" << endl;   //��ѯ��Ϣ
				char na[20];
				cin >> na;
				int i;
				i = Searchstu(array, na);
				if (i == N)
					cout << "�������ˣ�" << endl;
				else
					array[i].Display();
				break;
			case 3:Outputstu(array); break;   //�����������Ԫ��
			default:
				break;
			}
	} while (choice);
	system("PAUSE"); 

	return 0;
}

void menu()  //����˵�����
{
	cout << "*********1.¼����Ϣ*********" << endl;
	cout << "*********2.��ѯ��Ϣ*********" << endl;
	cout << "*********3.�����Ϣ*********" << endl;
	cout << "*********0.��    ��*********" << endl;
}
void Outputstu(Student *array) //��������������麯��
{
	cout << "ѧ��������" << counts << endl;
	for (int i = 0; i < counts; i++)
	{
		array[i].Display();
	}
}

int Searchstu(Student *array, char *na)       //��������ѯ����
{
	int i, j = N;
	for (i = 0; i < counts; i++)
	{
		if (strcmp(array[i].GetName(), na) == 0)
			j = i;
	}
	return j;
}

void Inputstu(Student *array) //�����������Ԫ��
{
	char ch;
	do
	{
		array[counts].Input();          //��������ĳ�Ա�������һ��ѧ���������������
		counts++;
		cout << "���������𣿣�Y or N��" << endl;
		cin >> ch;
	} while (ch == 'Y');
}