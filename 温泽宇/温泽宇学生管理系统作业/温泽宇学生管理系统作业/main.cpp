#include<iostream>
#include"example3_26_student.h"
#include<string>
using namespace std;
const int N = 10;
int cnt = 0;                                        //֮ǰ��count�������������ʾ��count������ȷ����Ϊnamespace std�������ȫ�ֱ���count��
void menu();
void OutputStu(Student *array);
void InputStu(Student *array);
int SearchStu(Student *array, char *na);
int main()
{
	Student array[N];//����ѧ������
	int choice;//����ѡ��
	do
	{
		menu();
		cout << "please input your choice:";
		cin >> choice;
		if (choice >= 0 && choice <= 3)
		{
			switch (choice)
			{
			case 1:InputStu(array); break;
			case 2:cout << "Input the name searched" << endl;
				char na[20];
				cin >> na;
				int i;
				i = SearchStu(array, na);
				if (i == N)
				{
					cout << "���޴��ˣ�\n";
				}
				else
				{
					array[i].Display();
				}
				break;
			case 3:OutputStu(array); break;
			default:break;
			}
		}
	} while (choice);
	system("pause");
	return 0;
}
void menu()                                                                   //����˵�����
{
	cout << "*******************1.¼����Ϣ*********************" << endl;
	cout << "*******************2.��ѯ��Ϣ*********************" << endl;
	cout << "*******************3.�����Ϣ*********************" << endl;
	cout << "*******************0.��    ��*********************" << endl;
}
void InputStu(Student *array)
{
	char ch;
	do
	{
		array[cnt].Input();//���ó�Ա�������һ��ѧ���������������
		cnt++;//�����count��ѧ���������м���
		cout << "���������𣿣�Y or N��" << endl;
		cin >> ch;

	} while (ch == 'Y');
}
void OutputStu(Student *array)               //                              //�����������Ԫ��
{
	cout << "ѧ��������=" <<cnt<< endl;
	for (int i = 0; i < cnt; i++)
	{
		array[i].Display();
	}

}
int SearchStu(Student *array, char *na)               //                          //��������ѯ
{
	int i, j = N;
	for(i = 0; i < cnt; i++)
	{
		if (strcmp(array[i].GetName(), na) == 0)
		{
			j = i;
		}
	}
	return j;
}
