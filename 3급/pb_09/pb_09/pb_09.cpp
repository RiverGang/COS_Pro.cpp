/*
���� 9

ǥ�� �Է����� �ڿ��� n�� �Է¹޾� ���� n�� �Ųٷ� ����ϵ��� �ڵ带 �ۼ�
*/

#include <iostream>
using namespace std;

int main()
{
	string n;
	
	cout << "�ڿ��� �Է� >> ";
	cin >> n;

	for (int i = (n.size() - 1); i > -1; i--)
		cout << n[i];
	
	return 0;
}