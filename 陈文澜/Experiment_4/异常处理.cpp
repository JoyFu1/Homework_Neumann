#include<iostream>
using namespace std;

float checkAgeScore(int x, float y)
{
	if (x < 16 || x >25) 
		throw x;
	if (y < 0 || y > 5) 
		throw y;
	return y/5*100;
}
int main()
{   
	
	char name[20];
	int age;
	float score;
	cin >> name >> age >> score;
	cout << endl;
	cout << "ѧ����������" << name<<endl;
	cout << "ѧ�������䣺" << age << endl;
	try
	{   
		float checkAgeScore(int x, float y);
		score = checkAgeScore(age, score);
		cout << "ѧ���ĳɼ�Ϊ��" <<score<<"%"<< endl;
	}
	catch (int )
	{
		cout << "���䳬������ķ�Χ��" << endl;
	}
	catch (float )
	{
		cout << "�ɼ���������ķ�Χ��" << endl;
	}
	cout << "������ɼ��" << endl;
	system("pause");
	return 0;
}