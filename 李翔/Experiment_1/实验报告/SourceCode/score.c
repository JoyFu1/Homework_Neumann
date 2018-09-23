/*************************************************
** Դ�ļ�   : score.c
** ����˵�� : Function Definations
** ����ʱ�� : 2018-9-2/17:35
/**************************************************/

/*----------------ͷ�ļ�--------------*/

#include "score.h"
#include <math.h>
#include <stdlib.h>
#include <stdio.h>

/*----------------��������-------------*/

//1.��ȡѧ����������
void readData(SS stu[], int N)
{

	printf("�밴�����¸�ʽ����ѧ����Ϣ��ѧ��,����,ƽʱ�ɼ�,��ĩ�ɼ�\n");

	for (int i = 0; i < N; i++)
	{
		printf("��%d��ѧ��:", i + 1);
		scanf("%s %s %f %f", &stu[i].number, &stu[i].name, &stu[i].dailyScore, &stu[i].finalScore);
		printf("\n");
	}

	printf("------�ɼ�¼�����!--------\n");



}

SS* readDataFromFile(int *N)
{

	printf("\n\n------��һ��: ���ļ���ȡѧ���ĳɼ���Ϣ--------\n\n");

	SS *stu;// �����¿ռ�,��ȡ�ļ��е�ÿ��ѧ����Ϣ

	FILE *fp = NULL;
	int count = 0;
	int index = 0;

	fp = fopen("data.txt", "r");

	//1.��ȡѧ����Ŀ
	if (fp != NULL)
	{
		fscanf(fp, "%d", &count);
		*N = count;
	}
	else
	{
		printf("failed to open the info file\n");
		getchar();
	}

	printf("ѧ����ĿΪ:%d\n", count);
	getchar();


	//2.������ѧ������洢�ռ�
	stu = (SS*)malloc(count * sizeof(SS));


	//3.��ȡÿ��ѧ������Ϣ
	while ((!feof(fp)) && (index < count))
	{

		//�����ļ����ݵ��ڴ�	
		fscanf(fp, "%s%s%f%f\n", (stu[index].number), (stu[index].name), &stu[index].dailyScore, &stu[index].finalScore);

		//���ԭʼѧ����Ϣ
		printf("* ѧ�ţ�%s	����:%s		ƽʱ�ɼ���%4.2f��		��ĩ�ɼ�:%4.2f��\n", (stu[index].number), (stu[index].name), stu[index].dailyScore, stu[index].finalScore);

		index++;


	}

	fclose(fp);

	return stu;
}

//2.����N��ѧ�����Ե������ɼ�
void calcuScore(SS stu[], int N)
{


	printf("\n\n------�ڶ���: ����ÿ��ѧ���������ɼ�--------\n\n");

	for (int i = 0; i < N; i++)
	{

		stu[i].generalScore = 0.2*stu[i].dailyScore + 0.8*stu[i].finalScore;
		printf("* ѧ�ţ�%s	����:%s		�ܳɼ�:%4.2f��\n", (stu[i].number), (stu[i].name), stu[i].generalScore);

	}
}


//3.���������ɼ�����
int cmpBigtoSmall(const void *a, const void *b)
{

	SS *aa = (SS *)(a);
	SS *bb = (SS *)(b);



	if ((*aa).generalScore < (*bb).generalScore)  return 1;

	else if ((*aa).generalScore > (*bb).generalScore)  return -1;

	else
		return 0;

}

void sortScore(SS stu[], int N)
{

	qsort(&(stu[0]), N, sizeof(stu[0]), cmpBigtoSmall);

}


//4.����һ���ĸ�ʽ���N��ѧ������Ϣ
void printOut(SS stu[], int N)
{


	printf("\n------������: �����ܳɼ����ѧ��������Ϣ!------\n\n");

	for (int i = 0; i < N; i++)
	{

		cout << "ѧ��;" << stu[i].number << " " << "����:" << stu[i].name << " " << "ƽʱ�ɼ���" << stu[i].dailyScore << " " << "ʵ��ɼ�:" << stu[i].text << " " << "��ĩ�ɼ�:" << stu[i].finalScore << " " << "�ܳɼ�:" << stu[i].generalScore << " " << "����" << stu[i].rank << endl;
	}

}

//д��Excel�ĵ�
void putintoExcel(SS stu[],int N)
{
	cout << endl << "-------���Ĳ�����ѧ��������Ϣд����ĿĿ¼�µ�Ecxel�ĵ�------" << endl;
	ofstream fout;
	fout.open("..\\score.xls");
	fout << "ѧ��\t����\tƽʱ����\tʵ�����\t��ĩ����\t�ܷ�\t����\t\n";
	for (int i = 0; i < N; i++)
	{
		fout<<stu[i].number<<"\t";
		fout << stu[i].name << "\t";
		fout << stu[i].dailyScore << "\t";
		fout << stu[i].finalScore << "\t";
		fout << stu[i].text<<"\t";
		fout << stu[i].generalScore << "\t";
		fout << stu[i].rank<<"\t" ;
		fout << "\n";
	}
	fout.close();

}

//����ѧ�ż��ɲ�ѯ����
void inSpect(SS stu[],int N)
{
	long a;
	int b=0;
	char f=0;
	cout << endl << "���������������������������岽����ѯ���ܡ�������������������" << endl;
	cout << "������Ҫ��ѯѧ�ţ�" << endl;

	
		cin >> a;
	
	for (int i = 0; i <N; i++)
	{
		if (a==stu[i].number)
		{
			cout << "����ѧ��;" << stu[i].number << "���� " << "����:" << stu[i].name << " " << "ƽʱ�ɼ���" << stu[i].dailyScore << " " << "ʵ��ɼ�:" << stu[i].text << " " << "��ĩ�ɼ�:" << stu[i].finalScore << " " << "�ܳɼ�:" << stu[i].generalScore << " " << "����" << stu[i].rank << endl;
			b = 1;
		
		}
			
	}

	if (b == 0)cout << "��ѯʧ��" << endl;
}
//�󷽲ƽ��ֵ
void calculate(SS stu[],int N)
{
	int i = 0;
	cout << endl << "�������������������������������������ֵ��������������������" << endl;
	float SUM=0;
	for (; i < N; i++)
	{
		SUM = SUM+stu[i].generalScore;
	}
	SUM = (float)(SUM / i);
	cout << "ƽ���ܳɼ�Ϊ��";
	cout<<SUM << endl;
	cout << endl << "���������������������������߲������㷽�������������������" << endl;
	float b=0, c;
	i = 0;
	for (; i < N; i++)
	{
		b = (float)(b + (stu[i].generalScore - SUM )*(stu[i].generalScore - SUM ));
	}
	c = (float)(b / i);
	cout << "����Ϊ��" << c << endl;


}