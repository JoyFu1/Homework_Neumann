#ifndef _STUDENT //��������
#define _STUDENT
#include<iostream>
#include<string>
using namespace std;
#define SIZE 80
class Student
{
	char *name;                        //����
	char ID[10];                       //���֤��
	char number[10];                  //ѧ��
	char specialty[20];               //רҵ
	int age;                          //����
public:

	Student();
	Student(char *na, char *id, char *num, char *spec, int ag);                             //���ι��캯��
	Student(const Student &per);                                                            //�������캯��
	~Student();                                                                             //��������
	char *GetName();                                                                        //��ȡ����
	char *GetID();                                                                          //��ȡ����
	char *GetNumber();                                                                      //��ȡѧ��
	char *GetSpec();                                                                         //��ȡרҵ
	int GetAge();                                                                            //��ȡ����
	void Display();                                                                          //��ʾѧ����Ϣ
	void Input();                                                                            //���ѧ����Ϣ

};
#endif