#include <iostream>
using namespace std;
#include <string>
class Animal {
public:
	Animal(){
		cout << "Animal���캯������" << endl;
	}
	virtual void Speak() = 0;
};
class cat :public Animal {
public:
	cat(string name) {
		cout << "cat���캯�����ã�" << endl;
		m_Name = new string(name);
	}
	void Speak() {
		cout << *m_Name << "Сè��˵����" << endl;
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