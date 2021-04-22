#include "workerManager.h"



WorkerManager::WorkerManager()
{
	// ��ʼ������
	this->m_EmpNum = 0;
	this->m_EmpArray = NULL; 

}


// ��ʾ�˵�
void WorkerManager::Show_Menu()
{
	cout << "********************************************" << endl;
	cout << "*********  ��ӭʹ��ְ������ϵͳ�� **********" << endl;
	cout << "*************  0.�˳��������  *************" << endl;
	cout << "*************  1.����ְ����Ϣ  *************" << endl;
	cout << "*************  2.��ʾְ����Ϣ  *************" << endl;
	cout << "*************  3.ɾ����ְְ��  *************" << endl;
	cout << "*************  4.�޸�ְ����Ϣ  *************" << endl;
	cout << "*************  5.����ְ����Ϣ  *************" << endl;
	cout << "*************  6.���ձ������  *************" << endl;
	cout << "*************  7.��������ĵ�  *************" << endl;
	cout << "********************************************" << endl;
	cout << endl;
}

// �˳�ϵͳ
void WorkerManager::ExitSystem()
{
	cout << "��ӭ�´�ʹ��" << endl;
	system("pause");
	exit(0);
}


void WorkerManager::Add_Emp()
{
	cout << "���������ְ�������� " << endl;

	int addNum = 0; // �����û�����������
	cin >> addNum;

	if (addNum > 0)
	{
		// ���
		// ��������µĿռ��С  
		int newSize = this->m_EmpNum + addNum; // �¿ռ����� = ԭ����¼���� + �������� 

		// �����¿ռ�
		Worker** newSpace = new Worker * [newSize];

		// ��ԭ���ռ������ݣ��������¿ռ���
		if (this->m_EmpArray!=NULL)
		{
			for (int i = 0; i < m_EmpNum; i++)
			{
				newSpace[i] = this->m_EmpArray[i];
			}

		}

		// �������������
		for (int i = 0; i < addNum; i++)
		{
			int id;
			string name;
			int dSelect;

			cout << "�������" << i + 1 << " ����ְ����ţ� " << endl;
			cin >> id;

			cout << "�������" << i + 1 << " ����ְ�������� " << endl;
			cin >> name;

			cout << "��ѡ��ְ����λ�� " <<endl;
			cout << "1. ��ְͨ��" << endl;
			cout << "2. ����" << endl;
			cout << "3. �ϰ�" << endl;
			cin >> dSelect;

			Worker* worker = NULL;

			switch (dSelect)
			{
			case 1:
				worker = new Employee(id, name, 1);
				break;
			case 2:
				worker = new Manager(id, name, 2);
				break;
			case 3:
				worker = new Boss(id, name, 3);
				break;


			default:
				break;
			}


			newSpace[this->m_EmpNum + i] = worker;

 		}


		// �ͷ�ԭ�еĿռ�
		delete[] this->m_EmpArray;

		// �����¿ռ�ָ��
		this->m_EmpArray = newSpace;

		// �����µ�ְ������
		this->m_EmpNum = newSize;

		// ��ӳɹ�
		cout << "�ɹ����" << addNum << "����ְ��!" << endl;
	}
	else
	{
		cout << "��������" << endl;

	}

	// �����������
	system("pause");
	system("cls");

}


WorkerManager::~WorkerManager()
{

}