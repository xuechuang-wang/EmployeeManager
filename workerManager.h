#pragma once  // ��ֹͷ�ļ��ظ�����
#include <iostream> // �������������ͷ�ļ�
using namespace std; // ʹ�ñ�׵�����ռ�
#include "worker.h"
#include "manager.h"
#include "employee.h"
#include "boss.h"

class WorkerManager
{
public:
	// ���캯��
	WorkerManager();

	// չʾ�˵�
	void Show_Menu();

	// �˳�ϵͳ
	void ExitSystem();

	// ��¼ְ������
	int m_EmpNum;

	// ��¼����ָ��
	Worker** m_EmpArray; 

	// ���ְ��
	void Add_Emp();

	// ��������
	~WorkerManager();

};

