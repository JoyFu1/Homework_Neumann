#ifndef _STUDENT //条件编译
#define _STUDENT
#include<iostream>
#include<string>
using namespace std;
#define SIZE 80
class Student
{
	char *name;                        //姓名
	char ID[10];                       //身份证号
	char number[10];                  //学号
	char specialty[20];               //专业
	int age;                          //年龄
public:

	Student();
	Student(char *na, char *id, char *num, char *spec, int ag);                             //带参构造函数
	Student(const Student &per);                                                            //拷贝构造函数
	~Student();                                                                             //析构函数
	char *GetName();                                                                        //提取姓名
	char *GetID();                                                                          //提取姓名
	char *GetNumber();                                                                      //提取学号
	char *GetSpec();                                                                         //提取专业
	int GetAge();                                                                            //提取年龄
	void Display();                                                                          //显示学生信息
	void Input();                                                                            //输出学生信息

};
#endif