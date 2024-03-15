/*
문제2

표준 입력으로 문자열 두 개를 입력받아, 두 문자열 중 더 긴 문자열을 출력하세요

*/

#include <iostream>
#include <string.h>
using namespace std;
int main()
{
	string A;
	string B;

	cout << "문자열 A 입력 >> ";
	cin >> A;
	cout << "문자열 B 입력 >> ";
	cin >> B;

	// 더 긴 문자열 출력
	if (A.size() > B.size())
		cout << A;
	else if (A.size() < B.size())
		cout << B;
	
	return 0;
}