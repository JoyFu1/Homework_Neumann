#include"student.h"
student::student()//�������޲εĹ��캯��
{
	name = NULL;
	age = 0;
}
student::student(char *n, char *id, char *num, char *spe, int ag)//���ò����Ĺ��캯��
{
	if (n)
	{
		name = new char[strlen(n) + 1];//����ǳ����
		strcpy(name, n);
	}
	strcpy(ID, id);
	strcpy(number, num);
	strcpy(speciality, spe);
	age = ag;
}
student::~student()//������������
{
	if (name)
		delete[]name;
}
char *student::Getname()//��ȡ����
{
	return name;
}
char *student::GetID()//��ȡ���֤
{
	return ID;
}
char *student::Getnumber()//��ȡѧ��
{
	return number;
}
char *student::Getspec()//��ȡרҵ
{
	return speciality;
}
int student::Getage()//��ȡ����
{
	return age;
}
void student::display()//���ѧ������Ϣ
{
	cout << "����:" << name << endl;
	cout << "���֤:" << ID << endl;
	cout << "ѧ��:" << number << endl;
	cout << "רҵ:" << speciality << endl;
	cout << "����:" << age << endl;
}
void student::input()//����ѧ������Ϣ
{
	char n[10];
	cout << "��������:";
	cin >> n;
	if (name)
		delete[]name;
	name = new char[strlen(n)+1];
	strcpy(name, n);
	cout << "�������֤:"<<endl;
	cin >> ID;
	cout << "��������:"<<endl;
	cin >> age;
	cout << "����רҵ:" << endl;
	cin >> speciality;
	cout << "����ѧ��:"<<endl;
	cin >> number;
}