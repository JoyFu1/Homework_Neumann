#include<iostream>
#include<stdlib.h>
using namespace std;

float mypow(float x)
{
	return(x*x);
}

int main()
{
	
	int *ptr;
	int a=0;//��¼��������
	int b=0;//��¼��������
	int sum=0;//�ܺ�
	float meanvalue=0;//��ֵ
	float variance=0;//����
	float x=0;
	int temp;
	ptr=new int[20];//����new��������20��int��С���ڴ�ռ�
	cout<<"������20������"<<endl;


	for(int i=1;i<=20;i++)//�����������ж����������Ǹ���
	{
		cin>>ptr[i];
		if(ptr[i]<0)b++;
		if(ptr[i]>0)a++;
		else continue;
	}
	cout<<"��������:"<<a<<endl;
	cout<<"��������:"<<b<<endl;

	for(int i=1;i<=20;i++)//�����ֵ
	{
		sum=sum+ptr[i];
	}
	meanvalue=sum/20;
	cout<<"��ֵΪ:"<<meanvalue<<endl;


	
	for(int i=1;i<20;i++)//���㷽��
	{
		x=x+mypow(ptr[i]-meanvalue);
	}
	variance=x/20;
	cout<<"����Ϊ"<<variance<<endl;
	

	for(int i=1;i<20;i++)//����
	{
		for(int j=i+1;j<=20;j++)
		{
			if(ptr[i]>ptr[j])
			{
				temp=ptr[i];
				ptr[i]=ptr[j];
				ptr[j]=temp;
			}
		}
	}
	
	cout << "��С��������Ϊ��" << endl;
	for (int i = 1; i <=20; i++)
		{
			cout << ptr[i] << " ";
	}
	cout << endl;
	delete ptr;
	system("pause");



	

}
