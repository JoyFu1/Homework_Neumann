#include<iostream>
#include"a.head.h"
using namespace std;

void zhengfu(int *p)
{
    int sum1 = 0, sum2 = 0;
    for(int l = 0; l < n; l++)
    {
        if(p[l] > 0)
            sum1++;
        if(p[l] < 0)
            sum2++;
    }
    cout<<"����������"<<sum1<<" ,����������"<<sum2<<endl;
}
void fp(int *p)
{
    float sum = 0, avg;
    for(int i = 0; i < n; i++)
    {
        sum = sum + p[i];
    }
    avg = (float)(sum / n);
    cout<<"ƽ����Ϊ = "<<avg<<endl;

    float sum3 = 0, var;
	for (int m = 0; m < n; m++)
	{

		sum3 = (float)(sum3 + (p[m] - avg)*(p[m] - avg));
	}
	var = (float)(sum3 / n);
    cout<<"����Ϊ = "<<var<<endl;
}

void rank(int *p)
{
    for(int d = 0; d < n; d++)
        for(int j = 0; j < n - d - 1; j++)
            if(p[j]>p[j + 1])
            {
                int temp = p[j];
                p[j] = p[j + 1];
                p[j + 1] = temp;
            }
    cout<<"������Ϊ��"<<endl;
    int g = 0;
    while(g < n)
        {
            cout<<p[g]<<" ";
            ++g;
        }
    cout<<endl;
}