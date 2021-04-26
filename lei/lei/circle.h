#pragma once
#include<iostream>
#include "point.h"
using namespace std;
class circle {
public:
void setr(int r1);
int getr();
void setcenter(point center1);
point getcenter();
private:
int r;
point center;
};