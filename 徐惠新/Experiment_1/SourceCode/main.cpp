#include<iostream>
#include<string>
#include"head.h"
using namespace std;
int main()
{
	int n;
	SS stu[6];
	cout << "ѧ���ɼ�����ϵͳ" << endl;
	cout << "ѧ��������";
	cin >> n;
	readDate(stu, n);
	calcuScore(stu, n);
	sortScore(stu, n);
	printOut(stu, n);
	calculate(stu, n);
	search(stu, n); 
	putintoExcel(stu, n);
	system("pause");
	return 0;
}
