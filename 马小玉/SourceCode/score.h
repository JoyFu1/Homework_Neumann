#include<stdio.h>
#include<math.h>
struct student
{
	int number;//ѧ��
	char name[20];//����
	float dailyscore;//ƽʱ�ɼ�
	float finalscore;//��ĩ�ɼ�
	float experiscore;//ʵ��ɼ�
	double generalscore;//�����ɼ�
	int place;//����
};
/*��������*/
int  readData(struct student stu[]);//����N��ѧ����ѧ�ţ�������ƽʱ����ĩ��ʵ��ɼ�
int  calcuScore(struct student stu[]);//����N��ѧ���������ɼ�
int  sortScore(struct student stu[]);//���������ɼ��������ó�ÿ��ѧ��������
int  printOut(struct student stu[]);//���N��ѧ����������Ϣ
struct student stu[6];
