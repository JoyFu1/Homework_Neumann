//����Date�࣬���ж����˿������캯��
#include <iostream>
using namespace std;
class Date
{
	int year, month, day;//���ݳ�ԱĬ��Ϊ��˽�к���
public:
	Date(int y = 2007, int m = 1, int d = 1);
	Date(const Date &data);//���캯������
	int GetYear();
	int GetMonth();
	int GetDay();
	void Display();//��ͨ��Ա������������ݳ�Ա��ֵ
};
Date::Date(int y, int m, int d)//��ͨ���캯���Ķ���
{
	year = y;
	month = m;
	day = d;
	cout << "constructor called.\n";
}
Date::Date(const Date &data)//�������캯���Ķ���
{
	year = data.year;
	month = data.month;
	day = data.day;
	cout << "copy constructor called.\n";
}
int Date::GetYear()//���г�Ա��������ȡyear����ֵ
{
	return year;
}
int Date::GetMonth()//���г�Ա��������ȡmonth����ֵ
{
	return month;
}
int Date::GetDay()//���г�Ա��������ȡday����ֵ
{
	return day;
}
void Date::Display()//��������Ķ���
{
	cout << year << "-" << month << "-" << day << endl;
}
