#include <iostream>
#include<windows.h>
using namespace std;
int main()
{
	int *p, a = 0, b = 0;
	//��new�����Ϊһ������20��������������䶯̬�ڴ�ռ�
	p = new int[20];
	cout << "������20������" << endl;
	//ͳ�����������������ĸ���
	for (int i = 0; i < 20; i++)
	{

		cin >> p[i];

		if (p[i] > 0)
			a++;
		if (p[i] < 0)
			b++;

	}

	cout << "����Ϊ" << a << endl;
	cout << "����Ϊ" << b << endl;
	//�����Ԫ�صľ�ֵ�ͷ���
	int ave, var, sum2, sum = 0, sum3 = 0, temp;
	for (int i = 0; i < 20; i++)
	{
		sum = sum + p[i];
	}
	ave = sum / 20;
	cout << "��ֵΪ" << ave << endl;
	for (int i = 0; i < 20; i++)
	{

		sum2 = (ave - p[i])*(ave - p[i]);
		sum3 = sum3 + sum2;
		var = sum3 / 2;
	}
	cout << "����Ϊ" << var << endl;
	//��С����˳���������������
	
	for (int i = 0; i < 19; i++)
	{
		for (int j = 0; j < 19 - i; j++)
		{
			if (p[j] > p[j + 1])
			{
				temp = p[j];
				p[j] = p[j + 1];
				p[j + 1] = temp;
			}
		}
	}
	cout << "���������" << endl;
	for (int i = 0; i < 20; i++)
	{
		cout << p[i] << " ";
	}

	//��delete������ͷŶ�̬�ڴ�ռ�
	delete[]p;
	system("pause");
	return 0;
}














