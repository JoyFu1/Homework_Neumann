#ifndef HEAD_H_INCLUDED
#define HEAD_H_INCLUDED
#include<iostream>
#include<string>
using namespace std;


//ѧ���ṹ��
    struct SZ
 {
    long number;//ѧ��
    char name[30];//����
    float dailyScore;//ƽʱ�ɼ�
    float finalScore;//��ĩ�ɼ�
    float totalScore;//�����ɼ�
    float text;//ʵ��ɼ�
    int rank;//����

 };

 //��Ա����

 //��ȡѧ����Ϣ
 //void redData(SZ stu[],int N);//�����ȡ
 SZ* readDataFromFile(int N);//�ļ���ȡ

 //����ѧ�������ɼ�

 void calcuScore(SZ stu[],int N);

 //����ѧ������

 void sortScore(SZ stu[],int N);

 //���ѧ��������Ϣ

 void printOut(SZ stu[],int N);

 //д��Excel�ĵ�

 void putintoExcel(SZ stu[],int N);

 //����ѧ�Ų�ѯѧ����Ϣ���ɼ�

 void inSpect(SZ stu[],int N);

 //��ƽ��ֵ������

 void calculate(SZ stu[],int N);


 #endif

