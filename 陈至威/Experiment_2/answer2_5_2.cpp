#include "iostream"
#include "windows.h"
#include "iomanip"

using namespace std;

double ��=3.1415926;
double ZC(double a)
{
	double c;
	c = a * 2 * ��;
	return c;
}
double MJ(double b)
{
	double s;
	s = b *b * ��;
	return s;
}
int main()
{
	double r;
	double C, S;
	cout << "������뾶r��ֵ��" << endl;
	cin >> r;
	C = ZC(r);
	S = MJ(r);
	cout << setprecision(8) << "C=" << C << endl;
	cout << setprecision(8) << "S=" << S << endl;
	system("pause");
	return 0;
}