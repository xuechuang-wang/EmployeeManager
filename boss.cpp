#include "boss.h"



Boss::Boss(int id, string name, int did)
{
	this->m_Id = id; // �������Գ�ʼ��
	this->m_Name = name;
	this->m_DeptId = did;

}


void Boss::showinfo()
{
	cout << "ְ����ţ� " << this->m_Id
		<< "\tְ�������� " << this->m_Name
		<< "\t��λ�� " << this->getDeptName()
		<< "\t��λְ�� ����˾��������" << endl;
}


string Boss::getDeptName()
{
	return string("�ܲ�");
}