#include"head.h"

int main()
{
	char name[20];
	int age;
	float score;
	int i;
	try              //����Ƿ�����쳣
	{
		cout << "������ѧ������:";
		cin >> name;
		cout << "�����������C++���Կ��Է�����";
		cin >> age >> score;
		cout << "����:" << name << " ���䣺" << age << " ������" <<checkAgeScore(age, score)<<endl; //������쳣���׳�
	}
	catch (int)       //�����쳣����������䲻����Ҫ�����ʾ��Ϣ
	{
		cout << "���䲻��Ҫ��Χ��" << endl;
	
	}
	catch (float)      //�����쳣���������������Ҫ�����ʾ��Ϣ
	{
		cout << "�����������" << endl;
	}
	system("pause");
	return 0;

}