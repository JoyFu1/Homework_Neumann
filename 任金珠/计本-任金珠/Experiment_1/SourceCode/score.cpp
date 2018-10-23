#include<iostream>
#include<math.h>
#include <string>
#include<stdlib.h>
#include<stdio.h>
#include <cstdlib>
#include <fstream>
#include"score.h"
using namespace std;


/*��ȡѧ����Ϣ*/
SS* readDataFromFile(int N)/*�ļ���ȡ����*/
{
	cout << endl << "��һ�������ļ�(��ĿĿ¼����ȡѧ���ĳɼ�" << endl;
	ifstream fin;
	fin.open("..\\data.txt");/*��ȡ����Ŀ��txt�������*/
	if (fin.fail())
	{
		cout << "Input file opening failed!";
		exit(1);
	}
	cout << "ѧ����Ŀ:" << N << endl;
	SS stu[100];
	for (int i = 0; i < N; i++)	
	{
		fin >> stu[i].number;
		fin >> stu[i].name;
		fin >> stu[i].dailyScore;
		fin >> stu[i].finalScore;
		cout << "ѧ��;" << stu[i].number << " " << "����:" << stu[i].name << " " << "ƽʱ�ɼ���" << stu[i].dailyScore << " " << "��ĩ�ɼ�:" << stu[i].finalScore << endl;
	}
	fin.close();
	return stu;
}

/*����ѧ�����ܳɼ�*/
void calcuScore(SS stu[], int N)
{
	cout << endl << "-----�ڶ���������ѧ�����ܳɼ�--------" << endl;
	for (int i = 0; i < N; i++)
	{
		stu[i].generalScore = 0.2*stu[i].dailyScore + 0.8*stu[i].finalScore;
		cout << "ѧ��;" << stu[i].number << " " << "����:" << stu[i].name << " " << "�ܳɼ�:" << stu[i].generalScore << endl;
	}
}

/*����(ð���㷨��*/
void sortScore(SS stu[], int N)
{
	int i, j;
	SS swap;
	for (i = 0; i < N; i++)
	{
		for (j = 0; j < (N - i); j++)
		{
			if (stu[j].generalScore < stu[j + 1].generalScore)
			{
				swap = stu[j];
				stu[j] = stu[j + 1];
				stu[j + 1] = swap;
			}
		}
		stu[i].rank = i+1;
	}
}

/*���ѧ����������Ϣ*/
void printOut(SS stu[], int N)
{
	cout << endl << "------�������� �����ܳɼ��ɴ�С���ѧ����Ϣ-----" << endl;

	for (int i = 0; i < N; i++)
	{

		cout << "ѧ��;" << stu[i].number << " " << "����:" << stu[i].name << " " << "ƽʱ�ɼ���" << stu[i].dailyScore << " " << "��ĩ�ɼ�:" << stu[i].finalScore << " " << "�ܳɼ�:" << stu[i].generalScore << " "<<"����"<<stu[i].rank << endl;
	}

}

/*д��Excel�ĵ�*/
void putintoExcel(SS stu[],int N)
{
	cout << endl << "-------���Ĳ�����ѧ��������Ϣд����ĿĿ¼�µ�Ecxel�ĵ�------" << endl;
	ofstream fout;
	fout.open("..\\score.xls");
	fout << "ѧ��\t����\tƽʱ����\t��ĩ����\t�ܷ�\t����\t\n";
	for (int i = 0; i < N; i++)
	{
		fout <<stu[i].number<< "\t";
		fout << stu[i].name << "\t";
		fout << stu[i].dailyScore << "\t";
		fout << stu[i].finalScore << "\t";
		fout << stu[i].generalScore << "\t";
		fout << stu[i].rank<<"\t" ;
		fout << "\n";
	}
	fout.close();

}