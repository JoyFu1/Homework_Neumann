#include<iostream>
using namespace std;
 struct student//ѧ���ṹ��
{
    char name[10];
    int age;
    float score;
};
float checkAgeScore(int Age,float score)
{
    if(Age<16||Age>25)throw Age;//�׳�
    if(score<0||score>5)throw score;//�׳�
    if(Age>=16&&Age<=25&&score>=0&&score<=5)
    {
        float score1=20*score;
        return score1;
    }
}
int main()
{
    student A;
    float score1;
    cout<<"������ѧ������"<<endl;
    cin>>A.name;
    cout<<"����������"<<endl;
    cin>>A.age;
    cout<<"������C++�ɼ�"<<endl;
    cin>>A.score;
    try
    {
        score1=checkAgeScore(A.age,A.score);//����⺯��
        cout<<"name:"<<A.name<<"age:"<<A.age<<"score:"<<score1<<endl;//����⺯��
    }
    catch(int)//�����쳣����
    {
        cout<<"���䲻�ں���Χ��!";
    }
    catch(float)//�����쳣�ɼ�
    {
        cout<<"�ɼ����ں���Χ�ڣ�";
    }

}
