#include<iostream>
using namespace std;
//ѧ���ṹ��
struct student
{
	char name[20];
	int age;
	float score;
};
//��⺯��
float checkAgeScore(int age, float score)
{
	if (age < 16 || age>25)
		throw age;
	if (score < 0 || score>5)
		throw score;
	if (age >= 16 && age <= 25 && score >= 0 && score <= 5)
		
	return age,score;
}
void main()
{
	int age;
	float score;
	student S;
	cout << "please input name" << endl;
	cin >> S.name;
	cout << "please input age(16-25)" << endl;
	cin >> S.age;
	cout << "please input score(0-5)" << endl;
	cin >> S.score;
	try
	{
		 score=checkAgeScore(S.age,S.score);
		 cout << "name:" << S.name << endl;
		 cout << "age:" << S.age << endl;
		 cout << "score:" << S.score*20 << endl;

	}
	
	catch (int)//�����쳣����
	{
		cout << "���䳬����Χ";
	}
	catch (float)//�����쳣�ɼ�
	{
		cout << "�ɼ����ڷ�Χ��";
	}
	system("pause");

}