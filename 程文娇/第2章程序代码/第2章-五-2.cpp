#include<iostream>
#include<windows.h>
using namespace std;
#define pi 3.14

int main()
{
	double r = 0;
	double area = 0, length = 0;
	cout << "����뾶��" << endl;
	cin >> r;
	area = pi * r*r;
	length = 2 * pi*r;
	cout << "�����" << area << endl;
	cout << "�ܳ���" << length << endl;
	system("pause");
	return 0;
}
