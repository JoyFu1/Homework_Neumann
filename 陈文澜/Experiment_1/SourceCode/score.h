#ifndef __SCORE_H__
#define __SCORE_H__

#include<iostream>
#include<string>
using namespace std;
struct SS
{
	char name[20];//����
	char number[20];//ѧ��
	float dailyscore;//ƽʱ�ɼ�
	float finalscore;//��ĩ�ɼ�
	float text;//ʵ��ɼ�
	float generalscore;//�����ɼ�
	int rank;//����
};
SS* readdatafromfile(int n);//�ļ���ȡ
void calcuscore(SS stu[], int n);//����ѧ���������ɼ�
void sortscore(SS stu[], int n);//���ݳɼ�����
void printout(SS stu[], int n);//����ʽ���ѧ������Ϣ
void putintoExcel(SS stu[], int n);//д��Excel���
void serch(SS stu[], int n);
void calculate(SS stu[], int n);
#endif
