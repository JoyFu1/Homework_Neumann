#include<iostream>
#include<Windows.h>
using namespace std;
int  checkAge(int x)
{
	if (x< 16 || x>25)
		throw x;
	return x;	
}
float checkScore(float y)
{
	if (y < 0 || y>5)
		throw y;
	return y;
}
int main()
{
	char name[20];
	int age;
	float score;
	cin >> name >> age >> score;
	try
	{
		int  checkAge(int age);
		float checkScore(float score);

		cout << "����:" << name << endl;
		cout << "����:" << checkAge(age) << endl;
		cout << "����:" << checkScore(score) << endl;
	}
	catch (int)
	{
		cout << "�����������" << endl;
	}
	cout << "�������" << endl;

	catch (float)
	{
		cout << "�����������" << endl;
	}

	cout << "�������" << endl;
	system("pause");
	return 0;
}