#include<string>
#include<iostream>
#include<windows.h>
using namespace std;
class Student
{
	char *specialty;
public:
	Student{ char *pSpec = 0 };//���캯������
	~Student();
	void Show();
};
Student::Student(char *pSpec)//���캯���Ķ���
{
	if (pSpec)
	{
		specialty = new char[strlen(pSpec) + 1];
		strcpy(specialty, pSpec);
	}
	else specialty = 0;
}
Student::~Student()
{
	if (specialty)
		delete[]specialty;//��������ʵ��
}
void Student::Show()
{
	cout << "specialty=" << specialty << '\n';
}
int main()
{
	Student zhang("computer");//������ͨ���캯��
	Student wang(zhang);//����ϵͳ�ṩ��Ĭ�Ͽ������캯��
	zhang.Show();
	wang.Show();
	system("pause");
	return 0;
}