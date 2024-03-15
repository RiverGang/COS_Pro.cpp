/*
문제 5 

표준 입력으로 숫자 한 개를 입력받아, 그 수의 절댓값을 출력

*/

#include <iostream>
using namespace std;

int main()
{
	int num;
	
	cout << "정수를 입력하세요 >> ";
	cin >> num;

	if (num < 0)
		num *= -1; // 대입연산자 *=
	
	cout << "절대값: " << num;
	return 0;
}