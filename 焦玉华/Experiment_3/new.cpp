#include<iostream>

using namespace std;

int main()
{
	int *ptr;
	ptr = new int;
	ptr = new int[20];
	int i,a = 0, b = 0;
	for (i = 0; i < 20; i++)
	{
		cin >> ptr[i];
		if (ptr[i]>0)  a++;
		if (ptr[i] < 0)  b++;
	}
	cout << "�����ĸ���Ϊ�� " << a << endl;
	cout << "�����ĸ���Ϊ�� " << b << endl;
	float sum = 0;
	float avr = 0;
	for (i = 0; i < 20; i++)
	{
		sum += ptr[i];
	}
	avr = sum / 20;
	cout << "����Ԫ�صľ�ֵΪ�� " << avr<<endl;
	float su = 0, fan = 0;
	for (i = 0; i < 20; i++)
	{
		su += (ptr[i] - avr)*(ptr[i] - avr);
	}
	fan = su / 20;
	cout << "����Ԫ�صķ���Ϊ�� " << fan << endl;
	int temp;
	for (i = 0; i < 19; i++)
	{
		for (int j = 0; j < 19 - i; j++)
		{
			if (ptr[j]>ptr[j + 1])
			{
				temp = ptr[j];
				ptr[j] = ptr[j + 1];
				ptr[j + 1] = temp;
			}
		}
	}
	cout << "�����С�����˳��Ϊ��" << endl;
	for (i = 0; i < 20; i++)
	{
		cout << ptr[i] << endl;
	}
	delete []ptr;
	system("pause");
	return 0;
}