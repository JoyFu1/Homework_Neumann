# include <iostream>
# include <string.h>
float checkagescore(int age, float score);
using namespace std;
int main()
{
	char a[20];
	int age, score;
	gets_s(a);
	cin >> age >> score;
	cout << "����Ϊ"<<endl;
	puts(a);
	cout << "����Ϊ" << age <<endl << "�ɼ�Ϊ" << score<<endl;
	try
	{
		cout << "�ٷ��Ƴɼ�Ϊ:"<<checkagescore(age, score)<<endl;
	}
	catch(int)
	{
		cout << "�����쳣";
	}
	system("pause");
	return 0;
}
float checkagescore(int age, float score)
{
	if (age < 16 || age>25)
		throw age;
	if (score > 5)
		throw score;
	return score*20;          //�ٷ��Ƴɼ�
}