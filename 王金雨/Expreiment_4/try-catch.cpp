#include <iostream>

using namespace std;
//���ѧ���������Լ��ɼ��Ƿ��д�
 float checkAgeScore(int x, float y)
 {

    if(y>100||y<0)  throw y;
    else;
    if(x>25||x<16) throw x;
    else;
 }
 //���ѧ�������䣬���������ɼ�
void putInformation(int a,char *b,float c)
{
     cout<<"ȷ���Լ�������:"<<endl;
    cout<<a<<endl;
    cout<<"ȷ���Լ�������:"<<endl;
    for(int i=0;i<5;i++)
    {
        cout<<b[i];
    }
    cout<<endl;
    cout<<"ȷ���Լ��ķ���:"<<endl;
    cout<<c<<endl;
}
int main()
{  //����ѧ��������
    int age=0;
    char name[10];
    float score;
    cout<<"�������Լ�������:"<<endl;
    cin>>age;

    //�����Լ�������
    cout<<"�������Լ�������:"<<endl;
    for(int i=0;i<5;i++)
    {
        cin>>name[i];

    }

    cout<<"�������Լ��ķ���:"<<endl;
    cin>>score;
    //try-catch��
    try
    {
        cout<<checkAgeScore(age,score);
    }
    catch(int)
    {
        cout<<"ѧ������������!"<<endl;
    }
    catch(float)
    {
        cout<<"ѧ���ķ�������!"<<endl;
    }
    putInformation(age,name,score);
}
