﻿#pragma once
#include <iostream>
using namespace std;
#include <map>
#include <fstream>
#include <string>
#include "globalFile.h"
class OrderFile
{
public:
	//构造函数
	OrderFile();
	void updateOrder();
	void fen(string a, map<string, string> &m);
	//记录的容器 key ---记录的条数 value ---具体记录的键值对信息
	map<int, map<string, string>> m_orderData;
	//预约的条数
	int m_Size;
};