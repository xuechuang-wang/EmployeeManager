// �ϰ�
#pragma once
#include <iostream>
using namespace std;
#include "worker.h"

class Boss :public Worker
{
public:

	//���캯��
	Boss(int id, string name, int did);

	// ��ʾ������Ϣ
	virtual void showinfo(); // ��ʵ�� ,virtual �ؼ��ֿ�ɾ�ɲ�ɾ

	// ��ȡ��λ����
	virtual string getDeptName(); // ���麯���������κ�ʵ�֣����ô���worker.cpp

};
