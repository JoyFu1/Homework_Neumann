#include<iostream>
using namespace std;
struct SS                           //����ṹ������
{
	char number[11];
	char name[10];
	int dailyScore;
	int finalScore;
	int experimentScore;
	float generalScore;
	int place;
};
void readDate(SS stu[], int n);   //���ı��ĵ��ж�ȡ����
void calcuScore(SS stu[], int n);  //�����ܳɼ�
void sortScore(SS stu[], int n);   //����
void printOut(SS stu[], int n);   //������
void putintoExcel(SS stu[], int n);  //��������
void search(SS stu[], int n);    //��ѯѧ�Ŷ�Ӧ����
void calculate(SS stu[], int n);   //����ƽ�����ͷ���