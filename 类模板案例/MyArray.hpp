#pragma once
#include <iostream>
using namespace std;
#include <string>

template<typename T>
class MyArray {
public:
	MyArray(int capacity) {
		this->m_Capacity = capacity;
		this->m_Size = 0;
		this->pAddress = new T[this->m_Capacity];
	}

	MyArray(const MyArray& m) {
		this->m_Capacity = m.m_Capacity;
		this->m_Size = m.m_Size;
		this->pAddress = new T[m.m_Capacity];
		for (int i = 0; i < this->m_Size; i++) {
			this->pAddress[i] = m.pAddress[i];
		}
	}

	void addT(const T& t) {
		if (this->m_Capacity == this->m_Size) {
			return;
		}
		this->pAddress[this->m_Size] = t;
		this->m_Size++;
	}

	void delT() {
		if (this->m_Size == 0) {
			return;
		}
		this->m_Size--;
	}

	T& operator[](const int& size) {
		return this->pAddress[size];
	}

	MyArray& operator=(const MyArray& m) {
		if (this->pAddress != NULL)
		{
			delete[] this->pAddress;
			this->pAddress = NULL;
			this->m_Capacity = 0;
			this->m_Size = 0;
		}
		this->m_Capacity = m.m_Capacity;
		this->m_Size = m.m_Size;
		this->pAddress = new T[m.m_Capacity];
		for (int i = 0; i < this->m_Size; i++) {
			this->pAddress[i] = m.pAddress[i];
		}
		return *this;
	}

	void printArray() {
		for (int j = 0; j < this->m_Size; j++) {
			cout << (*this)[j] << endl;
		}
	}

	void printArr() {
		cout << "�����СΪ��" << this->m_Size << endl;
	}

	void printCapacity() {
		cout << this->m_Capacity << endl;
	}

	~MyArray() {
		if (this->pAddress != NULL) {
			delete[] pAddress;
			this->pAddress = NULL;
		}
	}

private:
	T* pAddress;
	int m_Capacity;
	int m_Size;
};

MyArray<int>* intArr = nullptr;
MyArray<float>* floatArr = nullptr;
MyArray<double>* doubleArr = nullptr;
MyArray<char>* charArr = nullptr;
MyArray<string>* stringArr = nullptr;

void showMenu() {
	cout << "--------------0.�˳�---------------" << endl;
	cout << "-------1.ѡ���������ͺ�����--------" << endl;
	cout << "----------2.�������Ԫ��-----------" << endl;
	cout << "----------3.ɾ������Ԫ��-----------" << endl;
	cout << "----------4.��ʾ����Ԫ��-----------" << endl;
	cout << "------5.ͨ���±��������Ԫ��-------" << endl;
	cout << "--------6.��ȡ����Ԫ������---------" << endl;
	cout << "--------7.��ȡ����Ԫ������---------" << endl;
	cout << "--------------8.����---------------" << endl;
}

void choiceType() {

	if (*i != 0) {
		cout << "�����ٴ����" << endl;
		return;
	}
	int choice = 0;
	cout << "1.int" << endl;
	cout << "2.float" << endl;
	cout << "3.double" << endl;
	cout << "4.char" << endl;
	cout << "5.string" << endl;
	cin >> choice;
	int co = 0;
	cout << "��������������" << endl;
	cin >> co;

	switch (choice) {
	case 1:
		intArr = new MyArray<int>(co);
		*ch = 1;
		break;
	case 2:
		floatArr = new MyArray<float>(co);
		*ch = 2;
		break;
	case 3:
		doubleArr = new MyArray<double>(co);
		*ch = 3;
		break;
	case 4:
		charArr = new MyArray<char>(co);
		*ch = 4;
		break;
	case 5:
		stringArr = new MyArray<string>(co);
		*ch = 5;
		break;
	default:
		break;
	}
	*i++;
	//if (intArr != nullptr || floatArr != nullptr || doubleArr != nullptr || charArr != nullptr || stringArr != nullptr) {
	//	cout << "�����ٴ����" << endl;
	//	return;
	//}
}

void addT() {
	if (intArr == nullptr && floatArr == nullptr && doubleArr == nullptr && charArr == nullptr && stringArr == nullptr) {
		cout << "���ȴ�������" << endl;
		return;
	}
	int in = 0;
	float f = 0;
	double d = 0;
	char c = ' ';
	string st = "";
	switch (*ch) {
	case 1:
		cout << "��������ֵ" << endl;
		cin >> in;
		intArr->addT(in);
		break;
	case 2:
		cout << "��������ֵ" << endl;
		cin >> f;
		floatArr->addT(f);
		break;
	case 3:
		cout << "��������ֵ" << endl;
		cin >> d;
		doubleArr->addT(d);
		break;
	case 4:
		cout << "��������ֵ" << endl;
		cin >> c;
		charArr->addT(c);
		break;
	case 5:
		cout << "��������ֵ" << endl;
		cin >> st;
		stringArr->addT(st);
		break;
	default:
		break;
	}
}

void delT() {
	if (intArr == nullptr && floatArr == nullptr && doubleArr == nullptr && charArr == nullptr && stringArr == nullptr) {
		cout << "���ȴ�������" << endl;
		return;
	}
	switch (*ch) {
	case 1:
		intArr->delT();
		break;
	case 2:
		floatArr->delT();
		break;
	case 3:
		doubleArr->delT();
		break;
	case 4:
		charArr->delT();
		break;
	case 5:
		stringArr->delT();
		break;
	default:
		break;
	}
}

void printT() {
	if (intArr == nullptr && floatArr == nullptr && doubleArr == nullptr && charArr == nullptr && stringArr == nullptr) {
		cout << "���ȴ�������" << endl;
		return;
	}
	switch (*ch) {
	case 1:
		intArr->printArray();
		break;
	case 2:
		floatArr->printArray();
		break;
	case 3:
		doubleArr->printArray();
		break;
	case 4:
		charArr->printArray();
		break;
	case 5:
		stringArr->printArray();
		break;
	default:
		break;
	}
}

void printiT() {
	if (intArr == nullptr && floatArr == nullptr && doubleArr == nullptr && charArr == nullptr && stringArr == nullptr) {
		cout << "���ȴ�������" << endl;
		return;
	}
	int ii = 0;
	cout << "��������Ҫ��ѯ�������±�" << endl;
	cin >> ii;
	switch (*ch) {
	case 1:
		cout << "��" << ii << "�������±����ֵΪ" << (*intArr)[ii] << endl;
		break;
	case 2:
		cout << "��" << ii << "�������±����ֵΪ" << (*floatArr)[ii] << endl;
		break;
	case 3:
		cout << "��" << ii << "�������±����ֵΪ" << (*doubleArr)[ii] << endl;
		break;
	case 4:
		cout << "��" << ii << "�������±����ֵΪ" << (*charArr)[ii] << endl;
		break;
	case 5:
		cout << "��" << ii << "�������±����ֵΪ" << (*stringArr)[ii] << endl;
		break;
	default:
		break;
	}
}

void printArr() {
	if (intArr == nullptr && floatArr == nullptr && doubleArr == nullptr && charArr == nullptr && stringArr == nullptr) {
		cout << "���ȴ�������" << endl;
		return;
	}
	switch (*ch) {
	case 1:
		intArr->printArr();
		break;
	case 2:
		floatArr->printArr();
		break;
	case 3:
		doubleArr->printArr();
		break;
	case 4:
		charArr->printArr();
		break;
	case 5:
		stringArr->printArr();
		break;
	default:
		break;
	}
}

void printCapacity() {
	if (intArr == nullptr && floatArr == nullptr && doubleArr == nullptr && charArr == nullptr && stringArr == nullptr) {
		cout << "���ȴ�������" << endl;
		return;
	}
	switch (*ch) {
	case 1:
		intArr->printCapacity();
		break;
	case 2:
		floatArr->printCapacity();
		break;
	case 3:
		doubleArr->printCapacity();
		break;
	case 4:
		charArr->printCapacity();
		break;
	case 5:
		stringArr->printCapacity();
		break;
	default:
		break;
	}
}

void clean() {
	system("cls");
	showMenu();
}