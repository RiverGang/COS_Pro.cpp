/*
����2

ǥ�� �Է����� ���ڿ� �� ���� �Է¹޾�, �� ���ڿ� �� �� �� ���ڿ��� ����ϼ���

*/

#include <iostream>
#include <string.h>
using namespace std;
int main()
{
	string A;
	string B;

	cout << "���ڿ� A �Է� >> ";
	cin >> A;
	cout << "���ڿ� B �Է� >> ";
	cin >> B;

	// �� �� ���ڿ� ���
	if (A.size() > B.size())
		cout << A;
	else if (A.size() < B.size())
		cout << B;
	
	return 0;
}