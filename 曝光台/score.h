#ifndef __SCORE_H__
#define __SCORE_H__

#include<iostream>
#include<string>
using namespace std;
struct SD
{
	char name[20];//����
	char number[20];//ѧ��
	float dailyscore;//ƽʱ�ɼ�
	float finalscore;//��ĩ�ɼ�
	float text;//ʵ��ɼ�
	float generalscore;//�����ɼ�
	int rank;//����
};
SD* readdatafromfile(int n);//�ļ���ȡ
void calcuscore(SD stu[], int n);//����ѧ���������ɼ�
void sortscore(SD stu[], int n);//���ݳɼ�����
void printout(SD stu[], int n);//����ʽ���ѧ������Ϣ
void putintoExcel(SD stu[], int n);//д��Excel���
void serch(SD stu[],int n);
void calculate(SD stu[], int n);
#endif