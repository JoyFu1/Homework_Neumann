#include<iostream>
using namespace std;
int Fun(const int &x,int &y,int z)    //�Ե�һ��ʵ�ʲ�������������ֻ�ܷ��ʲ����޸�
{
	//x++;        //�˾�����Ϊ��������䣬�򱨴���const���ƺ�ֻ��
	            //����x�������޸�x
	z++;        //��ֵ��ʽ�������޸Ĳ���Ӱ���Ӧ��ʵ�ʲ�������
	y=x+y+z;    //ͨ���޸�y�ı�ڶ���ʵ�ʲ���������ֵ
	return y;
}
int main()
{
	int a=1,b=2,c=3,d=0;
	cout<<"a="<<a<<"b="<<b<<"c="<<c<<"d="<<d<<endl;
	d=Fun(a,b,c);   //��һ��ʵ�ʲ����͵�����ʵ�ʲ����������ܱ��޸�
	cout<<"a="<<a<<"b="<<b<<"c="<<c<<"d="<<d<<endl;
	return 0;
}
