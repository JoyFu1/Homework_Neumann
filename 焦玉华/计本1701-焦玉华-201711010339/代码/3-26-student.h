#ifndef _STUDENT
#define _STUDENT
#include <iostream>
#include <cstring>

using namespace std;

#define SIZE 80
class Student
{
	char *name; //����
	char number[10];//ѧ��
	int age;//����
public:
	Student();//�޲ι��캯��
	Student(char *na, char *num, int ag);//���ι��캯��
	Student(const Student &per);//��������
	~Student();//��������
	char* Getname();//��ȡ����
	char* Getnumber();//��ȡѧ��
	int Getage();//��ȡ����
	void Display();//��ʾѧ����Ϣ
	void Input();//����ѧ����Ϣ
};
#endif