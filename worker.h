#pragma once
#include <iostream>
using namespace std;
#include <string>


// 职工抽象类
class Worker
{
public:
	
	// 显示个人信息
	virtual void showinfo() = 0; // 空实现

	// 获取岗位名称
	virtual string getDeptName() = 0; // 纯虚函数，不做任何实现，不用创建worker.cpp

	// 职工编号
	int m_Id;
	// 职工姓名
	string m_Name;
	// 部门编号
	int m_DeptId;
};