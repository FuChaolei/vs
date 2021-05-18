#pragma once
#include <iostream>
using namespace std;
#include "Identity.h"
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
    //学生学号
    int m_Id;
};