#pragma once
#include<iostream>
using namespace std;
template<class T>
class MyArray {
public:
	MyArray(int capacity) {
		this->m_Capacity = capacity;
		this->m_Size = 0;
		pAddress = new T[this->m_Capacity];
	}
	MyArray(const MyArray & arr) {
		this->m_Capacity = arr.m_Capacity;
		this->m_Size = arr.m_Size;
		this->pAddress = new T[this->m_Capacity];
		for (int i = 0; i < this->m_Capacity; i++)
		{
			this->pAddress[i] = arr.pAddress[i];
		}
	}
	MyArray& operator=(const MyArray& myarray) {
		if (this->pAddress != NULL) {
			delete[]this->pAddress;
			this->m_Capacity = 0;
			this->m_Size = 0;
		}
		this->m_Capacity = myarray.m_Capacity;
		this->m_Size = myarray.m_Size;
		this->pAddress = new T[this->m_Capacity];
		for ( int i = 0;i < this.m_size; i++)
		{
			this->pAddress[i] = myarray[i];
		}
		return *this;
	}
	T& operator [](int index) {
		return this->pAddress[index];
	}
	void Push_back(const T &val) {
		if (this->m_Capacity == this->m_Size)
			return;
		this->pAddress[this->m_Size] = val;
		this->m_Size++;
	}
	void Pop_back() {
		if (this->m_Size==0)
		{
			return;
		}
		this->m_Size--;
	}
	int getCapacity() {
		return this->m_Capacity;
	}
	int getSize() {
		return this->m_Size;
	}
	~MyArray() {
		if (this->pAddress!=NULL)
		{
			delete[] this->pAddress;
			this->pAddress = NULL;
			this->m_Capacity = 0;
			this->m_Size = 0;
		}
	}
private:
	T * pAddress;
	int m_Capacity;
	int m_Size;
};