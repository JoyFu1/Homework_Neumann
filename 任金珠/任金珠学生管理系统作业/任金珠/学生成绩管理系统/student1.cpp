#include "student.h"
#include <iostream>
Student::Student()
{
	name = NULL;
	age = 0;
}
Student::Student(char *na, char *id, char *num, char *spec, int ag)
{
	if (na)
	{
		name = new char(strlen(na) + 1);
		strcpy(name, na);
	}
	strcpy(ID, id);
	strcpy(number, num);
	strcpy(specialty,spec);
	age = ag;

}
Student::Student(const Student &per)
{
	if (per.name)
	{
		name = new char(strlen(per.name) + 1);
		strcpy(name,per.name);
	}
	strcpy(ID,per.ID);
	strcpy(number,per.number);
	strcpy(specialty,per.specialty);
	age = per.age;
}
Student::~Student()
{
	if (name)
		delete[]name;
}
char *Student::GetName()
{
	return name;
}
char *Student::GetID()
{
	return ID;
}
char *Student::GetNumber()
{
	return number;
}
char *Student::GetSpec()
{
	return specialty;
}
int Student::GetAge()
{
	return age;
}
void Student::Display()
{
	cout << "���� " << name << endl;
	cout << "���֤ " << ID << endl;
	cout << "ѧ�� " << number << endl;
	cout << "רҵ " << specialty << endl;
	cout << "���� " << age << endl;
}
void Student::Input()
{
	char na[10];
	cout << "����������";
		cin >> na;
	if (name)
	{
		delete[]name;
	}
	name = new char[strlen(na) + 1];
	strcpy(name,na);
	cout << "�������֤��";
		cin >> ID;
		cout << "����ѧ�ţ�";
		cin >> number;
		cout << "����רҵ��";
		cin >> specialty;
		cout << "�������䣺";
		cin >> age;
}


