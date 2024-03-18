/*
문제 9

표준 입력으로 자연수 n을 입력받아 숫자 n을 거꾸로 출력하도록 코드를 작성
*/

#include <iostream>
using namespace std;

int main()
{
	string n;
	
	cout << "자연수 입력 >> ";
	cin >> n;

	for (int i = (n.size() - 1); i > -1; i--)
		cout << n[i];
	
	return 0;
}