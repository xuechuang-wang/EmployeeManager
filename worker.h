#pragma once
#include <iostream>
using namespace std;
#include <string>


// ְ��������
class Worker
{
public:
	
	// ��ʾ������Ϣ
	virtual void showinfo() = 0; // ��ʵ��

	// ��ȡ��λ����
	virtual string getDeptName() = 0; // ���麯���������κ�ʵ�֣����ô���worker.cpp

	// ְ�����
	int m_Id;
	// ְ������
	string m_Name;
	// ���ű��
	int m_DeptId;
};