#include<stdio.h>
#include"score.h"	
#include <iostream>
#include <istream> 
using namespace std;

int main()
{
	SS st;
	st.readData();
	st.calcuScore();
	st.sort();
	cout << "		ѧ���ɼ�����ϵͳ		" << endl;
	cout << "-----------------------------------------------------------------------------------------------------------------------" << endl;
	cout << "1.���ȫ��ѧ����ȫ����Ϣ" << endl;
	cout << endl;
	cout << "2.����ѧ�Ų�ѯĳ��ѧ������Ϣ" << endl;
	cout << endl;
	cout << "3.�鿴�ÿεľ�ֵ�ͷ���" << endl;
	cout << endl;
	cout << "4.�˳�" << endl;
	cout << endl;
	while (true)
	{
		cout << "������һ������������ѡ����:" << endl;
		int digit;
		cin >> digit;
		switch (digit)
		{
		case 1: st.printOut();
			break;
		case 2:st.search();
			break;
		case 3:st.printCourse();
			break;
		case 4:exit(0);
			break;
		default:
			cout << "��������밴˵������" << endl;
		}
	}

}