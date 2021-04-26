#include<iostream>
using namespace std;
#include<fstream>
int main() {
	ofstream ofs;
	ofs.open("test.txt", ios::out);
	ofs << "come on chaolei" << endl;
	ofs.close();
	system("pause");
	return 0;
}