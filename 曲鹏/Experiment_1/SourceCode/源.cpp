#include<iostream>
#include<fstream>
#include<cmath>
#include<cstdlib>
#include<cstring>

using namespace std;
//#include<>
/**********�ṹ��******************/
typedef struct
{
	char number[12];//ѧ��
	char name[10];//����
	int dailyscore;//ƽʱ�ɼ�
	int finalscore;//��ĩ�ɼ�
	int experscore;//ʵ��ɼ�
	int lastscore;//�ܳɼ�
	int rank;

} ss;
void read(ss stu[], int n)//��ȡѧ���ɼ�
{
	for (int i = 0; i<n; i++)
	{
		cin >> stu[i].number >> stu[i].name >> stu[i].dailyscore >> stu[i].experscore >> stu[i].finalscore;
	}
	/*	cout<<"student��Ϣ��"<<endl;
	for(int j=0;j<n;j++)
	{
	cout<<stu[j].number<<' '<<stu[j].name<<' '<<stu[j].dailyscore<<' '<<stu[j].experscore<<' ' <<stu[j].finalscore  <<endl;
	}*/
}
void count(ss stu[], int n)//����ѧ���ܳɼ�
{
	for (int i = 0; i<n; i++)
	{
		stu[i].lastscore = 0.2*stu[i].dailyscore + 0.2*stu[i].experscore + 0.6*stu[i].finalscore;
	}
	cout << "student��Ϣ��" << endl;
	//	for(int j=0;j<n;j++)
	//	{
	//	cout<<stu[j].number<<' '<<stu[j].name<<' '<<stu[j].dailyscore<<' '<<stu[j].experscore<<' ' <<stu[j].finalscore <<' '<<stu[j].lastscore  <<endl;
	//	}
}
void rankscore (ss stu[], int n)//���ܳɼ���������
{
	int temp;
	for (int k = 0; k<n; k++)//������ʼ��
	{
		stu[k].rank = k + 1;
	}
	for (int i = 0; i<n - 1; i++)//����ϴ��
	{
		for (int j = i + 1; j<n; j++)
		{
			if (stu[i].lastscore <stu[j].lastscore)
			{
				temp = stu[i].rank; stu[i].rank = stu[j].rank; stu[j].rank = temp;
			}
		}
	}
	for (int j = 0; j<n; j++)//�������
	{
		cout << stu[j].number << ' ' << stu[j].name << ' ' << stu[j].dailyscore << ' ' << stu[j].experscore << ' ' << stu[j].finalscore << ' ' << stu[j].lastscore << "����" << stu[j].rank << endl;
	}
}
void search(ss stu[], int  n)//����ѧ����Ϣ
{
	char num[12];
	cout << "����Ҫ��ѯ��ѧ��" << endl;
	cin >> num;
	for (int i = 0; i<n; i++)
	{
		if (strcmp(num, stu[i].number) == 0)//����ƥ��
		{
			cout << stu[i].number << ' ' << stu[i].name << ' ' << stu[i].dailyscore << ' ' << stu[i].experscore << ' ' << stu[i].finalscore << ' ' << stu[i].lastscore << "����" << stu[i].rank << endl;
		}

	}
}
void fc(ss stu[], int n)//�����ֵ�ͷ���
{
	int FC = 0, JZ = 0, k = 0, p = 0;
	for (int i = 0; i<n; i++)//�ۺϳɼ�
	{
		p += stu[i].lastscore;
	}
	JZ = p / n;
	for (int j = 0; j<n; j++)//���㷽��
	{
		k+= pow((stu[j].lastscore - JZ), 2);
	}
	FC = k / n;
	cout << "�ÿ�Ŀƽ����Ϊ" << JZ << "����Ϊ" << FC << endl;
}

 int main()
{
	int n;
	//char num[10]; 
	ss stu[20];
	cout << "����n" << endl;
	cin >> n;
	read(stu, n);
	count(stu, n);
	rankscore(stu,n);
    search(stu, n);
	fc(stu, n);
	system("pause");
	return 0;
}