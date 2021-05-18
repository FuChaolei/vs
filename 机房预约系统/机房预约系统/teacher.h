#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;
#include "Identity.h"
class Teacher : public Identity
{
public:
    Teacher(/* args */);
    //有参构造（职工编号，姓名，密码）
    Teacher(int empId, string name, string pwd);
    //菜单界面
    virtual void operMenu();
    //查看所有预约
    void showAllOrder();
    //审核预约
    void validOrder();
    int m_EmpId; //教师编号
};
