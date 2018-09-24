#include<iostream>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#include<stdio.h>
#include<cstdlib>
#include<fstream>
#include"score.h"
using namespace std;

SS* readdatafromfile(int n)
{
	cout << "���ļ��ж�ȡѧ����Ϣ" << endl;
	ifstream in;//�ļ�������
	in.open("data.txt");
	if (in.fail())//�����ȡʧ�� 
	{
		cout << "failed" << endl;
		exit(1);

	}
	cout << "ѧ����ĿΪ��" << n << endl;
	SS  stu[500];
	int i;
	for (i = 0; i < n; i++)
	{
		in >> stu[i].number;
		in >> stu[i].name;
		in >> stu[i].dailyscore;
		in >> stu[i].text;
		in >> stu[i].finalscore;
		cout << "ѧ�ţ�" << stu[i].number << "������" << stu[i].name << "ƽʱ�ɼ���" << stu[i].dailyscore << "ʵ��ɼ�" << stu[i].text << "��ĩ�ɼ�:  " << stu[i].finalscore << endl;
	}
	in.close();
	return stu;
}
void calcuscore(SS stu[], int n)
{
	cout << "�����ܳɼ���" << endl;
	int i;
	for (i = 0; i < n; i++)
	{
		stu[i].generalscore = 0.2*stu[i].dailyscore + 0.2*stu[i].text + 0.6*stu[i].finalscore;
		cout << "ѧ�ţ�" << stu[i].number << "������" << stu[i].name << "�ܳɼ���" << stu[i].generalscore << endl;
	}
}
void sortscore(SS stu[], int n)
{
	int i, j;
	SS temp;
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < (n - 1); j++)
		{
			if (stu[i].generalscore < stu[i + 1].generalscore)
			{
				temp = stu[j];
				stu[j] = stu[j + 1];
				stu[j + 1] = temp
					;
			}
		}
		stu[i].rank = i + 1;
	}
}
void printout(SS stu[], int n)
{
	cout << endl << "���������Ϣ" << endl;
	int i;
	for (i = 0; i < n; i++)
	{
		cout << "ѧ�ţ�" << stu[i].number << "ƽʱ�ɼ���" << stu[i].dailyscore << "ʵ��ɼ�" << stu[i].text << "��ĩ���ԣ�" << stu[i].finalscore << "�ܳɼ���" << stu[i].generalscore << "������" << stu[i].rank << endl;

	}
}
void serch(SS stu[], int n)
{
	int k = 100;
	cout << "��������Ҫ��ѯ��ѧ�ţ� " << endl;
	cin >> stu[k].number;
	int i;
	for (i = 0; i < n; i++)
	{
		if (strcmp(stu[k].number, stu[i].number) == 0)
		{
			k = i;
			break;
		}
	}
	cout << "����:  " << stu[k].name << "ƽʱ�ɼ�" << stu[k].dailyscore << "ʵ��ɼ�" << stu[k].text << "��ĩ����" << stu[k].finalscore << "�ܳɼ�" << stu[k].generalscore << "����" << stu[k].rank << endl;
}
void calculate(SS stu[], int n)
{
	int i;
	float sum = 0;
	for (i = 0; i < n; i++)
	{
		sum += stu[i].generalscore;
	}
	sum = (float)(sum / n);
	cout << "ƽ���ܳɼ�Ϊ��" << sum << endl;

	float p = 0, s;
	for (i = 0; i < n; i++)
	{
		p = (float)(p + (stu[i].generalscore - sum / n)*(stu[i].generalscore - sum / n));
	}
	s = (float)(p / n);
	cout << "����Ϊ�� " << s << endl;

}
void putintoExcel(SS stu[], int n)
{
	cout << endl << "����Ϣд��Excel�ĵ�" << endl;
	ofstream out;
	out.open("score.xls");
	out << "ѧ��\t����\tƽʱ�ɼ�\t��ĩ�ɼ�\t�ܳɼ�\t����\t\n";
	int i;
	for (i = 0; i < n; i++)
	{
		out << stu[i].number << "\t";
		out << stu[i].name << "\t";
		out << stu[i].dailyscore << "\t";
		out << stu[i].finalscore << "\t";
		out << stu[i].text << "\t";
		out << stu[i].generalscore << "\t";
		out << stu[i].rank << "\t";
		out << "\n";
	}
	out.close();
}
