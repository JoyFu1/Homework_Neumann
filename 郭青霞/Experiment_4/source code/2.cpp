#include<iostream>
#include<windows.h>

using namespace std;

float checkAgeScore(int age, float score)
{
	if (!(age >= 18 && age <= 25))      //���age��Χ�������׳��쳣
		throw age;



	if (!(score >= 0 && score <= 5))     //���score��Χ�������׳��쳣
		throw score;

	return score * 20;


}


int main()
{
	char name[10];
	int age;
	float score;
	cout << "������ѧ��������";
	cin >> name;
	cout << endl << "������ѧ�����䣺";
	cin >> age;
	cout << endl << "������ѧ��C++�ٷ��Ƴɼ���";
	cin >> score;
	cout << endl;

	try          //����Ƿ�����쳣
	{
		cout << "ѧ��������" << name << endl << "��ѧ������Ϊ��" << age << endl << "��ѧ��C++�ٷ��Ƴɼ�Ϊ��" << checkAgeScore(age, score) << endl;
		//checkAgeScore(age, score);
	}
	catch (float)     //�����쳣���������������һ����ʾ��Ϣ
	{
		cout << "error" << endl;

	}
	cout << "calculate finished" << endl;   //catch��ĺ������
	system("pause");
	return 0;
}