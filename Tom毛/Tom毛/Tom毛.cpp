#include <iostream>
using namespace std;
#include <string>
class Animal {
public:
	Animal(){
		cout << "Animal构造函数调用" << endl;
	}
	virtual void Speak() = 0;
};
class cat :public Animal {
public:
	cat(string name) {
		cout << "cat构造函数调用！" << endl;
		m_Name = new string(name);
	}
	void Speak() {
		cout << *m_Name << "小猫在说话！" << endl;
	}
private:
	string *m_Name;
};
int main() {
	Animal* cat1 = new cat("tom");
	cat1->Speak();
	delete cat1;
	system("pause");
	return 0;
}