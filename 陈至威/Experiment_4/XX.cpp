#include<iostream>
#include<math.h>

using namespace std;

struct student
{
	char name[10];
	int year;
	float score;
};

float checkAgeScore(int age, float score)
{
	if (age < 16 || age>25)
		throw age;
	if (score < 0 || score>5)
		throw score;

	if (age >= 16 && age <= 25 && score >= 0 && score <= 5)
	{
		float score2 = 20 * score;
		return score2;
	}
}

void main()
{
	student S;
	float score2;
	cout << "������ѧ�����֣�������д����";
	cin >> S.name;
	cout << endl;
	cout << "������ѧ�����䣨16��~25�꣩��";
	cin >> S.year;
	cout << endl;
	cout << "������ѧ��C++�ɼ���0~5����";
	cin >> S.score;
	cout << endl;
	cout << "������������������������ѧ �� �� Ϣ �� �¡�������������������������" << endl;
	cout << endl;

	try
	{
		score2 = checkAgeScore(S.year, S.score);
		cout << "������" << S.name << "  " << " ���䣺" << S.year << "  " << " �ɼ���" << score2 << endl;
		cout << endl;
	}
	catch (int)
	{
		cout << "���������䲻��ָ����Χ�ڣ����������룡����" << endl;
		cout << endl;

	}
	catch (float)
	{
		cout << "�������ɼ�����ָ����Χ�ڣ����������룡����" << endl;
		cout << endl;
	}


	system("pause");

}