#include "manager.h"

//���캯��
Manager::Manager(int id, string name, int did)
{
	this->m_Id = id; // �������Գ�ʼ��
	this->m_Name = name;
	this->m_DeptId = did;
}

// ��ʾ������Ϣ
void Manager::showinfo()
{
	cout << "ְ����ţ� " << this->m_Id
		<< "\tְ�������� " << this->m_Name
		<< "\t��λ�� " << this->getDeptName()
		<< "\t��λְ�� ����ϰ彻�������񣬲��·���Ա��" << endl;
}

// ��ȡ��λ����
string Manager::getDeptName()
{
	return string("����");
}