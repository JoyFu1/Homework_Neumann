#include <iostream>
#include<math.h>

using namespace std;

int main()
{
    int i=0,j=0,k=0,sum=0,variance=0,t=0;
    int*ptr;
    int a[5]={0};
    ptr=a;
   ptr=new int[5];//Ϊһ������20��������������䶯̬�ڴ�ռ�
   int n=0;
   cout<<"����������Ҫ��ֵ�ĸ���"<<endl;
   cin>>n;
   cout<<"������"<<n<<"����"<<endl;

   for(int i=0;i<n;i++)//Ϊ�����ǰnλ��ֵ������n���ܴ���20
   {
    cin>>*ptr;
    ptr++;
    cout<<endl;
   }

   for( i=0;i<5;i++)//����������ƽ��ֵ�ͷ����Լ������������ĸ���
   {
      sum+=a[i];
      variance+=pow((a[i]-(sum/5)),2);
   if(a[i])
    {
        if(a[i]>0)
            j++;
        else
            k++;
    }
    else;


   }

    cout<<"��������������"<<j<< " ��"<<endl;
    cout<<"�������и�����"<<k<< " ��"<<endl;
    cout<<"������ľ�ֵ"<<sum<< " ��"<<endl;
    cout<<"������ķ���Ϊ"<<variance/5<< " ��"<<endl;
    //��С��������
    for(i=0;i<4;i++)
   {
    if(a[i]>a[i+1])
    {
       t=a[i];
       a[i]=a[i+1];
       a[i+1]=t;
    }
   }
   for(i=0;i<5;i++)
    {
        cout<<a[i++]<<endl;
    }
      delete[]ptr;
}
