#include<iostream>
using namespace std;
const int n = 20;
int sortnumber(int *ptr,int &n)//ͳ�������͸����ĸ�������������еľ�ֵ�ͷ���
{
	int i = 0, x = 0, t = 0, m = 0;//xΪÿһ�������������ܺ�,mΪͳ�������ĸ�����nͳ�Ƹ����ĸ���
	cout << "�������ݣ� ";
		for (i = 0; i < n; i++)
		{
			cin >> ptr[i];
			x += ptr[i];
			if (ptr[i] >= 0)
			{
				m++;//ͳ�������ĸ���
			}
			else
			{
				t++;//ͳ�Ƹ����ĸ���
			}

		}
	double z = 0, y = 0;//zΪ��ֵ��yΪ����
	z = x / n;
	for (i = 0; i <n; i++)//���㷽��
	{
		y +=(ptr[i] - z)*(ptr[i] - z);//��֪��Ϊʲô  y+=(1/n)*(ptr[i] - z)*(ptr[i] - z)���ִ��󣬽�1/n�������ʱ��y/n������ɹ�
	
	}
	cout << "�����ĸ����� " << m << endl << "�����ĸ����� " << t << endl << "��ֵ�� " << z << endl << "��� " << y/n << endl;
	int j = 0;
	//���ֵ�����(ð������)
	for (i = 0; i <n-1; i++)
	{
		for (j = 0; j < n-i-1; j++)
		{
			if (ptr[j]>=ptr[j + 1])
			{
				int p;
				p = ptr[j];
				ptr[j] = ptr[j + 1];
				ptr[j + 1] = p;
			}
		}
	}
	cout << "���ݴ�С�����˳������:";
	for (i = 0; i <n; i++)
	{
		cout << ptr[i];
		if (i < n - 1)
		{
			cout <<",";
		}
	}
	cout << endl;
	return 0;
}
int main()
{
	int sortnumber(int *ptr,int &n);//����sortnumber����
	int *ptr;
	ptr = new int[20];
	int n;//�������ֵĸ���
	cout << "�������ֵĸ����� "  << endl;
	cin >> n;
	if (n > 20)
	{
		cout << "error" << endl;
		exit(1);
	}
	else
	{
		sortnumber(ptr,n);
	}
	delete []ptr;
	system("pause");
	return 0;

}