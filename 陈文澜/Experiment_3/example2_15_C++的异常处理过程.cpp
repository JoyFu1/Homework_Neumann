/*---------------------------------------------------------*
//example2_15.cpp��C++���쳣������̺ͷ���ʾ��
*---------------------------------------------------------*/
/*try Ϊ����쳣 throw Ϊ�׳��쳣 catch Ϊ��׽�쳣*/
#include <iostream>
using namespace std;

int divide(int x, int y)
{
	if (y == 0) throw y;                 //�����ĸΪ�㣬�׳��쳣����ĸΪ0û�����壩
	return x / y;
}


int main()
{
	int a = 10, b = 5, c = 0;

	try                                 //����Ƿ�����쳣
	{
		cout << "a/b=" << divide(a, b) << endl;
		cout << "b/a=" << divide(b, a) << endl;
		cout << "a/c=" << divide(a, c) << endl;//����������쳣�����Գ�������catch
		cout << "c/b=" << divide(c, b) << endl;
	}
	catch (int)                        //�����쳣���������������һ����ʾ��Ϣ
	{
		cout << "except of divide zero" << endl;
	}

	cout << "calculate finished" << endl;  	//catch��ĺ������
	system("pause");
	return 0;
}
/*
 throw<���ʽ>;��throw;  throw y;Ϊ�ڶ���
 һ����try ��ǰ��catch�ں��棬���α�
 try{

 <�������쳣�������>

    } 
	catch(<�쳣��Ϣ����>��<����>)
	{
	<�쳣�������>
	}

 */