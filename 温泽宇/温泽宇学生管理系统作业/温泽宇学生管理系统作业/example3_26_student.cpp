#include"example3_26_student.h"
#include<iostream>
#include<string>
using namespace std;
Student::Student()
{
	name = NULL;
	age = 0;
}
Student::Student(char *na, char *id, char *num, char *spec, int ag)
{
	if (na)
	{
		name = new char[strlen(na) + 1];//����ǳ����
		strcpy(name, na);
	}
	strcpy(ID, id);
	strcpy(number, num);
	strcpy(specialty, spec);
	age = ag;
}
Student::Student(const Student &per)
{
	if (per.name)
	{
		name = new char[strlen(per.name) + 1];
		strcpy(name, per.name);
	}
	strcpy(ID, per.ID);
	strcpy(number, per.number);
	strcpy(specialty, per.specialty);
	age = per.age;
}
Student::~Student()//�����������ݶ���
{
	if (name)
	{
		delete[]name;
	}
}
char *Student::GetName()//��ȡ����
{
	return name;
}
char *Student::GetID()//��ȡ���֤
{
	return ID;
}
int Student::GetAge()//��ȡ����
{
	return age;
}
char *Student::GetNumber()//��ȡѧ��
{
	return number;
}
char *Student::GetSpec()//��ȡרҵ
{
	return specialty;
}
void Student::Display()//���������Ϣ
{
	cout << "�� ����" << name << endl;
	cout << "���֤��" << ID << endl;
	cout << "ר ҵ��" << specialty << endl;
	cout << "ѧ �ţ�" << number << endl;
	cout << "�� �䣺" << age << endl;
}
void Student::Input()//��������
{
	char na[10];
	cout << "���� �� ����";
	cin >> na;
	if (na)
		delete[]name;
	name = new char[strlen(na) + 1];
	strcpy(name, na);
	cout << "�������֤�ţ� ";
	cin >> ID;
	cout << "������ �䣺 ";
	cin >> age;
	cout << "����ר ҵ��";
	cin >> specialty;
	cout << "����ѧ �ţ�";
	cin >> number;
	
}

	