#include<iostream>
using namespace std;
#include"student.h"
const int N = 10;
void menu();
void outputstu(student *array);
void inputstu(student *array);
int searchstu(student *array, char *n);
int counts= 0;//���ڼ���
int main()
{
	student array[N];
	int choice;//����ѡ��
	do
	{
		menu();
		cout << "please input your choice:";
		cin >> choice;
		if (choice>=0&&choice<=3)
			switch (choice)
		{

			case 1:inputstu(array); break;
			case 2:cout << "Input the name searched" << endl;
				char n[20];
				cin >> n;
				int i;
				i = searchstu(array, n);
				if (i == N)
					cout << "���޴��ˣ�\n";
				else
					array[i].display();
				break;
			case 3:outputstu(array);break;
			default:break;
		}
	} while (choice);

		return 0;
}
void menu()
{
	cout << "**********1.¼����Ϣ**********" << endl;
	cout << "**********2.��ѯ��Ϣ**********" << endl;
	cout << "**********3.�����Ϣ**********" << endl;
	cout << "**********0.��    ��**********" << endl;
}
void outputstu(student *array)//�����������Ԫ��
{
	cout << "ѧ��������=" << counts << endl;
	for (int i = 0; i < counts; i++)
		array[i].display();
}
int searchstu(student *array, char *n)//������ѯ
{
	
	int i;
	int j = N;
	for (i = 0; i < counts; i++)
		if (strcmp(array[i].Getname(), n) == 0)
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
		cout << "����������(Y or N)" << endl;
		cin >> ch;
	} while (ch == 'Y');
}