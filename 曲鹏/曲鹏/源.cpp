#include <iostream>
#include <string>
using namespace std;
#include "��ͷ.h"
student::student()
{
	name = NULL;
	age = 0;
}
student::student(char *na, char *id, char *num, char *spec, int ag)
{
	if (na)
	{
		name = new char(strlen(na) + 1);
		strcpy_s(name, strlen(na) + 1, na);
	}
	strcpy_s(ID,strlen(id)+1, id);
	strcpy_s(number, strlen(num) + 1, num);
	strcpy_s(speciality, strlen(spec) + 1, spec);
	age = age;
}
student::student(const student &per)
{
	if (per.name)
	{
		name = new char(strlen(per.name) + 1);
		strcpy_s(name, strlen(per.name) + 1, per.name);
	}
	strcpy_s(ID, strlen(per.ID) + 1, per.ID);
	strcpy_s(number, strlen(per.number) + 1, per.number);
	strcpy_s(speciality, strlen(per.speciality) + 1, per.speciality);
	age = age;
}
student::~student()
{
	if (name)
	{
		delete[]name;
	}
}
char* student::getname()
{
	return name;
}
char* student::getid()
{
	return ID;
}
int student::getage()
{
	return age;
}
char* student::getspec()
{
	return speciality;
}
char* student::getnumber()
{
	return number;
}
void student::display()
{
	cout << "����" << name << endl;
	cout << "���֤" << ID << endl;
	cout << "ѧ��" << number << endl;
	cout << "רҵ" << speciality << endl;
	cout << "����" << age << endl;
}
void student::input()
{
	char na[10];
	cout << "��������" << endl;
	cin >> na;
	if (name)
	{
		delete[]name;
	}
	name = new char(strlen(na) + 1);
	strcpy_s(name, strlen(na) + 1, na);
	cout << "�������֤����" << endl;
	cin >> ID;
	cout << "��������" << endl;
	cin >> age;
	cout << "����רҵ" << endl;
	cin >> speciality;
	cout << "����ѧ��" << endl;
	cin >> number;
}