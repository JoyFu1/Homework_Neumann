#include<iostream>
#include<math.h>
using namespace std;


int main()
{
	int *ptr;
	ptr = new int[20];
	for (int i = 0; i < 20; i++)
	{
		cin >> ptr[i];
		cout << endl;
	}
	int n = 0;//Ϊ�����ĸ���
	int s = 0;//Ϊ�����ĸ���
	int m = 0, l = 0;//mΪ��ֵ��lΪ����
					 /*���������������ĸ���*/
	for (int i = 0; i<20; i++)
	{
		if (ptr[i]>0)
		{
			n++;
		}
	}
	/*���������и����ĸ���*/
	for (int i = 0; i < 20; i++)
	{
		if (ptr[i] < 0)
		{
			s++;
		}
	}
	/*�����ֵ*/
	for (int i = 0; i < 20; i++)
	{
		m += ptr[i];
	}
	m = m / 20;
	/*���㷽��*/
	for (int i = 0; i < 20; i++)
	{
		l += (ptr[i] - m)*(ptr[i] - m);
	}
	l = sqrt(l / 20);
	cout << "�����������ĸ���Ϊ��" << n << "�����и����ĸ���Ϊ��" << s << endl;
	cout << "�����е�ƽ��ֵ��С" << m << "�����еķ����С" << l << endl;
	/*��˳��Ĵ�С*/
	for (int i = 0; i < 19; i++)
	{
		for (int j = 19; j >= i; j--)
		{
			if (ptr[j] < ptr[j - 1])
			{
				int t = ptr[j];
				ptr[j] = ptr[j - 1];
				ptr[j - 1] = t;
			}
		}
	}
	cout << "�����еĴ�С����Ϊ" << endl;
	for (int i = 0; i < 20; i++)
	{
		cout << ptr[i] << endl;
	}

	system("pause");
	delete ptr;
}