// ������
#pragma once
#include <iostream>
#include <string>
using namespace std;
#include "worker.h"

class Manager :public Worker
{
public:

	//���캯��
	Manager(int id, string name, int did);

	// ��ʾ������Ϣ
	virtual void showinfo(); // ��ʵ�� ,virtual �ؼ��ֿ�ɾ�ɲ�ɾ

	// ��ȡ��λ����
	virtual string getDeptName(); // ���麯���������κ�ʵ�֣����ô���worker.cpp
};

