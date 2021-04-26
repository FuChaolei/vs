#include<iostream>
#include "point.h"
#include "circle.h"
using namespace std;
void judge(circle &c1, point &p) {
	if ((c1.getcenter().getx() - p.getx())*(c1.getcenter().getx() - p.getx())
		+ (c1.getcenter().gety() - p.gety())*(c1.getcenter().gety() - p.gety())
		> (c1.getr()*c1.getr()))
		cout << "点在圆外" << endl;
	else if ((c1.getcenter().getx() - p.getx())*(c1.getcenter().getx() - p.getx())
		+ (c1.getcenter().gety() - p.gety())*(c1.getcenter().gety() - p.gety())
		== (c1.getr()*c1.getr()))
		cout << "点在圆上" << endl;
	else
		cout << "点在圆内" << endl;

}
int main() {
	circle c1;
	c1.setr(10);
	point center1;
	center1.setx(10);
	center1.sety(0);
	c1.setcenter(center1);
	point p;
	p.setx(13);
	p.sety(10);
	judge(c1, p);
	system("pause");
	return 0;
}
