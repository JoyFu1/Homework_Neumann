#include<iostream>
  
using namespace std;
  
struct Stu
{
  char no[20];
  char name[70];
  int math_normal_score;
  int math_final_score;
  int math_experiment_score;
  double math_total_score;
  double ave;
};
  
class Student
{
public:
  Stu st;
  Student * next;
public:
  Student(){}
  Student(Stu s)
  {
    st=s;
    next=NULL;
    st.ave=(st.math_normal_score+st.math_final_score+st.math_experiment_score)/3.0;
    st.math_total_score = 0.2*st.math_normal_score+0.6*st.math_final_score+0.2*st.math_experiment_score;
  }
  void setst(Stu s)
  {
    st=s;
    st.ave=(st.math_normal_score+st.math_final_score+st.math_experiment_score)/3.0;
    st.math_total_score = (0.2*st.math_normal_score+st.math_final_score*0.6+st.math_experiment_score*0.2);
  }
  Stu getst()
  {
    return st;
  }
  void show()
  {
    cout<<"----------------------------"<<endl;
    cout<<"ѧ��:"<<st.no<<endl;
    cout<<"����:"<<st.name<<endl;
    cout<<"��ѧƽʱ�ɼ�:"<<st.math_normal_score<<endl;
    cout<<"��ѧ��ĩ�ɼ�:"<<st.math_final_score<<endl;
    cout<<"��ѧʵ��ɼ�:"<<st.math_experiment_score<<endl;
    cout<<"��ѧ�ܳɼ�:"<<st.math_total_score<<endl;
    cout<<"ƽ���ɼ�:"<<st.ave<<endl;
    cout<<"----------------------------"<<endl;
  }
};
