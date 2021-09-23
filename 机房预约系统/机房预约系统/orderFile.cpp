#include "orderFile.h"
void OrderFile::fen(string a, map<string, string> &m) {
	string key;
	string value;
	int pos = a.find(":");
	if (pos != -1)
	{
		key = a.substr(0, pos);
		value = a.substr(pos + 1, a.size() - pos - 1);
		m.insert(make_pair(key, value));
	}
}
OrderFile::OrderFile()
{
	ifstream ifs;
	ifs.open(ORDER_FILE, ios::in);
	string date;
	string interval;
	string stuId;
	string stuName;
	string roomId;
	string status;
	this->m_Size = 0;
	while (ifs >> date && ifs >> interval && ifs >> stuId && ifs >> stuName && ifs >> roomId && ifs >> status)
	{
		// cout << date << endl;
		// cout << interval << endl;
		// cout << stuId << endl;
		// cout << stuName << endl;
		// cout << roomId << endl;
		// cout << status << endl;
		map<string, string> m;
		fen(date, m);
		fen(interval, m);
		fen(stuId, m);
		fen(stuName, m);
		fen(roomId, m);
		fen(status, m);
		this->m_orderData.insert(make_pair(this->m_Size, m));
		this->m_Size++;
	}
	ifs.close();
}
void OrderFile::updateOrder() {
	if (this->m_Size == 0)
	{
		return;
	}
	ofstream ofs(ORDER_FILE, ios::out | ios::trunc);
	int length = m_Size;
	for (int i = 0; i < length; i++)
	{
		ofs << "date:" << this->m_orderData[i]["date"] << " ";
		ofs << "interval:" << this->m_orderData[i]["interval"] << " ";
		ofs << "stuId:" << this->m_orderData[i]["stuId"] << " ";
		ofs << "stuName:" << this->m_orderData[i]["stuName"] << " ";
		ofs << "roomId:" << this->m_orderData[i]["roomId"] << " ";
		ofs << "status:" << this->m_orderData[i]["status"] << " " << endl;
	}
	ofs.close();
}