#include"STUDENT.h"
#pragma warning(disable:4996)

Student::Student()      //�޲ι��캯��
{
	name = NULL;
	age = 0;
}

Student::Student(char *na, char *id, char *num, char *spec, int ag) //���ι��캯��
{
	if (na)
	{
		name = new char[strlen(na) + 1]; //����ǳ����
		strcpy(name, na);
	}
	strcpy(ID, id);
	strcpy(number, num);
	strcpy(speciality, spec);
	age = ag;
}

Student::Student(const Student &per)  //�������캯��
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

Student::~Student()       //��������
{
	if (name)
		delete[]name;
}
char* Student::GetName()    //��ȡ����
{
	return name;
}

char* Student::GetID()    //��ȡ���֤
{
	return ID;
}

char* Student::GetNumber()    //��ȡѧ��
{
	return number;
}

char* Student::GetSpec()   //��ȡרҵ
{
	return speciality;
}

int Student::GetAge()   //��ȡ����
{
	return age;
}

void Student::Display()  //���������Ϣ
{
	cout << "��  ���� " << name << endl;
	cout << "���֤�� " << ID << endl;
	cout << "ѧ  �ţ� " << number << endl;
	cout << "ר  ҵ�� " << speciality << endl;
	cout << "��  �䣺 " << age << endl;
}

void Student::Input()
{
	char na[10];
	cout << "������  ���� ";
	cin >> na;
	if (name)
		delete[]name;
	name = new char[strlen(na) + 1];
	strcpy(name, na);
	cout << "�������֤:��";
	cin >> ID;
	cout << "������  ��:  ";
	cin >> age;
	cout << "����ר  ҵ:  ";
	cin >> speciality;
	cout << "����ѧ  ��:  ";
	cin >> number;
}