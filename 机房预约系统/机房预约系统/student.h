#pragma once
#include <iostream>
#include<fstream>
using namespace std;
#include<vector>
#include<algorithm>
#include"globalFile.h"
#include "orderFile.h"
#include "Identity.h"
#include"computerRoom.h"
#include <string>
//学生类
class Student : public Identity
{
public:
	Student();
	Student(int id, string name, string pwd);
	virtual void operMenu();
	void applyOrder();
	void showMyOrder();
	void showAllOrder();
	//取消预约
	void cancelOrder();
	vector<ComputerRoom> vCom;
	//学生学号
	int m_Id;
};