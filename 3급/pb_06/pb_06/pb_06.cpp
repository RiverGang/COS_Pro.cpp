/*
���� 6

ǥ�� �Է����� ���� �� ���� �Է¹޾� �� ���ڰ� ������ �� ������ ����, �ٸ��� ���� ���
*/

# include <iostream>
using namespace std;

int main()
{
	int num1, num2;
	cout << "ù��° ���� �Է� > ";
	cin >> num1;
	cout << "�ι�° ���� �Է� > ";
	cin >> num2;

	if (num1 == num2) {
		cout << "�� ���ڰ� �����ϴ�" << endl;
		cout << "���: " << num1 + num2 << endl;
	}
	else {
		cout << "�� ���ڰ� �ٸ��ϴ�" << endl;
		if (num1 > num2)
			cout << "���: " << num1 - num2 << endl;
		else
			cout << "���: " << num2 - num1 << endl;
	}
	return 0;
}