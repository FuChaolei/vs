#include<iostream>
using namespace std;
class cpu {
public:
	virtual void calculate() = 0;
};
class videocard {
public:
	virtual void display() = 0;
};
class memery {
public:
	virtual void storage() = 0;
};
class computer {
public:
	computer(cpu* cpu1, videocard* videocard1, memery* memery1) {
		m_cpu = cpu1;
		m_videocard = videocard1;
		m_memery = memery1;
	}
	void work() {
		m_cpu->calculate();
		m_memery->storage();
		m_videocard->display();
	}
	~computer() {
		if (m_cpu != NULL) {
			delete m_cpu;
			m_cpu = NULL;
		}
		if (m_memery != NULL) {
			delete m_memery;
			m_memery = NULL;
		}
		if (m_videocard != NULL) {
			delete m_videocard;
			m_videocard = NULL;
		}
	}
private:
	cpu * m_cpu;
	videocard* m_videocard;
	memery* m_memery;

};
class IntelCPU :public cpu {
public:
	void calculate() {
		cout << "因特尔cpu"<<endl;
	}
};
class Intelvideo :public videocard {
public:
	void display() {
		cout << "因特尔xianka" << endl;
	}
};
class Intelmemery :public memery {
public:
	void storage() {
		cout << "因特尔cunchu" << endl;
	}
};
class LenoveCPU :public cpu {
public:
	void calculate() {
		cout << "联想cpu" << endl;
	}
};
class Lenovevideo :public videocard {
public:
	void display() {
		cout << "联想xianka" << endl;
	}
};
class Lenovememery :public memery {
public:
	void storage() {
		cout << "联想cunchu" << endl;
	}
};
void test() {
	cpu * interc = new IntelCPU;
	memery * interm = new Intelmemery;
	videocard * interv = new Intelvideo;
	computer*computer1 = new computer(interc,interv,interm);
	computer1->work();
	delete computer1;
	cout << "---------------------first" << endl;
	computer*computer2 = new computer(new LenoveCPU,new Lenovevideo, new Lenovememery);
	computer2->work();
	delete computer2;
	cout << "---------------------2" << endl;
	computer*computer3 = new computer(new LenoveCPU, new Intelvideo, new Lenovememery);
	computer3->work();
	delete computer3;

}
int main() {
	test();
	system("pause");
	return 0;
}