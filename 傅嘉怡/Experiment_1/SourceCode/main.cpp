#include<fstream>
#include <string.h> 
#include"Student.cpp"
  
using namespace std;
  
Student * create_List();
void traverse_List(Student * pHead);
bool is_empty(Student * pHead);
int length_List(Student * pHead);
bool insert_List(Student * pHead,int position,Stu st);
bool delete_List(Student * pHead,int position,Stu * st);
void sort_List(Student * pHead); 
void menu_select();
void handle_menu(int s);
void outFile();
Student * inFile();
void delFile();
Student* find_List_By_No(Student *phead,char *number);
double get_all_stu_math_fangcha(Student *phead);
  
Student * pHead;
  
  
int main()
{
  menu_select();
}
  
void menu_select()
{
  int s;
  cout<<"��������Ҫ������ѡ��:"<<endl;
  cout<<"1.����ԭʼ��¼"<<endl;
  cout<<"2.��ƽ����������ʾ���м�¼"<<endl;
  cout<<"3.����ԭʼ�ļ�"<<endl;
  cout<<"4.��ȡԭʼ�ļ�"<<endl;
  cout<<"5.ɾ��ԭʼ�ļ�"<<endl;
  cout<<"6.���뵥����¼"<<endl;
  cout<<"7.ɾ��������¼"<<endl;
  cout<<"8.��ʾ��¼������"<<endl;
  cout<<"9.������������"<<endl;
  cout<<"10.����ѧ�Ų�ѯ��ѧ���ɼ�"<<endl;
  cout<<"11.ͳ�Ƴ�����ѧ����ѧ�ܳɼ��ķ���"<<endl<<endl;
  cout<<"������ֶ�Ӧ����ѡ��,��ѡ��1-11:";
  cin>>s;
  handle_menu(s);
}
  
void handle_menu(int s)
{
  switch (s)
  {
  case 1:
    {
      system("cls");
      pHead=create_List();
      system("cls");
      menu_select();
      break;
    }
  case 2:
    {
      if(NULL==pHead)
      {
        cout<<"��¼������Ϊ��"<<endl;
        getchar();
        getchar();
        system("cls");
        menu_select();
      }
      system("cls");
      sort_List(pHead);
      traverse_List(pHead);
      getchar();
      getchar();
      system("cls");
      menu_select();
      break;
    }
  case 3:
    {
      if(pHead!=NULL)
      {
        system("cls");
        outFile();
        system("cls");
        menu_select();
      }
      system("cls");
      menu_select();
      break;
    }
  case 4:
    {
      system("cls");
      pHead=inFile();
      system("cls");
      menu_select();
      break;
    }
  case 5:
    {
      system("cls");
      delFile();
      system("cls");
      menu_select();
      break;
    }
  case 6:
    {
      if(NULL==pHead)
      {
        cout<<"��¼������Ϊ��"<<endl;
        getchar();
        getchar();
        system("cls");
        menu_select();
      }
      system("cls");
      int num;
      Stu st;
      traverse_List(pHead);
      cout<<"������������¼�����,���������:";
      cin>>num;
      cout<<"�༭Ҫ����ļ�¼:"<<endl;
      cout<<"ѧ��:";
      cin>>st.no;
      cout<<"����:";
      cin>>st.name;
      cout<<"��ѧƽʱ�ɼ�:";
      cin>>st.math_normal_score;
      cout<<"��ѧ��ĩ�ɼ�:";
      cin>>st.math_final_score;
      cout<<"��ѧʵ��ɼ�:";
      cin>>st.math_experiment_score;
      if(insert_List(pHead,num-1,st))
      {
        cout<<"����ɹ�!"<<endl;
      }
      else
      {
        cout<<"����ʧ��!"<<endl;
      }
      getchar();
      getchar();
      system("cls");
      menu_select();
      break;
    }
  case 7:
    {
      if(NULL==pHead)
      {
        cout<<"��¼������Ϊ��"<<endl;
        getchar();
        getchar();
        system("cls");
        menu_select();
      }
      int num;
      Stu * st=(Stu *)malloc(sizeof(Stu));
      traverse_List(pHead);
      cout<<endl<<"��������Ҫɾ���ļ�¼�����:";
      cin>>num;
      if(delete_List(pHead,num,st))
      {
        cout<<endl<<"�ɹ�ɾ���ļ�¼����:"<<endl;
        cout<<"ѧ��:"<<st->no<<endl<<"����:"<<st->name<<endl;
      }
      else
      {
        cout<<"ɾ��ʧ��!"<<endl;
      }
      getchar();
      getchar();
      system("cls");
      menu_select();
      break;
    }
  case 8:
    {
      if(NULL!=pHead)
      {
        system("cls");
        cout<<"��¼������:"<<length_List(pHead)<<"��"<<endl;
        getchar();
        getchar();
        system("cls");
        menu_select();
      }
      else
      {
        cout<<"��¼������Ϊ��"<<endl;
        getchar();
        getchar();
        system("cls");
        menu_select();
      }
      break;
    }
  case 9:
    {
      system("cls");
      cout<<"�ɹ��˳�!"<<endl;
      exit(0);
      break;
    }
  case 10:
    {
    	system("cls");
    	char number[10];
    	loop: cout<<"������Ҫ��ѯ��ѧ��: ";
    	cin>>number;
    	if(strlen(number)==0){
    		cout<<"������Ϸ���ѧ��"<<endl;
			goto loop; 
		}
		Student* stu = find_List_By_No(pHead,number);
		if(!stu){
			cout<<"��ѧ��������"<<endl;
			getchar();
			getchar();
			system("cls");
	        menu_select();
		}else{
			stu->show();
			getchar();
			getchar();
			system("cls");
	        menu_select();
		}
		break;
	}
	case 11:
	{
		system("cls");
		double fangcha = get_all_stu_math_fangcha(pHead);
		cout<<"����ѧ����ѧ�ܳɼ��ķ���Ϊ: "<<fangcha<<endl;
		getchar();
		getchar();
		system("cls");
	    menu_select();
		break;
	}
  }
}
  
  
void delFile()
{
  ofstream fileout;
  fileout.open("e:\\stu\\student.txt",ios_base::out);
  fileout<<"";
  fileout.close();
}
  
  
Student * inFile()
{
  Student * pHead=(Student *)malloc(sizeof(Student));
  if(NULL==pHead)
  {
    cout<<"����ʧ��,������ֹ!"<<endl;
    exit(0);
  }
  Student * pTail=pHead;
  pTail->next=NULL;
  ifstream in("e:\\stu\\student.txt");
  if (!in.is_open())
  {
    cout << "Error opening file"<<endl; 
    exit(0);
  }
  while (!in.eof())
  {
    Stu st;
    in.read(reinterpret_cast<char *>(&st), sizeof(st));
    if (in.fail()) 
    {
      break;
    }
    Student * pNew=new Student();
    if(NULL==pNew)
    {
      printf("����ʧ��,������ֹ\n");
      exit(0);
    }
    pNew->setst(st);
    pTail->next=pNew;
    pNew->next=NULL;
    pTail=pNew;
  }
  in.close();
  return pHead;
}
  
  
void outFile()
{
  ofstream out;
  out.open("e:\\stu\\student.txt",ios_base::out|ios_base::app|ios::binary);
  if(!out)
  {
    cout<<"�ļ������ڣ��˳�ʱ�����Ǳ����ļ�!"<<endl;
    out.close();
    out.open("stu.dat",ios_base::out|ios::binary);
  }
  else
  { 
    out.close();
    out.open("e:\\stu\\student.txt",ios_base::out|ios_base::app|ios::binary);
  }
  Student * temp=pHead->next;
  while(temp!=NULL)
  {
    Stu st=temp->getst();
    out.write(reinterpret_cast<char *>(&st), sizeof(st));
    temp=temp->next;
  }  
  out.close();
}
  
Student * create_List()
{
  int len;
  Student * pHead=(Student *)malloc(sizeof(Student));
  if(NULL==pHead)
  {
    cout<<"����ʧ��,������ֹ!"<<endl;
    exit(0);
  }
  Student * pTail=pHead;
  pTail->next=NULL;
  cout<<"������Ҫ�洢��ѧ������:";
  cin>>len;
  for(int i=0;i<len;i++)
  {
    Stu st;
    cout<<"�������"<<i+1<<"��ѧ����ѧ��:";
    cin>>st.no;
    cout<<"�������"<<i+1<<"��ѧ��������:";
    cin>>st.name;
    cout<<"�������"<<i+1<<"��ѧ������ѧƽʱ�ɼ�:";
    cin>>st.math_normal_score;
    cout<<"�������"<<i+1<<"��ѧ������ѧ��ĩ�ɼ�:";
    cin>>st.math_final_score;
        cout<<"�������"<<i+1<<"��ѧ������ѧʵ��ɼ�:";
    cin>>st.math_experiment_score;
    Student * pNew=new Student();
    if(NULL==pNew)
    {
      printf("����ʧ��,������ֹ\n");
      exit(0);
    }
    pNew->setst(st);
    pTail->next=pNew;
    pNew->next=NULL;
    pTail=pNew;
  }
  return pHead;
}
  
void traverse_List(Student * pHead)
{
  int i=1;
  Student * temp=pHead->next;
  while(temp!=NULL)
  {
    cout<<endl<<"���:"<<i<<endl;
    temp->show();
    temp=temp->next;
    i++;
  }
}
  
bool is_empty(Student * pHead)
{
  if(NULL==pHead->next)
  {
    return true;
  }
  else
  {
    return false;
  }
}
  
int length_List(Student * pHead)
{
  int len=0;
  Student * temp=pHead->next;
  while(temp)
  {
    len++;
    temp=temp->next;
  }
  return len;
}
  
bool insert_List(Student * pHead,int position,Stu st)
{
  int i=0;
  Student * p=pHead;
  
  while(NULL!=p&&i<position-1)
  {
    p=p->next;
    i++;
  }
  if(i>position-i||NULL==p)
  {
    return false;
  }
  Student * pNew=(Student *)malloc(sizeof(Student));
  if(NULL==pNew)
  {
    cout<<"����ʧ��,������ֹ"<<endl;
    exit(0);
  }
  pNew->setst(st);
  pNew->next=p->next;
  p->next=pNew;
  return true;
}
  
bool delete_List(Student * pHead,int position,Stu * st)
{
  int i=0;
  Student * p=pHead;
  
  while(NULL!=p->next&&i<position-1)
  {
    p=p->next;
    i++;
  }
  Student * q=p->next;
  *st=q->getst();
  p->next=p->next->next;
  free(q);
  q=NULL;
  return true;
}
  
void sort_List(Student * pHead)
{
  Student * p,* q;
  Stu temp;
  int i,j;
  int len=length_List(pHead);
  for(i=0,p=pHead->next;i<len-1;i++,p=p->next)
  {
    for(j=i+1,q=p->next;j<len;j++,q=q->next)
    {
      if(q->st.ave>p->st.ave)
      {
        temp=q->st;
        q->st=p->st;
        p->st=temp;
      }
    }
  }  
}

/*����ѧ�Ų�ѯѧ���ɼ�*/

Student* find_List_By_No(Student *phead,char *number)
{
	Student *p;
	int len=length_List(pHead);
	int i=0;
	for(i=0,p=phead->next;i<len;i++,p=p->next)
	{
		if(strcmp(p->st.no,number)==0){
			return p;
		}
	}
	return 0;
}


/*ͳ������ѧ��ĳ�ſ�Ŀ�ɼ��ķ���*/
double get_all_stu_math_fangcha(Student *phead){
		Student *p;
	int len=length_List(pHead);
	int i=0;
	int sum = 0;
	double ave = 0;
	double fangcha = 0;
	double temp_sum = 0;
	for(i=0,p=phead->next;i<len;i++,p=p->next)
	{
		sum += p->st.math_total_score;
	}
	
	ave = sum/(double)len;
	
	for(i=0,p=phead->next;i<len;i++,p=p->next)
	{
		double temp = (ave-p->st.math_total_score)*(ave-p->st.math_total_score);
		temp_sum +=temp;
	}
	fangcha = temp_sum/(len-1);
	return fangcha;
} 
