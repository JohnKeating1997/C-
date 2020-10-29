#include<iostream>
#include<string>
#include "Interface.h"
#include "Person.h"
#include "HeterList.h"

using namespace std;

void my_preset(HeterList<Person> &thelist)  //Ԥ�輸����
{
	Undergraduate* p1=new Undergraduate("Tom", "��", 20, "1", 542);
	thelist.Insert(p1);
	FullTimePostgraduate* p2=new FullTimePostgraduate("Jessy", "Ů", 23, "2", "�����");
	thelist.Insert(p2);
	OnJobPostgraduate* p3=new OnJobPostgraduate("С����", "Ů", 23, "3", "1321","��ľ����",2000);
	thelist.Insert(p3);
	Worker* p4=new Worker("����", "��", 45, "4", 20000, "һ����");
	thelist.Insert(p4);
	Teacher* p5=new Teacher("����", "��", 50, "5", 30000, "�����");
	thelist.Insert(p5);
}
int main()
{
	//ʵ���������߶���
	WorkerManager wm;
	int choice = 0;
	HeterList<Person> myList;
	my_preset(myList); //Ԥ�輸����
	string identity[] = { "������","�Ѳ��о���","��ְ�о���","ְ��","��ʦ" };
	string info[] = { "����","�Ա�","����","���֤��" };
	//չʾ�˵�
	wm.Show_Menu();
	while (true) 
	{
		cout << "��������ѡ��:" << endl;
		cin >> choice;

		switch (choice)
		{
		case 1:  //����ְ����Ϣ
		{
			cout << "������Ҫ��������Ա���" << endl;
			for (int i = 0; i < 5; i++)
			{
				cout << i + 1 << identity[i] << endl;
			}
			int category = 0;
			cin >> category;
			Person* person = NULL;
			switch (category)
			{
			case 1:
				person = new Undergraduate;
				person->Create();
				myList.Insert(person);
				
				break;
			case 2:
				person = new FullTimePostgraduate;
				person->Create();
				myList.Insert(person);
				
				break;
			case 3:
				person = new OnJobPostgraduate;
				person->Create();
				myList.Insert(person);
				break;
			case 4:
				person = new Worker;
				person->Create();
				myList.Insert(person);
				break;
			case 5:
				person = new Teacher;
				person->Create();
				myList.Insert(person);
				break;
			default:
				break;
		}
	break; }

		case 2:  //ɾ����ְְ��
		{
			string ID;
			cout << "��������Ҫɾ����Ա�������֤���룺 " << endl;
			cin >> ID;
			myList.Delete(ID);
			break; 
		}

		case 3:  //��ѯְ����Ϣ
		{
			
			cout << "��������Ҫ���պ�����Ϣ���в��ң� " << endl;
			for (int i = 0; i < 4; i++)
			{
				cout << i + 1 << info[i] << endl;
			}
			int axis;
			cin >> axis;
			string info;
			cout << "��������ҵ���Ϣ�� " << endl;
			cin >> info;
			myList.Search(axis, info);

		}
			break;
		case 4:  //��ӡְ����Ϣ
			myList.Print();
			break;
		case 5:  //��չ���ϵͳ
			myList.Truncate();
			break;
		case 6:  //�˳�ϵͳ
			wm.exitSystem();
			break;
		case 7:
			myList.Save_file();
			break;
		case 8:
			myList.Load_file();
			break;
		default:
	/*		system("cls");*/
			break;
		}

		system("pause");

	}


	return 0;
}