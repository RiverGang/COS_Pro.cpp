/*
���� 8
���̰� n�� �迭 arr���� �����ϴ� �� ���� �� ù ��° ���ڿ��� 
�� ��° ���ڸ� �� ���� ��� ���
*/

#include <iostream>
using namespace std;
int main()
{
	int n;

	cout << "�迭�� ũ�� �Է� >> ";
	cin >> n;

	int arr[sizeof(n)];

	// �迭 �� �Է�
	for (int i = 0; i < n; i++)
	{
		int input;
		cout << "�Է°� >> ";
		cin >> input;
		arr[i] = input;
	}

	cout << endl;

	// ������ �迭�� ���� ��
	for (int i = 0; i < n-1; i++)
	{
		cout << arr[i] - arr[i + 1] << " ";
	}

	cout << endl;

	return 0;
}