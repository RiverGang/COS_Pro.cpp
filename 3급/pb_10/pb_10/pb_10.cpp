/*
���� 10

ǥ�� �Է����� ���ڿ� s�� �Է¹޾� s���� '1'�� ������ ���
*/

#include <iostream>
using namespace std;


int main()
{
	string s;
	
	cout << "�Է� >> ";
	cin >> s;

	int num = 0;
	for (int i = 0; i < s.size(); i++)
	{
		if (s[i] == '1')
			num += 1;
		else
			continue;
	}

	cout << "'1'�� ����: " << num << endl;
	
	return 0;
}