#include<iostream>
#include<stdio.h>
using namespace std;
float checkagescore(int age, float score)
{
	if (age < 16 || age>25 )
	{
		throw age;
	}
	if (score < 0 || score>5)
	{
		throw score;
	}
	
	return score/5*100;
}



int main()
{
	float checkagescre(int age, float score);//��������
	char name[50];
	int age;
	float score;
	cout << "������ѧ��������";
	cin >> name;
	cout << endl;
	cout << "������ѧ�������䣺";
	cin >> age;
	cout << endl;
	cout << "������ѧ����c++���Է�����";
	cin >> score;
	cout << endl;

	try
	{
		cout<<"score:"<< checkagescore(age, score) <<endl;
	}
	catch (int)
	{
		cout << "������������󣬲���16-25��Χ֮��" << endl;
	}
	catch (float)          
	{
		cout << "�����c++���Է������󣬲���0-5��Χ֮��" << endl;
	}
	cout << "�����������"<<endl;
	system("pause");
	return 0;
}