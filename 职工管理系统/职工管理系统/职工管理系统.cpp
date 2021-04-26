#include<iostream>
using namespace std;
#include"workerManager.h"
#include"employee.h"
#include"manager.h"
#include"boss.h"
#include<string>
void test() {
	Worker *worker = new Employee(1, "张三",1);
	worker->showInfo();
	delete worker;
}
int main() {
	WorkerManager wm;
	
	while (true) {
		wm.showmenu();
		cout << "请输入您的选择:" << endl;
		int chose;
		cin >> chose;
		switch (chose)
		{
		case 0:
			wm.exitsystem();
			break;
		case 1:
			wm.Add_Emp();
			wm.save();
			break;
		case 2:
			wm.Show_Emp();
			break;
		case 3:
			wm.Del_Emp();
			break;
		case 4:
			wm.Mod_Emp();
			break;
		case 5:
			wm.Find_Emp();
			break;
		case 6:
			wm.Sort_Emp();
			break;
		case 7:
		wm.Clean_File();
			break;
		default:
			system("cls");
			break;
		}
	}
	
	system("pause");
	return 0;
}