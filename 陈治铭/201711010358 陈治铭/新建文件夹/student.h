#pragma once
#ifndef _STUDENT          //��������
#define _STUDENT
#include <iostream>
#include <string.h>
using namespace std;
#define SIZE 80

class Student
{
public:
	Student();          //�޲ι��캯��
	Student(char *na, char *id, char *num, char *spec, int ag);           //���ι��캯��
	Student(const Student &per);          //�������캯��
	~Student();             //��������
	char* GetName();       //��ȡ����
	char* GetID();         //��ȡ���֤
	char* GetNumber();     //��ȡѧ��
	char* GetSpec();       //��ȡרҵ
	int  GetAge();         //��ȡ����
	void DisPlay();        //��ʾѧ����Ϣ
	void InPut();          //����ѧ����Ϣ

private:
	char *name;              //����
	char ID[19];             //���֤
	char number[10];        //ѧ��
	char speciality[20];   //רҵ
	int age;                //����
};

Student::Student()
{
	name = NULL;
	age = 0;
}

Student::Student(char *na, char *id, char *num, char *spec, int ag)
{
	if (na)
	{
		name = new char[strlen(na) + 1];            //����ǳ����
		strcpy(name,na);
	}
	strcpy(ID, id);
	strcpy(number, num);
	strcpy(speciality, spec);
	age = ag;
}

Student::Student(const Student &per)            //�������캯�����ڴ�����û���õ���
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

Student::~Student()          //��������
{
	if (name)
		delete[]name;
}
char* Student::GetName()        //��ȡ����
{
	return name;
}
char* Student::GetID()         //��ȡ���֤
{
	return ID;
}
char* Student::GetNumber()        //��ȡѧ��
{
	return number;
}
char* Student::GetSpec()           //��ȡרҵ
{
	return speciality;
} 
int Student::GetAge()            //��ȡ����
{
	return age;
}

void Student::DisPlay()          //���������Ϣ
{
	cout<<"�� ��:"<<name<<endl;
	cout << "���֤:" <<ID<< endl;
	cout << "ѧ ��:" <<number<< endl;
	cout << "ר ҵ:" <<speciality<< endl;
	cout << "�� ��:" <<age<< endl;
}

void Student::InPut()              //��������
{
	char na[10];
	cout << "������ ��:" ;
	cin >> na;
	if (name)
		delete[]name;
	name = new char[strlen(na) + 1];
	strcpy(name, na);
	cout << "�������֤:";
	cin >> ID;
	cout << "���� ����:";
	cin >> age;
	cout << "����ר ҵ:";
	cin >> speciality;
	cout << "����ѧ ��:";
	cin >> number;
}













#endif // !_STUDENT

