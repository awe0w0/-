/*��������ʵ��һ��ͨ�õ������� Ҫ��ʵ��
* ���Զ����õ����������Լ��Զ��������������ݽ��д洢
* �������е����ݴ洢������
* ���캯���п��Դ������������
* �ṩ��Ӧ�Ŀ������캯���Ѿ�operator=��ֹǳ��������
* �ṩβ�巨��βɾ���������е����ݽ������Ӻ�ɾ��
* ����ͨ���±�ķ�ʽ���������е�Ԫ��
* ���Ի�ȡ���鵱ǰԪ�ظ��������������
*/

#include <iostream>
using namespace std;

int* i = new int(0);
int* ch = new int(0);

#include "MyArray.hpp"


int main() {
	showMenu();
	int choice = 0;
	while (true) {
		cout << "������ѡ��" << endl;
		cin >> choice;
		switch (choice)
		{
		case 0:
			delete intArr;
			delete floatArr;
			delete doubleArr;
			delete charArr;
			delete stringArr;
			return 0;
			break;
		case 1:
			choiceType();
			break;
		case 2:
			addT();
			break;
		case 3:
			delT();
			break;
		case 4:
			printT();
			break;
		case 5:
			printiT();
			break;
		case 6:
			printArr();
			break;
		case 7:
			printCapacity();
			break;
		case 8:
			clean();
		default:
			break;
		}

	}
	
	return 0;
}