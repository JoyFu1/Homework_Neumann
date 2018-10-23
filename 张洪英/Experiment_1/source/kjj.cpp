#include <stdio.h>
#include <malloc.h>
#include <math.h>
#include "function.h"
struct Student{
	char name[10];
	char number[10];
	 float dailyScore;
    float testScore;
    float finalScore;
    float generalScore;
};

void input_student(struct Student * parr, int len);
void sort(struct Student * a, int len);
void output_student(struct Student * a, int len);

int main()
{
	int len;
	struct Student * parr;

	parr = (struct Student *)malloc(len * sizeof(struct Student));

	printf("������ѧ���ܸ�����");
	scanf("%d",&len);

	input_student(parr,len);



	sort(parr,len);
	output_student(parr, len);
	return 0;
}

void input_student(struct Student * parr, int len)
{
	int i;

	for (i=0; i<len; i++)
	{
		printf("������� %d ��ѧ������Ϣ\n",i+1);

		printf("���֣�");
		scanf("%s",parr[i].name);

		printf("ѧ�ţ�");
		scanf("%s",&parr[i].number);

		printf("ƽʱ�ɼ���");
		scanf("%f",&parr[i].dailyScore);
		printf("ʵ��ɼ���");
		scanf("%f",&parr[i]. testScore);
		printf("��ĩ�ɼ���");
		scanf("%f",&parr[i].finalScore);
		  parr[i].generalScore = parr[i].dailyScore * 0.2 + parr[i].testScore * 0.2 + parr[i].finalScore * 0.6;
	}
}

void sort(struct Student * parr, int len)
{
	int i, j;
	struct Student t;

	for (i=0; i<len-1; i++)
	{
		for (j=0; j<len-1-i; j++)
		{
			if (a[j].generalScore < a[j+1].generalScore)
			{
				t = a[j];
				a[j] = a[j+1];
				a[j+1] = t;
			}
		}
	}
}

void output_student(struct Student * parr, int len)
{

	printf("��ֵ");
    int aver = 0;
    for(int i=0; i<len; i++)
    {
        aver += parr[i].generalScore;
    }
    printf("%d",aver);
        printf("aver/len=%d",aver);


    printf("\n����\n");
    int averg= 0;
    for(int i=0; i<len; i++)
    {
        averg += pow(parr[i].generalScore - aver,2);
    }
    int c;
    c=averg/len;
    printf("%d",c);
}
