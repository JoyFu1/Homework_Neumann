#include <iostream>
using namespace std;
int main()
{
	int *p, i,sum=0,ave, a = 0,b = 0;
	p = new int[20];
	//�������ֲ����������������������ĸ�����
	for (i=0;i<20;i++)
	{
		cin >> p[i];
		if (p[i]<0)
			a++;
		if (p[i] > 0)
			b++;
	}
	//����������������ĸ���
	cout << "������:" << b << endl;
	cout << "������:" << a << endl;


	//������ľ�ֵ
	for (i = 0; i < 20; i++)
		sum += p[i];
	ave = sum / 20;
	cout << "����ľ�ֵΪ:" << ave << endl;

	//������ķ���
	double s = 0.00;
	for (i = 0; i < 20; i++)
	{
		s += (p[i] - ave)*(p[i] - ave) / 20;
	}
	cout << "����ķ���Ϊ��" << s << endl;

	//���մ�С����˳�������������
	for (int j = 0; j < 20; j++)
	{
		for (i = 0; i < 19 - j;i++)
		{ 
			int temp;
			if (p[i]>p[i+1])
			{
				temp = p[i];
				p[i] = p[i + 1];
				p[i + 1] = temp;
			}
		}
	}
	for (i=0;i<20;i++)
	{
		cout << p[i] << " ";
	}



	delete[]p;


	system("pause");
	return 0;
}