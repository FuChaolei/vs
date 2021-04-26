#pragma once
#include<iostream>
#include<fstream>
#include<string>
#include <algorithm>
using namespace std;
#include "worker.h"
#include"employee.h"
#include"manager.h"
#include"boss.h"
#define FILENAME "empFile.txt"

class WorkerManager {
public:
	WorkerManager();
	~WorkerManager();
	void Add_Emp();
	void showmenu();
	void save();
	static bool cmp(Worker*a, Worker*b);
	static bool cmp1(Worker*a, Worker*b);
	void Mod_Emp();
	void init_Emp();
	void Show_Emp();
	void exitsystem();
	int m_EmpNum;
	int get_EmpNum();
	void Sort_Emp();
	Worker** m_EmpArray;
	bool m_FileIsEmpty;
	void Clean_File();
	void Del_Emp();
	void Find_Emp();
	int IsExist(int id);
};