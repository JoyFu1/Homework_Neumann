#pragma once
#ifndef _STUDENT
#include <iostream>
#include <string>
using namespace std;
#define size 80
class student
{
private:
	char *name;//����
	char ID[19]; //���֤
	char number[10];//ѧ��
	char speciality[20];//רҵ
	int age;
public:
	student();
	student(char *na, char *id, char *num, char *spec, int ag);
	student(const student &per);//�������캯��
	~student();
	char* getname();
	char* getid();
	char* getnumber();
	char* getspec();
	int getage();
	void display();
	void input();

};
#endif

