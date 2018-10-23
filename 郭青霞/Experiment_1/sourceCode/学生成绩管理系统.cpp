// SS.cpp: implementation of the SS class.
//
//////////////////////////////////////////////////////////////////////

#include "SS.h"
SS a,b,c,d,e,f;

//////////////////////////////////////////////////////////////////////
// Construction/Destruction
//////////////////////////////////////////////////////////////////////

void SS::readData()
{
	/*if(m.number='2017000001')
		cout<<"Ҧ����"<<"ƽʱ�ɼ�90"<<"ʵ��ɼ�85"<<"��ĩ�ɼ�98"<<endl;*/
	a.number=2017000001;
	strcpy(a.name,"Ҧ����");
	a.dailyScore=90;
	a.experiScore=85;
	a.finalScore=98;
	b.number=2017000002;
	strcpy(b.name,"�ܹ�Զ");
	b.dailyScore=85;
	b.experiScore=87;
	b.finalScore=92;
	c.number=2017000003;
	strcpy(c.name,"��Ҷ�");
	c.dailyScore=89;
	c.experiScore=84;
	c.finalScore=96;
	d.number=2017000004;
	strcpy(d.name,"��ܽ��");
	d.dailyScore=95;
	d.experiScore=76;
	d.finalScore=98;
    e.number=2017000005;
	strcpy(e.name,"�ų���");
	e.dailyScore=78;
	e.experiScore=80;
	e.finalScore=88;
	f.number=2017000006;
 	strcpy(f.name,"�����");
	f.dailyScore=82;
	f.experiScore=90;
	f.finalScore=85;
	a.generalScore=0.2*a.dailyScore+0.2*a.experiScore+0.6*a.finalScore;
	b.generalScore=0.2*b.dailyScore+0.2*b.experiScore+0.6*b.finalScore;
	c.generalScore=0.2*c.dailyScore+0.2*c.experiScore+0.6*c.finalScore;
	d.generalScore=0.2*d.dailyScore+0.2*d.experiScore+0.6*d.finalScore;
	e.generalScore=0.2*e.dailyScore+0.2*e.experiScore+0.6*e.finalScore;
	f.generalScore=0.2*f.dailyScore+0.2*f.experiScore+0.6*f.finalScore;
	/*cout<<"������ѧ��"<<endl;
	cin>>number;
	cout<<"����������"<<endl;
	cin>>name;
	cout<<"������ƽʱ�ɼ�"<<endl;
	cin>>dailyScore;
	cout<<"������ʵ��ɼ�"<<endl;
	cin>>experiScore;
	cout<<"��������ĩ�ɼ�"<<endl;
	cin>>finalScore;
	cout<<endl;*/
}



void SS::calcuScore(SS m)
{
	cout<<"������ѧ��"<<endl;
	cin>>m.number;
	if(m.number==a.number)
	{
		cout<<"���֣�"<<a.name<<" ƽ���ɼ���"<<a.dailyScore<<" ʵ��ɼ���"<<a.experiScore<<" ��ĩ�ɼ���"<<a.finalScore<<endl;
		cout<<"��������ɼ�"<<endl;
		//m.generalScore=0.2*a.dailyScore+0.2*a.experiScore+0.6*a.finalScore;
	    cout<<a.generalScore<<endl;
	}
	else
	if(m.number==b.number)
	{
		cout<<"���֣�"<<b.name<<" ƽ���ɼ���"<<b.dailyScore<<" ʵ��ɼ���"<<b.experiScore<<" ��ĩ�ɼ���"<<b.finalScore<<endl;
		cout<<"��������ɼ�"<<endl;
		//m.generalScore=0.2*b.dailyScore+0.2*b.experiScore+0.6*b.finalScore;
	    cout<<b.generalScore<<endl;
	}
	else
	if(m.number==c.number)
	{
		cout<<"���֣�"<<c.name<<" ƽ���ɼ���"<<c.dailyScore<<" ʵ��ɼ���"<<c.experiScore<<" ��ĩ�ɼ���"<<c.finalScore<<endl;
		cout<<"��������ɼ�"<<endl;
		//m.generalScore=0.2*c.dailyScore+0.2*c.experiScore+0.6*c.finalScore;
	    cout<<c.generalScore<<endl;
	}
	else
	if(m.number==d.number)
	{
		cout<<"���֣�"<<d.name<<" ƽ���ɼ���"<<d.dailyScore<<" ʵ��ɼ���"<<d.experiScore<<" ��ĩ�ɼ���"<<d.finalScore<<endl;
		cout<<"��������ɼ�"<<endl;
		//m.generalScore=0.2*d.dailyScore+0.2*d.experiScore+0.6*d.finalScore;
	    cout<<d.generalScore<<endl;
	}
	else
	if(m.number==e.number)
	{
		cout<<"���֣�"<<e.name<<" ƽ���ɼ���"<<e.dailyScore<<" ʵ��ɼ���"<<e.experiScore<<" ��ĩ�ɼ���"<<e.finalScore<<endl;
		cout<<"��������ɼ�"<<endl;
		//m.generalScore=0.2*e.dailyScore+0.2*e.experiScore+0.6*e.finalScore;
	    cout<<e.generalScore<<endl;
	}
	else
	if(m.number==f.number)
	{
		cout<<"���֣�"<<f.name<<" ƽ���ɼ���"<<f.dailyScore<<" ʵ��ɼ���"<<f.experiScore<<" ��ĩ�ɼ���"<<f.finalScore<<endl;
		cout<<"��������ɼ�"<<endl;
		//m.generalScore=0.2*f.dailyScore+0.2*f.experiScore+0.6*f.finalScore;
	    cout<<f.generalScore<<endl;
	}
}


void SS::sqrtData()
{
	
	float av=0,s=0;
	av=(a.generalScore+b.generalScore+c.generalScore+d.generalScore+e.generalScore+f.generalScore)/6;
	cout<<"�����ɼ���ֵΪ��"<<av<<endl;
	s=((pow((a.generalScore-av),2)+pow((b.generalScore-av),2)+pow((c.generalScore-av),2)+pow((d.generalScore-av),2)+pow((e.generalScore-av),2)+pow((f.generalScore-av),2)))/6;
	cout<<"�����ɼ�����Ϊ��"<<s<<endl;
}



void SS::output()
{
	cout<<"ѧ��+����+�����ɼ�"<<endl;
	cout<<a.number <<a.name <<a.generalScore <<endl
		<<b.number <<b.name <<b.generalScore <<endl
		<<c.number <<c.name <<c.generalScore <<endl
		<<d.number <<d.name <<d.generalScore <<endl
		<<e.number <<e.name <<e.generalScore <<endl
		<<f.number <<f.name <<f.generalScore<<endl;
}

main()
{
	SS m;
	m.readData();
	m.calcuScore(m);
	m.sqrtData();
	m.output();
}