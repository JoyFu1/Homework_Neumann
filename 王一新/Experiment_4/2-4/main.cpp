#include<iostream>
#include<stdlib.h>
using namespace std;

struct student
{
	char name[10];
	int age;
	float score;
};

float checkAgeScore(int age,float score)
{
	if(age<16||age>25)throw age;
	if(score<0||score>5)throw score;
	if (age >= 16 && age <= 25 && score >= 0 && score<= 5)
	{
		float grade=score*20;//�ٷ��Ƴɼ�
		return grade;
	}
}

int main()
{
	student A;
	float grade;
	cout << "����������:" << endl;
	cin >> A.name;
	cout << "����������:" << endl;
	cin >> A.age;
	cout << "������c++�ɼ�:" << endl;
	cin >> A.score;
	try
	{
		grade=checkAgeScore(A.age, A.score);//����⺯��
		cout << "name: " << A.name << ", age: " << A.age << ", score: " << grade << endl;
	}
	catch (int)//�����쳣����
	{
		cout << "Warning: Age is wrong!";
	}
	catch (float)//�����쳣�ɼ�
	{
		cout << "Warning: Score is wrong!";
	}
	system("pause");
}