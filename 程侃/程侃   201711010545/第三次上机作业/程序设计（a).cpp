#include <iostream>
#include <Windows.h>
using namespace std;
int main()
{
	int *p;
	p = new int[20];
	int i,j;
	int  a = 0, b = 0;
	int sum=0;
	int d=0;
	int t;
	float aver, var;
	for (i = 0; i < 20; i++) 
	{
		cin >> p[i];
		if (p[i] < 0)
			a++;
		else if (p[i] > 0)
			b++;
		sum += p[i];	
	}
	aver = sum / 20;
	for (i = 0; i < 20; i++)
	{
		d += (p[i] - aver)*(p[i] - aver);
	}
	var = d / 20;
	for (j = 0; j < 19;j++)
	{
		for (i = 0; i < 19 - j; i++)
		if (p[i]>p[i + 1])
		{
			t = p[i];
			p[i] = p[i + 1];
			p[i + 1] = t;
	    }
	}
	
	cout << "��������" << a << endl;
	cout << "��������" << b << endl;
	cout << "��ֵΪ" << aver << endl;
	cout << "����Ϊ" << var << endl;

	for (i = 0; i < 20;i++)
    	cout << p[i] << endl;
	delete[]p;
	system("pause");
	return 0;
}