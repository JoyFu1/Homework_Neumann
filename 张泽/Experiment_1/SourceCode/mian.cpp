/*******************************************

**���ܣ�ѧ���ɼ�����ϵͳ
**���ߣ�Zhangze/1343680145@qq.com&&LiLingzhi/saintLilz@163.com
**�汾��2018-9-23/11:30

/********************************************/

#include<iostream>
#include<stdlib.h>
#include<Windows.h>
#include"Head.h"
using namespace std;

int main()
{
    cout<<" ********************************** \n";
    cout<<"       ѧ���ɼ��������ϵͳ           \n";
    cout<<"              Zhangze                \n";
    cout<<"       Thanks for LLz's help         \n";//��л
    cout<<" ********************************** \n";


    int N=0;//NΪѧ������
    char c[20];//��ѯѧ��

    SZ *pstu=NULL;
    cout<<"��ʼ���ݶ�ȡ��������������������>>>)"<<endl;

    cout<<"��������Ҫ��ȡѧ��������"<<endl;
    cin>>N;
    pstu=readDataFromFile(N);
    //����ѧ���ܳɼ�
    calculate(pstu,N);

    //����ѧ���ɼ�����
    sortScore(pstu,N);

    //�����������ѧ����Ϣ
    printOut(pstu,N);

    //д��Excel�ļ�
    putintoExcel(pstu,N);

    //����ѧ�ż��ɲ�ѯ����
    inSpect(pstu,N);

    //���ֵ������
    calculate(pstu,N);
    system("pause");

}
