# include <iostream>
using namespace std;
double avery(int a[], int n);
double variance(int a[], int n);
void sort(int a[], int n);
int main()                                           //������������������ŵ�����a[]
{
	int *ptr, a[10];
	int p = 0, q = 0;
	double aver��var;
	ptr = new int[10];
	cout << "please enter 10 data";
	for (int i = 0; i < 10;i++)
	{
		cin >> a[i];
	}
	for (int i = 0;i < 10 ; i++)                    //��������ͳ�������������ŵĸ���
	{
		if (a[i] >= 0)
		{
			p++;
		}
		if(a[i]<0)
			q++;
	}
	cout << "�Ǹ�������Ϊ" << p << endl<< "����Ϊ����" << q << endl;
	avery(a, 10);
	cout << "��ֵΪ" << avery(a, 10)<<endl;           //���������е��ü����ֵ�ĺ���
	variance(a,10);
	cout << "����Ϊ" << variance(a, 10) << endl;      //���������е��ü��㷽��ĺ���
	cout<< "��С��������Ϊ"  << endl;               //���������е�������ĺ���
	sort(a, 10);
	system("pause");                               //��������delete�ͷſռ�
	delete[]a;
}
double avery(int a[], int n)//                  �Ӻ����м����ֵ
{
	double sum = 0.0,aver;
	for (int i = 0;i < n; i++)
	{
		sum += a[i];
	}
	aver = sum / n;
	return aver;
}
double variance(int a[], int n)             //�Ӻ����м��㷽��
{
	double var= 0;
	for (int i = 0;i < n; i++)
	{
		var += (a[i] - avery(a, 10))*(a[i] - avery(a, 10));
		
	}
	return var;
}
void sort(int a[], int n)                   //�Ӻ���ѡ����������
{
	int max,t;
	for (int i = 0;i < n; i++)
	{
		max = i;
		for (int j = i + 1;j < n; j++)
			if (a[j] < a[max])
				max = j;

		if (i!=max)
		{
			t = a[i];
			a[i] = a[max];
			a[max] = t;
		}
	}
	for (int i = 0; i < n;i++)
	{
		cout << a[i] << " ";
	}
}



