	#include<iostream>
using namespace std;

int main()
{
	int *ptr;
	ptr = new int[20];//����new��������20��int��С���ڴ�ռ�ʵ�ֶ�̬һά����
	int i,a = 0, b = 0;//����i��������a�����㸺���ĸ�����bΪ�����ĸ���
	cout <<"please enter 20 numbers,except 0 "<< endl;//�û�����20����0���������
	for (i = 0; i < 20; i++)
	{
		cin >> ptr[i];

		if (ptr[i] < 0)//����������С��0��a+1
			a++;
		if (ptr[i] > 0)
			b++;//��������������0��b+1
     }
	cout << "��������Ϊ��" << a << endl;
	cout << "��������Ϊ��" << b << endl;
	int m, s, sum = 0,sum2=0;//����ƽ����Ϊm,����Ϊs��sumΪ��20�����ĺͣ�sum2Ϊ20������ƽ��ֵ���ƽ�����ܺ�
	for (i = 0; i <20; i++)
		sum = sum + ptr[i];

		m = sum /20;
		cout << "��20������ƽ��ֵΪ��" << m << endl;
	for (i = 0; i <20; i++)
		sum2 =sum2+ (ptr[i] - m)*(ptr[i] - m);
	s = sum2 / 20;
	cout << "��20�����ķ���Ϊ��" << s << endl;
int j,t;
	for (i = 0; i<20; i++)
	{
	    for(j=i+1;j<20;j++)
		{
		    if (ptr[i]>ptr[j])
            {
                t = ptr[j];
                ptr[j] = ptr[i];
                ptr[i] = t;

            }
		}
	}
	cout << "��20������С���������Ϊ��" << endl;
	for (i = 0; i < 20; i++)
		cout << ptr[i] << endl;




		delete[]ptr;

	return 0;
}


