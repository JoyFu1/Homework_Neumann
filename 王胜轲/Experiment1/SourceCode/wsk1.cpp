#include<iostream.h>
#include<stdlib.h>
#include <fstream>
#include <string.h>
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




SS* readData(int n)
{
	//��ȡѧ���ǵ�ѧ�ţ��������ճ��ɼ�����ĩ�ɼ�
	cout << "ѧ����ĿΪ:" << n << endl;
	cout<<"��������"<<n<<"��ͬѧ����Ϣ"<<endl;
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
	//�����ۺϳɼ�
	for(i=0;i<n;i++)
	{
		stu[i].score=0.2*stu[i].dailyScore+0.2*stu[i].expScore+0.6*stu[i].finalScore;
        cout<<stu[i].name<<"���ۺϳɼ���"<<stu[i].score<<endl;
	}	
 
    //����
	int j,t;
 

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

//����ѧ�Ų�ѯѧ����Ϣ
	char a[10];
	cout<<"��������Ҫ����ͬЬ��ѧ��"<<endl;
    cin>>a;
	
	for(i=0;i<n;i++)
	{  
	if (strcmp(stu[i].number, a)==1)
	    cout << "ѧ��:" << stu[i].number << " " << "����:" << stu[i].name << " " << "ƽʱ�ɼ���" << stu[i].dailyScore << " " << "ʵ��ɼ�:" << stu[i].expScore << " " << "��ĩ�ɼ�:" << stu[i].finalScore <<"�ۺϳɼ�"<<stu[i].score<<"����"<<stu[i].place<<endl;
        break;
	}
return stu;
}












int main()
{
	cout<<"��ӭ����ѧ����Ϣ����ϵͳ��"<<endl;
	int n=0;
    SS  *pstu = NULL;
	cout<<"��������Ҫ��ȡѧ������:"<< endl;
	cin>>n;
	readData(n);//¼����Ϣ
}

