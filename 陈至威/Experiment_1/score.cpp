#include<Windows.h>
#include"head.h"
#include<fstream>
#include<stdlib.h>
#include<string>
#include<math.h>
#include<iostream>

using namespace std;

void readDate(CJGLXT stu[], int n)  //���ı��ĵ��ж�ȡ�ɼ�������
{
	int i;
	ifstream in("D:\\C++\\score\\data.txt");
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
void calcuScore(CJGLXT stu[], int n)    //����ѧ�����ܳɼ�
{
	int i;
	for (i = 0; i < n; i++)
	{
		stu[i].generalScore = 0.2*stu[i].dailyScore + 0.2*stu[i].experimentScore + 0.6*stu[i].finalScore;
		cout << "ѧ��:" << stu[i].number << "  ����:" << stu[i].name << "  �ܳɼ�:" << stu[i].generalScore << endl;
	}
}
void sortScore(CJGLXT stu[], int n)    //����ѧ�����ܳɼ�����
{
	int i, j;
	CJGLXT t;
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
		stu[i].place = i + 1;
	}
}
void printOut(CJGLXT stu[], int n)     //���ѧ���ܳɼ�������
{
	int i;
	for (i = 0; i < n; i++)
		cout << "ѧ��:" << stu[i].number << " ����:" << stu[i].name << " �ܳɼ�:" << stu[i].generalScore << " ����" << stu[i].place << endl;
}
void search(CJGLXT stu[], int n)       //����ѧ������ѯ��Ӧѧ���ɼ�
{
	int i;
	int k = 10;
	cout << "������Ҫ��ѯ��ѧ�ţ�" << endl;
	cin >> stu[k].number;
	for (i = 0; i < n; i++)
	{
		if (strcmp(stu[k].number, stu[i].number) == 0)
		{
			k = i;
			break;
		}
	}
	cout << "������" << stu[k].name << "  ƽʱ�ɼ���" << stu[k].dailyScore << "  ʵ��ɼ���" << stu[k].experimentScore << "  ��ĩ�ɼ���" << stu[k].finalScore << "  �ܳɼ���" << stu[k].generalScore << "  ������" << stu[k].place << endl;
}
void calculate(CJGLXT stu[], int n)      //�����ܳɼ���ƽ��ֵ���䷽��
{
	int i;
	float sum = 0, average, s2 = 0;
	for (i = 0; i < n; i++)
		sum = sum + stu[i].generalScore;
	average = (float)(sum / n);
	cout << "�ܳɼ���ƽ��ֵΪ��  " << average << endl;
	for (i = 0; i < n; i++)
		s2 = s2 + pow((stu[i].generalScore - average), 2);
	s2 = s2 / n;
	cout << "�ܳɼ��ķ���Ϊ��  " << s2 << endl;

}