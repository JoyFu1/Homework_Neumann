#include <iostream>
using namespace std;
int main()
{
	int *p, a = 0, b = 0,sum=0,c=0,s=0,d=0;
	p = new int[20];
	for (int i = 0; i < 20; i++)
	{
		cin >> p[i];
		if (p[i] > 0)
		{
			a++;
		}
		if (p[i] < 0)
		{
			b++;
		}
		sum += p[i];
	}
	c = sum / 20;
	for (int i = 0; i < 20; i++)
	{
		s += (p[i] - c)*(p[i] - c);
	}
	d = s / 20;
	cout << "������" << a << endl;
	cout << "������" << b << endl;
	cout << "ƽ����Ϊ" << c << endl;
	cout << "����Ϊ" << d << endl;
	delete[]p;
	system("pause");

}