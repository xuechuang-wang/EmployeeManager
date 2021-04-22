// 老板
#pragma once
#include <iostream>
using namespace std;
#include "worker.h"

class Boss :public Worker
{
public:

	//构造函数
	Boss(int id, string name, int did);

	// 显示个人信息
	virtual void showinfo(); // 空实现 ,virtual 关键字可删可不删

	// 获取岗位名称
	virtual string getDeptName(); // 纯虚函数，不做任何实现，不用创建worker.cpp

};
