

#include<iostream>
#include<stdlib.h>
#include<Windows.h>
#include"score.h"
using namespace std;

void main()
{

	int N = 0;/*ѧ������*/
	SS  *pstu = NULL;
	cout << "��ʼ���ݶ�ȡ������������>>>)" << endl;
	
	cout << "��������Ҫ��ȡѧ��������" << endl;
	cin >> N;
	pstu = readDataFromFile( N);
	/*����ѧ���ܳɼ�*/
	calcuScore(pstu, N);
	/*����ѧ���ɼ�����*/
	sortScore(pstu, N);
	/*�����������ѧ����Ϣ*/
	printOut(pstu, N);
	/*д��Excel�ĵ�*/
	putintoExcel(pstu,N);
	system("pause");

}