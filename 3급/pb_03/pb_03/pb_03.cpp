/*
���� 3

��("*")�� �غ��� ���̰� N�� �����ﰢ���� �Ųٷ� ���
ǥ�� �Է����� �ڿ��� N�� �Է¹޾� �غ��� ���̰� N�� �����ﰢ���� �Ųٷ� ���

*****
****
***
**
*


*/

#include <iostream>
using namespace std;

int main()
{
	int num;
	
	cout << "�ڿ����� �Է��ϼ��� >> ";
	cin >> num;

	for (int i = 0; i < num; i++) // �Է��� �ڿ�����ŭ�� ����
	{
		for (int j = (num-i); j > 0; j--) // �Է��� �ڿ�����ŭ�� �غ��� �Ųٷ� ���
			cout << "*";
		cout << endl;
	}

	return 0;
}