#include <iostream>
#include<math.h>
using namespace std;
void main()
{
	int * p = new int[20];
	cout << "����20������"<< endl;
	//ͳ�����������ĸ���
	int Pos_num = 0, Neg_num = 0,i,sub=0;
	double averge;
	for (int i = 0; i < 20; i++)
	{
		cin >> p[i];
	}

	for (i = 0; i < 20; i++)
     { 
		

		if (p[i] > 0) Pos_num++;
		else if (p[i] < 0) Neg_num++;
		sub += p[i];
		
	}averge=sub / 20.0;  //����ƽ��ֵ
	//���㷽��
	double variation;
	for (i = 0; i < 20; i++)
	{
		double fc =0.0;
		fc += (averge - p[i])*(averge - p[i]);
		variation= fc/20.0;
		

	}
	//��20��������С��������
	for (int j = 0; j < 20; j++)
	{
		for (i = 0; i < 19 - j; i++)
		{
			int temp;
			if (p[i] > p[i + 1])
			{
				temp = p[i];
				p[i] = p[i + 1];
				p[i + 1] = temp;
			}
		}
	}cout << "����С��������Ϊ" << endl;
	for (i = 0; i < 20; i++)
	{
		cout<< p[i] << " ";
	}
	cout << endl;
	cout << "��������: " << Pos_num << endl;
	cout << "�������� : " << Neg_num << endl;
	cout << "��ֵ:" << averge << endl;
	cout<< "����:" << variation << endl;
	delete[]p;
	system("pause");
}

