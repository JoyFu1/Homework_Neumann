#include"student.h"
student::student()
{
  name=NULL;
  age=0;
}
student::student(char *na,char *id,char *num,char *spec,int ag)
{
    if(na)
    {
        name=new char[strlen(na)+1];
        strcpy(name,na);
    }
    strcpy(ID,id)
    strcpy(number,num);
    strcpy(speciality,spec);
    age=ag;
}
studebt::student(const student &per)
{
    if(per.name)
    {
        name=new char[strlen(per.name)+1];
        strcpy(name,per.name);
    }
    strcpy(ID,per.ID)
    strcpy(number,per.number);
    strcpy(speciality,per.speciality);
    age=per.age;
}
student::~student()
{
    if(name)
        delete []name;
}
char *student::GetName()
{
    return  name;
}
char *student::GetID()
{
    return  ID;
}
char *student::GetAge()
{
    return  age;
}
char *student::Getspec()
{
    return  speciality;
}
char *student::GetNumber()
{
    return  number;
}
void student::Display()
{
cout<<"�� ��:"<<name<<endl;
cout<<"���֤:"<<ID<<endl;
cout<<"ѧ ��:"<<number<<endl;
cout<<"ר ҵ:"<<speciality<<endl;
cout<<"�� ��:"<<age<<endl;
}
void student::input()
{
char na[10];
cout<<"������ ��:"��
cin>>na;
if(name)
    delete []name;
name=new char[strlen(na)+1];
strcpy(name,na);
cout<<"�������֤:";
cin>>ID;
cout<<"������ ��:";
cin>>age;
cout<<"����ר ҵ:";
cin>>speciality;
cout<<"����ѧ ��:";
cin>>number;
}
