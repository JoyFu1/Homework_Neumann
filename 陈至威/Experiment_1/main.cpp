#include<iostream>
#include<string>
#include"head.h"
using namespace std;
int main()
{
	
	int n=6;
	CJGLXT stu[6];
	cout << "\t\t********************************************************************\t\t" << endl;
	cout << "\t\t  �� �� �� �  �� ӭ �� �� ѧ �� �� �� �� �� ϵ ͳ  ���� �� �� ��  \t\t" << endl;
	cout << "\t\t                        ChenZhiwei    20180924                         \t\t"<< endl;
	cout << "\t\t********************************************************************\t\t" << endl;
	cout << "\tѧ��������6" << endl;
	cout << "\t\t����������������ѧ��ƽʱ��ʵ�顢��ĩ�ɼ�����������������\t\t" << endl;
	readDate(stu,n);
	cout << "\t\t����������������ѧ���ܳɼ�����������������\t\t" << endl;
	calcuScore(stu,n);
	cout << "\t\t����������������ѧ���ܳɼ���������������������\t\t" << endl;
	sortScore(stu,n);
	printOut(stu,n);
	cout << "\t\t����������������ѧ���ܳɼ���ƽ��ֵ�������������������\t\t" << endl;
	calculate(stu,n);
	cout << "\t\t������������������ѯĳѧ���ĳɼ�����������������������\t\t" << endl;  //���ܷ���鿴ĳ�ض�ѧ���ɼ�
	search(stu,n);
	system("pause");  //��ͣ~���Է���鿴�������н��
	return 0;
}