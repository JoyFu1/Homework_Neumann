#include<iostream>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#include<stdio.h>
#include<cstdlib>
#include<fstream>
#include"score.h"
using namespace std;

SD* readdatafromfile(int n)
{
	cout << "���ļ��ж�ȡѧ����Ϣ" << endl;
	ifstream fin;//�ļ�������
	fin.open("data.txt");
	if (fin.fail())//�����ȡʧ�� 
	{
		cout << "failed" << endl;
		exit(1);

	}
	cout << "ѧ����ĿΪ��" << n << endl;
	SD  stu[500];
	int i;
	for (i = 0; i < n; i++)
	{
		fin >> stu[i].number;
		fin >> stu[i].name;
		fin >> stu[i].dailyscore;
		fin >> stu[i].text;
		fin >> stu[i].finalscore;
		cout << "ѧ�ţ�" << stu[i].number << "������" << stu[i].name << "ƽʱ�ɼ���" << stu[i].dailyscore << "ʵ��ɼ�" << stu[i].text<< "��ĩ�ɼ�:  "<<stu[i].finalscore<< endl;
	}
	fin.close();
	return stu;
}
void calcuscore(SD stu[], int n)
{
	cout << "�����ܳɼ���" << endl;
	int i;
	for (i = 0; i < n; i++)
	{
		stu[i].generalscore = 0.2*stu[i].dailyscore + 0.2*stu[i].text+0.6*stu[i].finalscore;
		cout << "ѧ�ţ�" << stu[i].number << "������" << stu[i].name << "�ܳɼ���" << stu[i].generalscore << endl;
	}
}
void sortscore(SD stu[], int n)
{
	int i,j;
	SD swap;
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < (n - 1); j++)
		{
			if (stu[i].generalscore < stu[i + 1].generalscore)
			{
				swap = stu[j];
				stu[j] = stu[j + 1];
				stu[j + 1] = swap;
			}
		}
		stu[i].rank = i + 1;
	}
}
void printout(SD stu[], int n)
{
	cout << endl << "���������Ϣ" << endl;
	int i;
	for (i = 0; i < n; i++)
	{
		cout << "ѧ�ţ�" << stu[i].number << "ƽʱ�ɼ���" << stu[i].dailyscore <<"ʵ��ɼ�"<<stu[i].text<< "��ĩ���ԣ�" << stu[i].finalscore << "�ܳɼ���" << stu[i].generalscore << "������" << stu[i].rank << endl;

	}
}
void serch(SD stu[],int n)
{
	int k = 100;
	cout << "��������Ҫ��ѯ��ѧ�ţ� " << endl;
	cin >> stu[k].number;
	int i;
	for (i = 0; i < n; i++)
	{
		if (strcmp(stu[k].number ,stu[i].number) == 0)
		{
			k = i;
			break;
		}
	}
	cout << "����:  " << stu[k].name << "ƽʱ�ɼ�" << stu[k].dailyscore << "ʵ��ɼ�" << stu[k].text << "��ĩ����" << stu[k].finalscore << "�ܳɼ�" << stu[k].generalscore << "����" << stu[k].rank << endl;
}
void calculate(SD stu[], int n)
{
	int i;
	float sum=0;
	for (i=0; i < n; i++)
	{
		sum +=stu[i].generalscore;
	}
	sum = (float)(sum / n);
	cout << "ƽ���ܳɼ�Ϊ��" << sum<<endl;
	
	float p=0,s;
	for (i=0; i < n; i++)
	{
		p= (float)(p + (stu[i].generalscore - sum / n)*(stu[i].generalscore - sum /n));
	}
	s = (float)(p/ n);
	cout << "����Ϊ�� " << s<< endl;

}
void putintoExcel(SD stu[], int n)
{
	cout << endl << "����Ϣд��Excel�ĵ�" << endl;
	ofstream fout;
	fout.open("score.xls");
	fout << "ѧ��\t����\tƽʱ�ɼ�\t��ĩ�ɼ�\t�ܳɼ�\t����\t\n";
	int i;
	for (i = 0; i < n; i++)
	{
		fout << stu[i].number << "\t";
		fout << stu[i].name << "\t";
		fout << stu[i].dailyscore << "\t";
		fout << stu[i].finalscore << "\t";
		fout << stu[i].text << "\t";
		fout << stu[i].generalscore << "\t";
		fout << stu[i].rank << "\t";
		fout << "\n";
	}
	fout.close();
}
