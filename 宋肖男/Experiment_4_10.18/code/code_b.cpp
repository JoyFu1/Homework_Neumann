#include "iostream"
#include "windows.h"
using namespace std;
float checkagescore(int age, float score)
{
	if (age < 16 || age>25) throw age;
	if (score < 0 || score>5) throw score;
	return 20 * score;
}
int main()
{
	char name[10];
	int age;
	float score;
	cout << "������ѧ����������";
	gets_s(name);
	cout << endl;
	cout << "������ѧ�������䣺";
	cin >> age;
	cout << endl;
	cout << "������ѧ�����弶��C++���Է�����";
	cin >> score;
	cout << endl;
	try
	{
		cout << name << "ͬѧ�������ǣ�" << age << "���ٷ��Ƴɼ�Ϊ��" << checkagescore(age, score) << endl;
	}
	catch (int)
	{
		cout << "������������д���" << endl;
	}
	catch (float)
	{
		cout << "������ĳɼ��д���" << endl;
	}
	cout << "Finished!" << endl;
	system("pause");
	return 0;
}

