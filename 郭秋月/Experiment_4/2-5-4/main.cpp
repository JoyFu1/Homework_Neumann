#include<iostream>
#include<cmath>

using namespace std;

struct student
{
	char name[10];
	int age;
	float score;
};
//�ٷ��Ƽ��㺯��
float checkAgeScore(int age, float score)
{
	if (age<16 || age>25) throw age;//�׳�
	if (score<0 || score>5) throw score;//�׳�
	if (age >= 16 && age <= 25 && score >= 0 && score <= 5)
	{
		float score2 = 20 * score;
		return score2;
	}
}
int main()
{
	student A;
	float score2;
	cout << "������һ��ѧ����������" << endl;
	cin >> A.name;
	cout << "����������(16����25)��" << endl;
	cin >> A.age;
	cout << "�������弶��C++���Կ��Է���(0����5)��" << endl;
	cin >> A.score;
	try
	{
		score2=checkAgeScore(A.age, A.score);
		cout << "name:" << A.name << "  age:" << A.age << "  score:" << score2 << endl;
	}
	catch (int)
	{
		cout << "Warning:Age is out of the question!";
	}
	catch (float)
	{
		cout << "Warning:Score is out of the question!";
	}
	return 0;
}
