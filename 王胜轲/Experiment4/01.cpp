#include<iostream>
using namespace std;
float checkAgeScore(int age, float score)
{
	try
	{
		age >= 16 && age <= 25;
	}
	catch (int)
	{
		cout << "�ÿ������䲻��" << endl;
	}
	try
	{
		score >= 0 && score <= 5;
	}
	catch (float)
	{
		cout << "�ÿ����ɼ���Ч" << endl;
	}
	return 20 * score;
}
int main()
{
	char name[20];
	int age;
	float score;
	cout << "������ѧ����������" << endl;
	cin >> name;
	cout << "���䣺" << endl;
	cin >> age;
	cout << "������" << endl;
	cin >> score;
	checkAgeScore(age, score);

}