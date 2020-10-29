#pragma once
#include<iostream>
#include<string>
using namespace std;

class Person
{
public:
	Person() {}
	Person(string Name, string Gender, int Age, string ID)
	{	
		m_Name = Name;
		m_Gender = Gender;
		m_Age = Age;
		m_ID = ID;
	}
	string m_Name;
	string m_Gender;
	int m_Age = -1;
	string m_ID;
	virtual void Create() = 0; // ���麯��
	virtual void Display()=0; // ���麯��
	virtual Person* GetClassName() {
		return this;
	}
	virtual int ScoreGetter() = 0;
	virtual string MajorGetter() = 0;
	virtual string StudentNumberGetter() = 0;
	virtual int SalaryGetter() = 0;
	virtual string PositionGetter() = 0;

};

class Undergraduate : public Person
{
public:
	Undergraduate() {}  //Ĭ�Ϲ��캯��
	Undergraduate(string Name, string Gender, int Age, string ID,int Score):Person(Name,Gender,Age,ID),m_Score(Score){}
	Undergraduate(const Person&p) {
		this->m_Name = p.m_Name;
		this->m_Age = p.m_Age;
		this->m_Gender = p.m_Gender;
		this->m_ID = p.m_ID;
	}

	void Create()
	{
		cout << "����������:" << endl;
		cin >> m_Name;
		cout << "�������Ա��л�Ů:" << endl;
		cin >> m_Gender;
		cout << "����������:" << endl;
		cin >> m_Age;
		cout << "���������֤��:" << endl;
		cin >> m_ID;
		cout << "�߿��ɼ�:" << endl;
		cin >> m_Score;
	}
	void Display()
	{
		cout << "����: " << m_Name << " ���:������ " << " �Ա�: " << m_Gender << " ����: " << m_Age << " ���֤��: " << m_ID << " �߿��ɼ�: " << m_Score << endl;
	}
	Undergraduate* GetClassName() {
		return this;
	}
	int ScoreGetter() {
		return this->m_Score;
	}
	string MajorGetter() { return " ";}
	string StudentNumberGetter() { return " "; }
	int SalaryGetter() { return 0; }
	string PositionGetter() { return " "; }
	int m_Score;
};

class FullTimePostgraduate : public Person
{
public:
	FullTimePostgraduate() {}  //Ĭ�Ϲ��캯��
	FullTimePostgraduate(string Name, string Gender, int Age, string ID, string Major) :Person(Name, Gender, Age, ID), m_Major(Major) {}
	FullTimePostgraduate(const Person&p) {
		this->m_Name = p.m_Name;
		this->m_Age = p.m_Age;
		this->m_Gender = p.m_Gender;
		this->m_ID = p.m_ID;
	}
	void Create()
	{
		cout << "����������:" << endl;
		cin >> m_Name;
		cout << "�������Ա��л�Ů:" << endl;
		cin >> m_Gender;
		cout << "����������:" << endl;
		cin >> m_Age;
		cout << "���������֤��:" << endl;
		cin >> m_ID;
		cout << "������רҵ:" << endl;
		cin >> m_Major;
	}

	void Display()
	{
		cout << "����: " << m_Name << " ���:�Ѳ��о��� " << " �Ա�: " << m_Gender << " ����: " << m_Age << " ���֤��: " << m_ID << " רҵ: " << m_Major << endl;
	}
	FullTimePostgraduate* GetClassName() {
		return this;
	}
	string MajorGetter() {
		return m_Major;
	}
	int ScoreGetter() { return 0; }
	string StudentNumberGetter() { return " "; }
	int SalaryGetter() { return 0; }
	string PositionGetter() { return " "; }

	string m_Major;
};

class OnJobPostgraduate : public Person
{
public:
	OnJobPostgraduate() {}  //Ĭ�Ϲ��캯��
	OnJobPostgraduate(string Name, string Gender, int Age, string ID, string StudentNumber,string Major,int Salary)\
		:Person(Name, Gender, Age, ID), m_Major(Major),m_Salary(Salary) {}
	OnJobPostgraduate(const Person&p) {
		this->m_Name = p.m_Name;
		this->m_Age = p.m_Age;
		this->m_Gender = p.m_Gender;
		this->m_ID = p.m_ID;
	}
	void Create()
	{
		cout << "����������:" << endl;
		cin >> m_Name;
		cout << "�������Ա��л�Ů:" << endl;
		cin >> m_Gender;
		cout << "����������:" << endl;
		cin >> m_Age;
		cout << "���������֤��:" << endl;
		cin >> m_ID;
		cout << "������ѧ��:" << endl;
		cin >> m_StudentNumber;
		cout << "������רҵ:" << endl;
		cin >> m_Major;
		cout << "������н��:" << endl;
		cin >> m_Salary;
	}

	void Display()
	{
		cout << "����: " << m_Name << " ���:��ְ�о��� " << " �Ա�: " << m_Gender << " ����: " << m_Age << " ���֤��: " << m_ID << " ѧ��: "\
			<< m_StudentNumber << " רҵ: " << m_Major << " ���ʣ� " << m_Salary << endl;
	}
	OnJobPostgraduate* GetClassName() {
		return this;
	}

	string StudentNumberGetter() {
		return this->m_StudentNumber;
	}
	string MajorGetter() {
		return this->m_Major;
	}
	int SalaryGetter() {
		return this->m_Salary;
	}
	int ScoreGetter() { return 0; }
	string PositionGetter() { return " "; }

	string m_StudentNumber;
	string m_Major;
	int m_Salary;
};

class Worker : public Person
{
public:
	Worker() {}  //Ĭ�Ϲ��캯��
	Worker(string Name, string Gender, int Age, string ID,int Salary,string Position)\
		: Person(Name, Gender, Age, ID), m_Salary(Salary),m_Position(Position) {}
	Worker(const Person&p) {
		this->m_Name = p.m_Name;
		this->m_Age = p.m_Age;
		this->m_Gender = p.m_Gender;
		this->m_ID = p.m_ID;
	}
	void Create()
	{
		cout << "����������:" << endl;
		cin >> m_Name;
		cout << "�������Ա��л�Ů:" << endl;
		cin >> m_Gender;
		cout << "����������:" << endl;
		cin >> m_Age;
		cout << "���������֤��:" << endl;
		cin >> m_ID;
		cout << "������н��:" << endl;
		cin >> m_Salary;
		cout << "�������λ:" << endl;
		cin >> m_Position;
	}
	void Display()
	{
		cout << "����: " << m_Name <<" ���:ְ�� "<< " �Ա�: " << m_Gender << " ����: " << m_Age << " ���֤��: " << m_ID << " н��: "\
			<< m_Salary << " ��λ: " << m_Position << endl;
	}
	Worker* GetClassName() {
		return this;
	}
	int SalaryGetter() {
		return this->m_Salary;
	}
	string PositionGetter() {
		return this->m_Position;
	}
	int ScoreGetter() { return 0; }
	string MajorGetter() { return " "; }
	string StudentNumberGetter() { return " "; }

	int m_Salary;
	string m_Position;
};

class Teacher : public Person
{
public:
	Teacher() {}  //Ĭ�Ϲ��캯��
	Teacher(string Name, string Gender, int Age, string ID, int Salary, string Major)\
		: Person(Name, Gender, Age, ID), m_Salary(Salary), m_Major(Major) {}
	Teacher(const Person&p) {
		this->m_Name = p.m_Name;
		this->m_Age = p.m_Age;
		this->m_Gender = p.m_Gender;
		this->m_ID = p.m_ID;
	}
	void Create()
	{
		cout << "����������:" << endl;
		cin >> m_Name;
		cout << "�������Ա��л�Ů:" << endl;
		cin >> m_Gender;
		cout << "����������:" << endl;
		cin >> m_Age;
		cout << "���������֤��:" << endl;
		cin >> m_ID;
		cout << "������н��:" << endl;
		cin >> m_Salary;
		cout << "������רҵ:" << endl;
		cin >> m_Major;
	}
	void Display()
	{
		cout << "����: " << m_Name << " ���:��ʦ " << " �Ա�: " << m_Gender << " ����: " << m_Age << " ���֤��: " << m_ID << " н��: "\
			<< m_Salary << " רҵ: " << m_Major << endl;
	}
	Teacher* GetClassName() {
		return this;
	}
	int SalaryGetter() {
		return m_Salary;
	}
	string MajorGetter() {
		return m_Major;
	}
	int ScoreGetter() { return 0; }
	string StudentNumberGetter() { return " "; }
	string PositionGetter() { return " "; }

	int m_Salary;
	string m_Major;
};

