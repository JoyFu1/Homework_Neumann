#include<iostream>
using namespace std;
float checkAgeScore(int age, float score)
{
	if (age < 16 || age>25)
		throw age;
	if (score < 0 || score>5)
		throw score;
	return 20*score;
		
}
int main()
{

	float checkAgeScore(int age, float score);
	char name[20];
	int age;
	float score;
	cout << "�����룺" << endl;
	cin >> name >> age >> score;
	//�׳��쳣
	try
	{
		cout << "������" << name;
		checkAgeScore(age,  score);
		cout << "   ���䣺" << age;
		cout << "   ������" << checkAgeScore(age,score);

	}
	//��׽�쳣
	catch (int)
	{
		cout << "  ���䲻����" << endl;
	}

	catch (float)
	{
		cout << "   ����������" << endl;
	}
	system("pause");
	return 0;
	
}