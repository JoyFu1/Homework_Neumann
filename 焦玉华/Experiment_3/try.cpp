#include<iostream>

using namespace std;

float checkAgeScore(int age,float score)
{
	if (age<16 || age>25)    throw age;
	if (score<0 || score>5)    throw score;
	return score;
}
int main()
{
	  char name[10];
       int age;
       int score;
	 cout << "������  " << endl;
		cin >>  name ;
		cout << "���䣺  " << endl;
		cin >> age ;
		cout << "�ɼ���  " <<endl;
		cin >>  score ;
		try
		{
			cout << "ѧ��������  " << name << endl;
			cout << "ѧ�����䣺  " << checkAgeScore(age, score) << endl;
			cout << "ѧ���ɼ���  " << checkAgeScore(age,score)<< endl;
		}
	catch ()
	{
		cout << "error of input" << endl;

	}
	cout << "calculate finished" << endl;
	system("pause");
	return 0;
}