/*
���� 5 

ǥ�� �Է����� ���� �� ���� �Է¹޾�, �� ���� ������ ���

*/

#include <iostream>
using namespace std;

int main()
{
	int num;
	
	cout << "������ �Է��ϼ��� >> ";
	cin >> num;

	if (num < 0)
		num *= -1; // ���Կ����� *=
	
	cout << "���밪: " << num;
	return 0;
}