#include "iostream"

using namespace std;

int main()
{
	int *p, i, a = 0, b = 0,m,n, t;
	double sum = 0, c, d, e = 0;
	p = new int[20];
cout << "����20��������";
	for (i = 0; i < 20; i++)
	{
		
		cin >> p[i];
		if (p[i] > 0)
			a++;
		if (p[i] < 0)
			b++;
	}
	cout << "�����ĸ���Ϊ��" << a << endl;
	cout << "�����ĸ���Ϊ��" << b << endl;
	cout << "��С��������";
	for (n = 0; n < 19; n++)
		for (m = 0; m < 19 - n; m++)
			if (p[m] > p[m + 1])
			{
				t = p[m];
				p[m] = p[m + 1];
				p[m + 1] = t;
			}
	for (m = 0; m < 20; m++)
		cout << p[m] << " ";
	    cout << endl;
	getchar();
	for (i = 0; i < 20; i++)
	{
		sum += p[i];
		c = sum / 20;
		e += (c - p[i])*(c - p[i]);
		d = e / 20;
	}
	cout << "��ֵΪ��" << c << endl;
	cout << "����Ϊ��" << d << endl;
	delete[]p;
	system("pause");
	return 0;
}