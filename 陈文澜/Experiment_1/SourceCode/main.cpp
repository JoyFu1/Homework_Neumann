#include<iostream>
#include<stdlib.h>
#include<Windows.h>
#include"score.h"
using namespace std;
void main()
{
	int n;
	int i;
	SS *stu = NULL;
	cout << "�������ȡѧ���ĸ���" << endl;
	cin >> n;
	stu = readdatafromfile(n);
	calcuscore(stu, n);
	sortscore(stu, n);
	printout(stu, n);
	serch(stu, n);
	calculate(stu, n);
	putintoExcel(stu, n);
	system("pause");
}
