/*************************************************
* Head File   : ��ͷ.h
* File Usage  : ѧ������ϵͳͷ�ļ�
* Create Time : 2018-9-23/13:00
/**************************************************/

#ifndef __��ͷ_H__
#define __��ͷ_H__

#include<iostream>
#include <string>
using namespace std;

//ѧ���ṹ��
typedef struct studentScore
{
	char number[20];  //ѧ��
	char name[20];    //����
	float dailyScore;   //ƽʱ�ɼ�
	float experimentScore;   //ʵ��ɼ�
	float finalScore;   //��ĩ�ɼ�
	float generalScore; //�����ɼ�
	int place;//����
}SS;

//��Ա����

//��ȡѧ����Ϣ
void readData(SS stu[], int N);//s�����ȡ
SS* readDataFromFile(int N);//�ļ���ȡ
void calcuScore(SS stu[], int N);    //����ѧ���������ɼ�
void sortScore(SS stu[], int N);    //����
void printOut(SS stu[], int N);     //���ѧ����������Ϣ
void putintoExcel(SS stu[], int N); //д��Excel�ĵ�
void inSpect(SS stu[], int N);//����ѧ�ż��ɲ�ѯ����
void calculate(SS stu[], int N);//�󷽲ƽ��ֵ
#endif