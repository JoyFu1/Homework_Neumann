#include<iostream>
using namespace std;
int checkAge(int age)
{
	
	if (age < 16 || age >= 26)throw age;
	return age;
}
float checkScore(float score)
{

	if (score < 0 || score >= 6)throw score;
	return score * 20;
}
int main() 
{
	char name[6];
	int age;
	float score;
	cout << "����ѧ������" << endl;
	for(int i=0;i<=5;i++)
	{
		cin >> name[i];
	}
	cout << "����ѧ������" << endl;
	cin >> age ;
	cout << "����ѧ������" << endl;
	cin >> score;
	try
	{
		cout << "����:" <<endl;

		for(int i=0;i<=5;i++)
		{
			cout  << name[i] << " ";
		}
		
    cout << "����:" << checkScore(score) << endl;
	cout << "����:" << checkAge(age) << endl;

	}
	catch (int)
	{
		cout << "����β�����" << endl;
	}
	catch (float)
	{
		cout << "������Χ������" << endl;
	}
	cout << "������" << endl;
    system("pause");
	return 0;
}