#include<iostream>
using namespace std;
void PandDnumber(int *p)//�������͸�������
{
    int a=0,b=0,c=0;
    for(int i=0;i<20;i++)
    {
        if(p[i]>0)a++;
        if(p[i]<0)b++;
    }
    cout<<"��������Ϊ"<<a<<endl<<"��������Ϊ"<<b<<endl;
}
void calculate(int *p)//���ֵ�ͷ���
{
    int i=0;
    float SUM=0;
    float ave;
    for(i=0;i<20;i++)
    {
        SUM=SUM+p[i];
    }
    ave=SUM/i;
    cout<<"��ֵΪ��"<<ave<<endl;
    float b=0,var;
    for(i=0;i<20;i++)
    {
        b=b+(p[i]-ave)*(p[i]-ave);
    }
    var=b/i;
    cout<<"����Ϊ��"<<var<<endl;
}
void sortScore(int *p)//����С����˳�������ð���㷨��
{
    int i,j;
    int swap;
    for(i=0;i<20;i++)
      {

        for(j=0;j<(20-i-1);j++)
    {
        if(p[j]>=p[j+1])
        {
            swap=p[j];
            p[j]=p[j+1];
            p[j+1]=swap;
        }
    }
}
cout<<"����С�������Ϊ��"<<endl;
for(i=0;i<20;i++)
    {
        cout<<p[i]<<"\t";
    }
    cout<<endl;
}
int main()
{
    int *ptr,*ee;
    ptr=new int[20];//�����ڴ�
    ee=ptr;//�׵�ַ����
    cout<<"������20������"<<endl;
    for(int i=0;i<20;i++)
        {
          cin>>*ptr;
           ptr++;
        //cout<<(int)ptr<<endl;//��ʾ��ַ
        }
        calculate(ee);//���ֵ�ͷ���
        sortScore(ee);//��˳�����
        PandDnumber(ee);//��������ֵ����
        delete[]ee;//�ͷ��ڴ�


}



