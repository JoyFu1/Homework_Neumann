#include<iostream>
using namespace std;

int main()
{
	int n;
	int * ptr = new int[20];      //new����������ڴ�
	int i, j, swap, a = 0, b = 0;
	cout << "������һ��������20��������" << endl;
	cin >> n;
	cout << "������" << n << "������" << endl;
	for (i = 0; i < n; i++)            //���������ж�Ϊ�������Ǹ���
	{
		cin >> ptr[i];
		if (ptr[i] >0)
		{
			a++;
			continue;
		}
		if (ptr[i] < 0)
		{
			b++;
			continue;
		}
	}
	cout << "������" << a << "��," << "������" << b << "��" << endl;

	float c, s2, s = 0;
	float sum = 0;
	for (i = 0; i < n; i++)    //����ƽ����
		sum = sum + ptr[i];
	c = sum / n;
	for (i = 0; i < n; i++)       //���㷽��
		s = s + (ptr[i] - c)*(ptr[i] - c);
	s2 = s / n;
	cout << "ƽ������" << c << "  ���" << s2 << endl;


	for (i = 0; i < n; i++)      //����
		for (j = i + 1; j < n; j++)
			if (ptr[i]>ptr[j])
			{
		swap = ptr[i];
		ptr[i] = ptr[j];
		ptr[j] = swap;
			}
	cout << "��С��������Ϊ��" << endl;
	for (i = 0; i < n; i++)
		cout << ptr[i] << " ";
	cout << endl;


	delete[]ptr;    //�ͷŶ�̬�ڴ�ռ�
	system("pause");
	return 0;
}