#include <iostream>
#include <cmath>
#include "2-5-3.h"

using namespace std;

//������ð�ݷ���
void sortscore(int *p)
{
    int i,j;
    int temp;
    for(i=0;i<n;i++)
    {
        for(j=0;j<(n-i+1);j++)
        {
            if(p[j]>=p[j+1])
            {
                temp=p[j];
                p[j]=p[j+1];
                p[j+1]=temp;
            }
        }
    }
    cout<<"-------��������������С��������-------"<<endl;
    for(i=0;i<n;i++)  cout<<p[i]<<"\t";
    cout<<endl;
}

//������������
void panddnumber(int *p)
{
    int a=0,b=0;
    for(int i=0;i<n;i++)
    {
        if(p[i]>0)  a++;
        if(p[i]<0)  b++;
    }
    cout<<"-------���Ĳ�������������ĸ���-------"<<endl;
    cout<<"����������"<<a<<endl;
    cout<<"����������"<<b<<endl;
}

//�󷽲��ƽ��ֵ
void calculate(int *p)
{
    int i=0;
    cout<<endl<<"-------��һ���������ֵ-------"<<endl;
    float sum=0;
    for(;i<n;i++) sum=sum+p[i];
    sum=(float)(sum/i);
    cout<<"ƽ���ܳɼ�Ϊ��"<<sum<<endl;
    cout<<"-------�ڶ��������㷽��-------"<<endl;
    float b=0,c;
    for(i=0;i<n;i++)
    {
        b=(float)(b+(p[i]-sum)*(p[i]-sum));
    }
    c=(float)(b/i);
    cout<<"�ɼ�����Ϊ��"<<c<<endl;
}
