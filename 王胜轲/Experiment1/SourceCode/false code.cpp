#include<iostream.h>
#include<stdlib.h>
#include <fstream>
#include<Windows.h>
typedef struct student//����ѧ����һ�ṹ��
{
	char number[10];
	char name[10];
	int dailyScore;
	int expScore;
    int finalScore;
	float score;
	int place;
}SS;
//�����ļ���û�ɹ���
/*SS* readData(int n)
{
{
	ifstream fin;
	fin.open("C:\Users\LENOVO\Desktop\data.txt");//��ȡ����Ŀ��txt�������
	if (fin.fail())
	{
		cout << "Input file opening failed!";
		exit(1);
	}
	cout << "ѧ����ĿΪ:" << n << endl;
	SS stu[100];
	for (int i = 0; i < n; i++)	
	{   stu[i].place=i+1;
		fin >> stu[i].number;
		fin >> stu[i].name;
		fin >> stu[i].dailyScore;
		fin >> stu[i].expScore;
		fin >> stu[i].finalScore;
		cout << "ѧ��;" << stu[i].number << " " << "����:" << stu[i].name << " " << "ƽʱ�ɼ���" << stu[i].dailyScore << " " << "ʵ��ɼ�:" << stu[i].expScore << " " << "��ĩ�ɼ�:" << stu[i].finalScore << endl;
	}
	fin.close();
	return stu;
}
}*/



//1��ȡѧ���ǵ�ѧ�ţ��������ճ��ɼ�����ĩ�ɼ�
SS* readData(int n)
{
	cout << "ѧ����ĿΪ:" << n << endl;
     SS stu[100];
	for (int i = 0; i < n; i++)	
	{   stu[i].place=i+1;
		cin >> stu[i].number;
		cin >> stu[i].name;
		cin >> stu[i].dailyScore;
		cin >> stu[i].expScore;
		cin >> stu[i].finalScore;
		cout << "ѧ��;" << stu[i].number << " " << "����:" << stu[i].name << " " << "ƽʱ�ɼ���" << stu[i].dailyScore << " " << "ʵ��ɼ�:" << stu[i].expScore << " " << "��ĩ�ɼ�:" << stu[i].finalScore << endl;
	}
	return stu;
}



//2����ѧ���ǵ��ۺϳɼ�
void calcuScore(SS stu[],int n)
{   
	
	for(int i=0;i<n;i++)
	{
		stu[i].score=0.2*stu[i].dailyScore+0.2*stu[i].expScore+0.6*stu[i].finalScore;
        cout<<stu[i].name<<"���ۺϳɼ���"<<stu[i].score<<endl;
	}
	
}


//3����
void mingci(SS stu[],int n)
{  
	int i,j,t;
 for(i=0;i<n;i++)
 {
	 for(j=i+1;j<n;j++)
	 {
		 if(stu[i].score<stu[j].score)
		 {
			 t=stu[i].place;
			 stu[i].place=stu[j].place;
			 stu[j].place=t;
		 }
	 }
 }
}




//4��ѯ�����
void printout(SS stu[],int n)
{
	char a[10];
	cout<<"��������Ҫ����ͬЬ��ѧ��"<<endl;
    cin>>a;
	
	for(int i=0;i<n;i++)
	{
		if(a==stu[i].number)
	    cout << "ѧ��:" << stu[i].number << " " << "����:" << stu[i].name << " " << "ƽʱ�ɼ���" << stu[i].dailyScore << " " << "ʵ��ɼ�:" << stu[i].expScore << " " << "��ĩ�ɼ�:" << stu[i].finalScore <<"�ۺϳɼ�"<<stu[i].score<<"����"<<stu[i].place<<endl;
        else
		cout<<"���޴���!"<<endl;
	}
}



int main()
{	cout<<"��ӭ����ѧ����Ϣ����ϵͳ��"<<endl;
	int n=0;
    SS  *pstu = NULL;
	cout<<"��������Ҫ��ȡѧ������:"<< endl;
	cin>>n;
	readData(n);//¼����Ϣ
    calcuScore(pstu,n);//�ۺϳɼ�
    mingci(pstu,n);//����
    printout(pstu,n);//��ѯ�����
}

