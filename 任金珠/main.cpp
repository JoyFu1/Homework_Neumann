#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>

typedef struct
{
	char number[20];  //ѧ��ѧ��
	char name[20];  //ѧ������
	int common_score;  //ѧ��ƽʱ�ɼ�
	int experiment_score;  //ѧ��ʵ��ɼ�
	int final_score;  //��ĩ�ɼ�
	float score;  //���ճɼ�
	int ranking;  //����
}Student;


Student* readDataFromFile(int *N)
{
		printf("\n\n*******��һ��: ���ļ���ȡѧ���ĳɼ���Ϣ********\n\n");
		Student *stu;//����һ��Student���͵�ָ��

		FILE *fp=NULL;  //ָ��Ϊ��
		fp=fopen("data.txt","r");//ֻ��

		int count=0;      //1������ѧ����Ŀ
		int index=0;

		if(fp!=NULL)
		{
			fscanf(fp,"%3d",&count);
			*N=count;
		}
		else
		{
			printf("�޷��򿪴��ļ�");
			exit(0);
		}
		getchar();
		printf("ѧ������ĿΪ:%3d",count);
		getchar();
		//������ѧ������洢�ռ�;
		stu=(Student*)malloc(count*sizeof(Student));

		//��ȡÿ��ѧ������Ϣ
		while((!feof(fp))&&(index<count))
		{
			//�����ļ�
			fscanf(fp,"%s%s %d %d %d\n",(stu[index].number),(stu[index].name),&stu[index].common_score,&stu[index].experiment_score,&stu[index].final_score);
			//���ѧ����Ϣ
			printf("*%s   ƽʱ�ɼ���%d  ʵ��ɼ���%d   ��ĩ�ɼ���%d",(stu[index].number),stu[index].common_score,stu[index].experiment_score,stu[index].final_score);
			printf("\n");
			index++;
		}
			


		fclose(fp);

     	return stu;//���ؿ��ٵ��׵�ַ
}


//2���������ѧ�������ճɼ�
void count_score(Student stu[],int N)
{
		printf("\n*******�ڶ���: ����ÿ��ѧ���������ɼ�*******\n");
		for(int j=0;j<N;j++)
		{
			stu[j].score=0.2*stu[j].common_score+0.2*stu[j].experiment_score+0.6*stu[j].final_score;
			printf("*%s      ��ĩ�ɼ�:%f\n",stu[j].number,stu[j].score);
		}
}

//3���������ճɼ�����
int  cmpBigtoSmall(const void *a, const void *b)
{

	Student *aa = (Student *)(a);
	Student *bb = (Student *)(b);



	if ((*aa).score < (*bb).score)  return 1;

	else if ((*aa).score > (*bb).score)  return -1;

	else
		return 0;

}
void sort_score(Student stu[], int N)
{
	printf("\n*******���������������ճɼ�����******\n");

	qsort(&(stu[0]), N, sizeof(stu[0]), cmpBigtoSmall);

}
//4�����ѧ����Ϣ
void printmassage(Student stu[], int N)
{
		printf("\n******���Ĳ�: �����ܳɼ����ѧ��������Ϣ*******\n");
		for(int k=0;k<N;k++)
		{
			printf("��%3d����Ϣ    %s    �ܳɼ�:%4.2f��\n",k+1,stu[k].number, stu[k].score);
		}
}
//5������ѧ���ɼ��ľ�ֵ�ͷ���
void ave_fangcha(Student stu[], int N)
{
	printf("\n*******���岽: �����ֵ�ͷ���*********\n");
	
	double Averg,s;
	Averg=1.0*(stu[0].score+stu[1].score+stu[2].score+stu[3].score+stu[4].score+stu[5].score)/N;
	s=1.0*(pow(stu[0].score-Averg,2)+pow(stu[1].score-Averg,2)+pow(stu[2].score-Averg,2)+pow(stu[3].score-Averg,2)+pow(stu[4].score-Averg,2)+pow(stu[5].score-Averg,2))/N;
	printf("��ֵΪ��%lf  ����Ϊ��%lf",Averg,s);
}

main()
{
	printf("******************************\n");
	printf("      ѧ���ɼ��������ϵͳ       \n");
	printf("            REN            \n");
	printf("******************************\n\n");


	int N=0;

	Student *stu=NULL;

	stu=readDataFromFile(&N);
	count_score(stu,N);
	sort_score(stu,N);
	printmassage(stu,N);
	ave_fangcha(stu,N);

	free(stu);

	printf("\n");
	system("pause");
}