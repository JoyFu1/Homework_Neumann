#include<iostream>
using namespace std;
struct CJGLXT                          //����ṹ������ "�ɼ�����ϵͳ"
{
	char number[11];
	char name[10];
	int dailyScore;
	int finalScore;
	int experimentScore;
	float generalScore;
	int place;
};
void readDate(CJGLXT stu[], int n);   //���ı��ĵ��ж�ȡ����
void calcuScore(CJGLXT stu[], int n);  //�����ܳɼ�
void sortScore(CJGLXT stu[], int n);   //����
void printOut(CJGLXT stu[], int n);   //������
void search(CJGLXT stu[], int n);    //��ѯѧ�Ŷ�Ӧ����
void calculate(CJGLXT stu[], int n);   //����ƽ�����ͷ���#pragma once
