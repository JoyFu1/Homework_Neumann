#include <iostream>
using namespace std;
float checkAgeScore(int age, float score)
{
	if (age<16 || age>25)
		throw age;
	if (score<0 || score>5)
		throw score;
	return age, score;
}
struct student
{
	char name[20];
	int age;
	int score;
};
int main()
{   
	int age = 0;
	float score = 0;
	student stu[20];
	cout << "please enter your name:";
	cin >> stu->name;
	cout << "please enter your age :";
		cin >> stu->age;
		cout << "please enter your score:";
		cin >> stu->score;

//����Ƿ�����쳣
		try
		{
			cout << checkAgeScore(age, score) << endl;
		}
//�����쳣�������������һ����ʾ��Ϣ
		catch (int) 
		{
			cout << "it is wrong" << endl;
		}
		cout << "calculate finished" << endl;
	  
		system("pause");

		return 0;
}