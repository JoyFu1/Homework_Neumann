#include"student.h"

Student::Student()
{
	name = NULL;
	age = 0;
}

Student::Student(char *na, char *id, char *num, char *spec, int ag)
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

Student::Student(const Student &per)
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

Student::~Student()
{
	if (name)
		delete[]name;
}

char* Student::GetName()
{
	return name;
}

char* Student::GetID()
{
	return ID;
}

int Student::GetAge()
{
	return age;
}

char* Student::GetNumber()
{
	return number;
}

char*Student::GetSpec()
{
	return speciality;
}

void Student::Display()
{
	cout << "������" << name << endl;
	cout << "���֤�ţ�" << ID << endl;
	cout << "ѧ�ţ�" << number << endl;
	cout << "רҵ��" << speciality << endl;
	cout << "����" << age << endl << endl;
}

void Student::Input()
{
	char na[10];
	cout << "������ѧ��������";
	cin >> na;
	if (name)
		delete []name;
	name = new char[strlen(na) + 1];
	strcpy( name, na );
	cout << "������ѧ�����֤�ţ�";
	cin >> ID;
	cout << "������ѧ�����䣺";
	cin >> age;
	cout << "������ѧ��רҵ��";
	cin >> speciality;
	cout << "������ѧ��ѧ�ţ�";
	cin >> number;
}


