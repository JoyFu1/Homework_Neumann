#pragma once
class SS
{
private :
	char number[20]; //ѧ��
	char name[10]; //����
	float dailyScore;  //ƽʱ�ɼ�   
	float testScore; //ʵ��ɼ�
	float finalScore;  //��ĩ�ɼ� 

	float generalScore;//�����ɼ� 
	int  place;        //����

	float gScore = 0.0;  // �����˵�ƽ���ɼ�
	float variance = 0.0; //����
	

public:    
	void readData();   //����ѧ������Ϣ   
	void calcuScore(); //����ѧ�������ɼ�    
	void printOut();     //���ѧ����Ϣ 
	void search(); //����ѧ��
	void sort();  //��ѧ����������
	void printCourse(); //�Կγ̵ľ�ֵ�ͷ���������
};