#include <iostream>
using namespace std;
float checkAgeScore(int age, float score)
{
	
	if (age < 16 || age>25||score<0||score>5)
		throw 0;
	return (score * 20);
}
int main()
{
	char name[100];
	int age;
	float score;
	cin >> name[100]>>age>>score;
	try
	{
		checkAgeScore(age,score) ;
	}
	catch (int)
	{
		cout << "�����쳣" << endl;
	}
	cout << "ѧ������:" << name[100] << endl;
	cout << "ѧ������:" << age << endl;
    cout << "ѧ���ɼ�:" << checkAgeScore(age, score) << endl;
 
	system("pause");
	return 0;
}