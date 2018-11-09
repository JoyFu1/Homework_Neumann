#include "student.h"
student::student()
{
	name = NULL;
	age = 0;
}
student::student(char *na, char *id, char *num, char *spec, int ag)
{
	if (na)
	{
		name = new char[strlen(na) + 1];
		strcpy(name, na);
	}
	strcpy(ID, id);
	strcpy(number, num);
	strcpy(speciality, spec);
	age = ag;
}

student::student(const student &per)
{
	if (per.name)
	{
		name = new char[strlen(per.name) + 1];
		strcpy(name, per.name);
	}
	strcpy(ID, per.ID);
	strcpy(number, per.number);
	strcpy(speciality, per.speciality);
	age = per.age;
}
student::~student()
{
	if (name)
		delete[]name;

}

char* student::Getname()
{
	return name;
}

char *student::Getnumber()
{
	return number;
}
char *student::Getspec()
{
	return speciality;
}
int student::GetAge()
{
	return age;
}

void student::Display()
{
	cout << "������" << name << endl;
	cout << "���֤��" << ID << endl;
	cout << "ѧ��:" << number << endl;
	cout << "רҵ��" << speciality << endl;
	cout << "���䣺" << age << endl << endl;
}

void student::Input()
{
	char na[10];
	cout << "������������";
	cin >> na;
	if (name)
		delete[]name;
	name = new char[strlen(na) + 1];
	strcpy(name, na);
	cout << "���������֤��";
	cin >> ID;
	cout << "���������䣺";
	cin >> age;
	cout << "������רҵ��";
	cin >> speciality;
	cout << "������ѧ��";
	cin >> number;
}