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

Student::~Student()         //析构函数
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
	cout << "姓名：" << name << endl;
	cout << "身份证号：" << ID << endl;
	cout << "学号：" << number << endl;
	cout << "专业：" << speciality << endl;
	cout << "年龄" << age << endl << endl;
}

void Student::Input()
{
	char na[10];
	cout << "请输入姓名：";
	cin >> na;
	if (name)
		delete[]name;
	name = new char[strlen(na) + 1];
	strcpy(name, na);
	cout << "请输入身份证号：";
	cin >> ID;
	cout << "请输入年龄：";
	cin >> age;
	cout << "请输入专业：";
	cin >> speciality;
	cout << "请输入学号：";
	cin >> number;
}

