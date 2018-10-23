#include<Windows.h>
#include"head.h"
#include<fstream>
#include<stdlib.h>
#include<string>
#include<math.h>
#include<iostream>
using namespace std;
void readDate(SS stu[], int n)  //���ı��ĵ��ж�ȡ����
{
	int i;
	ifstream in("D:\\Program Files\\data.txt");
	if (!in)
	{
		cout << "Error opening file" << endl;
		exit(1);
	}
	for (i = 0; i < n; i++)
	{
		in >> stu[i].number;
		in >> stu[i].name;
		in >> stu[i].dailyScore;
		in >> stu[i].experimentScore;
		in >> stu[i].finalScore;
		cout << "ѧ��:" << stu[i].number << "  ����:" << stu[i].name << "  ƽʱ�ɼ���" << stu[i].dailyScore << "  ʵ��ɼ�:" << stu[i].experimentScore << "  ��ĩ�ɼ�:" << stu[i].finalScore << endl;
	}
	in.close();
}
void calcuScore(SS stu[], int n)    //����ѧ�����ܳɼ�
{
	int i;
	for (i = 0; i < n; i++)
	{
		stu[i].generalScore = 0.2*stu[i].dailyScore + 0.2*stu[i].experimentScore + 0.6*stu[i].finalScore;
		cout << "ѧ��:" << stu[i].number << "  ����:" << stu[i].name << "  �ܳɼ�:" << stu[i].generalScore << endl;
	}
}
void sortScore(SS stu[], int n)    //����ѧ�����ܳɼ�����
{
	int i, j;
	SS t;
	for (i = 0; i < n; i++)
	{
		for (j = i + 1; j < n; j++)
		{
			if (stu[i].generalScore < stu[j].generalScore)
			{
				t = stu[i];
				stu[i] = stu[j];
				stu[j] = t;
			}
		}
		stu[i].place = i+1;
	}
}
void printOut(SS stu[], int n)     //���ѧ���ܳɼ�������
{
	int i;
	cout << "�ɼ���������:" << endl;
	for (i = 0; i < n; i++)
		cout << "ѧ��:" << stu[i].number << " ����:" << stu[i].name << " ƽʱ�ɼ���" << stu[i].dailyScore << " ʵ��ɼ���" << stu[i].experimentScore << " ��ĩ�ɼ�:" << stu[i].finalScore << " �ܳɼ�:" << stu[i].generalScore << " ����" << stu[i].place << endl;

}
void putintoExcel(SS stu[], int n)       //�����excel���
{
	cout << "��Ϣд��Excel���" << endl;
	ofstream out;
	out.open("D:\\score.xls");
	out << "ѧ��\t����\tƽʱ�ɼ�\tʵ��ɼ�\t��ĩ�ɼ�\t�ۺϳɼ�\t����\t\n";
	int i;
	for (i = 0; i < n; i++)
	{
		out << stu[i].number << "\t";
		out << stu[i].name << "\t";
		out << stu[i].dailyScore << "\t";
		out << stu[i].experimentScore<< "\t";
		out << stu[i].finalScore << "\t";
		out << stu[i].generalScore<< "\t";
		out << stu[i].place<< "\t";
		out << "\n";
	}
	out.close();
}
void search(SS stu[], int n)       //����ѧ�Ų�ѯ��Ӧѧ���ɼ�
{
	int i;
	int k = 10;
	cout << "������Ҫ��ѯ��ѧ�ţ�" << endl;
	cin >> stu[k].number;
	for (i = 0; i < n; i++)
	{
		if (strcmp(stu[k].number,stu[i].number) == 0)
		{
			k = i;
			break;
		}
	}
	cout << "������" << stu[k].name << "  ƽʱ�ɼ���" << stu[k].dailyScore << "  ʵ��ɼ���" << stu[k].experimentScore << "  ��ĩ�ɼ���" << stu[k].finalScore << "  �ܳɼ���" << stu[k].generalScore << "  ������" << stu[k].place << endl;
}
void calculate(SS stu[], int n)      //�����ܳɼ���ƽ��ֵ������
{
	int i;
	float sum = 0,average,s2=0;
	for (i = 0; i < n; i++)
		sum= sum + stu[i].generalScore;
	average = (float)(sum / n);
	cout << "ƽ���ܳɼ�Ϊ" << average<< endl;
	for (i = 0; i < n; i++)
		s2 = s2 + pow((stu[i].generalScore - average), 2);
	s2 = s2 / n;
	cout << "����Ϊ��" << s2 << endl;

}