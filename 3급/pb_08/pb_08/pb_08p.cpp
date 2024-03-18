/*
문제 8
길이가 n인 배열 arr에서 인접하는 두 숫자 중 첫 번째 숫자에서 
두 번째 숫자를 뺀 값을 모두 출력
*/

#include <iostream>
using namespace std;
int main()
{
	int n;

	cout << "배열의 크기 입력 >> ";
	cin >> n;

	int arr[sizeof(n)];

	// 배열 값 입력
	for (int i = 0; i < n; i++)
	{
		int input;
		cout << "입력값 >> ";
		cin >> input;
		arr[i] = input;
	}

	cout << endl;

	// 인접한 배열의 값의 차
	for (int i = 0; i < n-1; i++)
	{
		cout << arr[i] - arr[i + 1] << " ";
	}

	cout << endl;

	return 0;
}