#include<iostream>
using namespace std;
int checkAge(int x)
{
	if (x<16||x>25) throw x;
	return x;
}
float checkScore(float y)
{
	if (y<0||y>5) throw y;
	return 20*y;
}
int main()
{
	char name[2];
	int age,score;
	cout<<"����������"<<endl;
	cin>>name;
	cout<<"�������䣺"<<endl;
	cin>>age;
	cout<<"���������"<<endl;
	cin>>score;
	try
	{
		cout<<name<<endl<<checkAge(age)<<endl<<checkScore(score)<<endl;
	}
	catch(int)
	{
		cout<<"wrong!"<<endl;
	}
	cout<<"calculate finished"<<endl;
	return 0;
}