#include<iostream>
#include<windows.h>
using namespace std;
int main()
{
	int n;
	float average, M, s;//ƽ����������,MΪ���㷽����м������s=m/20;
	int  sum = 0;//20���������ܺ�
	int  positive = 0, negative = 0;//�����ĸ����������ĸ���
	int *ptr;
	ptr = new int[20];
	for (n = 0; n < 20; n++)
	{
		cin >> ptr[n];
	}
	//�����ĸ���
	for (int i = 0; i<20; i++)
	{
		if (ptr[i]< 0)
			negative = negative + 1;
	}
	//�����ĸ���
	positive = n - negative;
	//ƽ��ֵ
	for (int i = 0; i<20; i++)
	{
		sum = sum + ptr[i];
	}
	float total = int(sum);
	average = total / 20;
	//����ļ���
	for (int i = 0; i<19; i++)
	{
		M = (ptr[i] - average)*(ptr[i] - average);
	}
	s = M / 20;
	//��ֵ��С��������
	int t;
	for (int i = 0; i<19; i++)
	{
		for (int j = 0; j<19 - i; j++)
		{
			if (ptr[j]>ptr[j + 1])
			{
				t = ptr[j];
				ptr[j] = ptr[j + 1];
				ptr[j + 1] = t;
			}

		}
	}

	cout << "�����ĸ���Ϊ" << negative <<endl<< "�����ĸ���Ϊ" << positive << endl;
	cout << "ƽ��ֵΪ" << average << endl;
	cout << "�����ֵΪ" << s << endl;
	for (int i = 0; i < 20; i++)
		cout << ptr[i] << "    ";
	delete[]ptr;
	system("pause");
	return 0;
}