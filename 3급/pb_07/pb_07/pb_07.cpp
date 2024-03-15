/*

문제 7

표준 입력으로 자연수 n을 받아 1부터 n까지의 정수를 출력

*/

# include<iostream>
using namespace std;

int main()
{
	int num;
	cout << "자연수 입력 >> ";
	cin >> num;

	for (int i = 1; i < num + 1; i++)
		cout << i << endl;

	return 0;
}