#include<iostream>

using namespace std;

#include<windows.h>

#define pi 3.14
void cirlce(double r)
{
	double s, l;
	s = pi * r*r;
	l = 2 * pi*r;
	cout << "Բ�������" << s << endl;
	cout << "Բ���ܳ�" << l << endl;

}

int main()
{
	int r;
	cout << "������Բ�İ뾶";
	cout << endl;
	cin >>  r;
	cirlce(r);
	system("pause");
	return 0;
}