#include<stdio.h>
#include<string.h>
#include"score.h"
#include<stdlib.h>
#include<math.h>
#define N 6
struct student stu[6];
int main()
{
	int i;
	double a;//�����ɼ�
		for (i = 0; i < 6; i++)
		{
			struct student stu[6] = { { 2017000001, "Ҧ����", 90, 85, 98 }, { 2017000002, "�ܹ�Զ", 85, 87, 92 }, { 2017000003, "��Ҷ�", 89, 84, 96 },
			{ 2017000004, "��ܽ��", 95, 76, 98 }, { 2017000005, " �ų���", 78, 80, 88 }, { 2017000006, " �����", 82, 90, 85 } };
			a = stu[i].dailyscore*0.2 + stu[i].finalscore*0.6 + stu[i].experiscore*0.2;
			printf("%d\n", a);
		}
	int printOut(struct student stu[]);
	return 0;
}
