#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include "score.h"
int main()
{
	printf("******************************\n");
	printf("       ѧ���ɼ��������ϵͳ        \n");
	printf("******************************\n\n");
	int N = 0; 

	SS  *pstu = NULL; 
	pstu = readDataFromFile(&N);

	calcuScore(pstu, N);

	sortScore(pstu, N);

	printOut(pstu, N);


	free(pstu);

	printf("\n");
	system("pause");


	return 0;
}