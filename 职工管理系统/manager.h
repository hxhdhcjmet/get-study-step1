#pragma once//经理类
#include<iostream>
#include<string>
#include"worker.h"
class Manager :public Worker
{
public:
	Manager(int m_id, string m_name, int m_deptid, string m_sex, int m_age);
	void show_self_info();
	//获取岗位信息
	string show_dept_info();

};
