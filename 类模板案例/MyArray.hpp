#pragma once
#include <iostream>
using namespace std;

template<typename T>
class MyArray {
public:
	MyArray(int capacity) {
		this->m_Capacity = capacity;
		this->m_Size = 0;
		this->pAddress = new T[this->m_Capacity];
		cout << "�������" << endl;
	}

	MyArray(const MyArray & m) {
		this->m_Capacity = m.m_Capacity;
		this->m_Size = m.m_Size;
		this->pAddress = new T[m.m_Capacity];
		for (int i = 0; i < this->m_Size; i++) {
			this->pAddress[i] = m.pAddress[i];
		}
		cout << "��������" << endl;
	}

	MyArray & operator=(const MyArray & m) {
		if (this->pAddress!= NULL)
		{
			delete this->pAddress;
			this->pAddress = NULL;
			this->m_Capacity = 0;
			this->m_Size = 0;
		}
		this->m_Capacity = m.m_Capacity;
		this->m_Size = m.m_Size;
		this->pAddress = new T[m.m_Capacit];
		for (int i = 0; i < this->m_Size; i++) {
			this->pAddress[i] = m.pAddress[i];
		}
		return* this;
	}

	~MyArray() {
		if (this->pAddress != NULL) {
			delete pAddress;
			this->pAddress = NULL;
		}
		cout << "��������" << endl;
	}
private:
	T * pAddress;
	int m_Capacity;
	int m_Size;
};