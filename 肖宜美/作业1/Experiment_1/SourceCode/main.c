/*************************************************
** ���� : ѧ���ɼ�����ϵͳ
** �汾 : 2018-9-21 / 8:13
** ��Ȩ : GNU General Public License(GNU GPL)
/**************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include "score.h"


/*----------------------------------*
		  Main Function
*-----------------------------------*/

int main()
{


	printf("******************************\n");
	printf("       ѧ���ɼ��������ϵͳ        \n");
	printf("         Supreme19981021          \n");
	printf("******************************\n\n");


	/*-1.������ʼ��-*///RAM  wrong
	int N = 0;     //ѧ������
    SS stu[100];
	SS * pstu = &stu[0];//�ṹ������ָ��


	//2.ѡ��һ�ֶ�ȡѧ����Ϣ�ķ���(�ֶ����뷨,���ߴ��ļ���ȡ���ڴ�)
	//2.1 ��ȡ�ļ���

	//pstu = readDataFromFile(&N);


	/*2.2�ֶ�����ѧ����Ϣ��-*/
	printf("������ѧ����Ŀ(С��100):");
	scanf("%d", &N);
	readData(pstu, N);


	/*-3.����ѧ���ܳɼ����ܳɼ� = ƽʱ�ɼ� + ��ĩ�ɼ�--*/
	calcuScore(pstu, N);

	/*-4.����ѧ���ɼ�����-*/
	sortScore(pstu, N);

	/*-5.�����������ѧ����Ϣ-*/
	printOut(pstu, N);


	free(pstu);//�ͷŶ�̬�ڴ�ռ�

	printf("\n");
	system("pause");


	return 0;
}
