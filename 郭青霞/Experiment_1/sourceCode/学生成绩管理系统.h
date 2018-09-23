// SS.h: interface for the SS class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_SS_H__4A521E86_3E89_4290_8758_CB03E2CFF5F5__INCLUDED_)
#define AFX_SS_H__4A521E86_3E89_4290_8758_CB03E2CFF5F5__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include<iostream>
#include<string>
#include<math.h>
using namespace std;

class SS  
{
private:
	int number;       //ѧ��
	char name[10];         //����
	int dailyScore;//ƽʱ�ɼ�
	int experiScore;//ʵ��ɼ�
	int finalScore;//��ĩ�ɼ�
	int generalScore;//�����ɼ�
	int place;  //����
public:
	void readData(); //���뵱ǰѧ����ѧ�š�������ƽʱ��ʵ�鼰��ĩ�ɼ�
	void rankScore();//������
	void sqrtData();//��ƽ��ֵ�ͷ���
	void calcuScore(SS );//���㵱ǰѧ���������ɼ�
	void output();//���ѧ����Ϣ
};

#endif // !defined(AFX_SS_H__4A521E86_3E89_4290_8758_CB03E2CFF5F5__INCLUDED_)
