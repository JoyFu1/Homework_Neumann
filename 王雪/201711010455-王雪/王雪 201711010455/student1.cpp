#include<iostream>
using namespace std;
#include"student.h"
const int N=10;
void menu();
void outputstu(student *array);
void Inputstu(student *array);
int searchstu(student *array,char *na);
int count=0;
int main()
{
    student array[N]
    int choice;
    do
    {
        menu()
        cout<<"please input your choice:";
        cin>>choice;
        if(choice>=0&&choice<=3)
            switch(choice)
            {   case 1:Inputstu(array);break;
                case 2:cout<<"Input the name searched"<<endl;
                       char na[20];
                       cin>>na;
                       int i;
                       i=searchstu(array,na);
                       if(i==N)
                                 cout<<"���޴���!\n";
                        else
                                 array[i].Display();
                        break;
                case 3:outputstu(array); break;
                default:break;
            }
        }while(choice);
        return 0;
}
void menu();
{
          cout<<"*****1.¼����Ϣ*****"<<endl;
          cout<<"*****2.��ѯ��Ϣ*****"<<endl;
          cout<<"*****3.�����Ϣ*****"<<endl;
          cout<<"*****0.��    ��*****"<<endl;
}
void outputstu(student *array)
{
         cout<<"ѧ������="<<count<<endl;
         for(int i=0;i<count;i++)
         array[i].Display();
}
int searchstu(student *array,char *na)
{
        int i,j=N;
        for(i=0;i<count;i++)
        if(strcmp(array[i].GetName(),na)==0)
        j=i;
        return j;
}
void inputstu(student *array)
{
        char ch;
        do
        {    array[count].input();
        count++;
        cout<<"����������?(Y or N)"<<endl;
        cin>>ch;
        }while(ch=='Y';
)
