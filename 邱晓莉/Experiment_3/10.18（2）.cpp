#include<iostream>
using namespace std;

void cheakAgeScore(int &age, float &score)
{

	if (age <= 16 || age >= 25)
		throw age; //�����ͬѧ����С��16����ߴ���25�꣬���׳��쳣
	
	if (score <= 0 || score >= 5)
		throw score;//�����ͬѧ�ɼ�����0���ߴ���5�����׳��쳣
	
	
}

int main()
{
	void cheakAgeScore(int age, float score);
	char name[10];
	int age;
	float score;

	cout << "�������ͬѧ�����������䡢�弶��C++���Կ��Է���" << endl;
	cin >> name >> age >> score;
	
	
	try     //����Ƿ���쳣
	{
		
		cout << "������" << name;
		void cheakAgeScore(int age,float score);
		cout << "    ���䣺" << age;
		cout<< "   �弶��C++���Կ��Է�����" << score << endl;
		
		
	}
	
	catch (int)   //�����쳣���������������һ����ʾ��Ϣ
	{
		cout << "�������벻�淶" << endl;
	}
	catch (float)  //�������1��try��Ӧ���catch
	{
		cout << "C++�ɼ����벻�淶" << endl;
	}



	

	system("pause");
	return 0;
}