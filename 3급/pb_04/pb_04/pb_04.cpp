/*
문제 4

문자열 한 개가 주어졌을 때, 주어진 문자열 양 옆에 큰따옴표를 붙이려 합니다.
표준 입력으로 문자열 한 개를 입력받아, 입력받은 문자열 양 옆에 큰따옴표를 붙여 출력하도록 코드를 작성
*/


#include <iostream>
using namespace std;

int main()
{
	string str;
	
	cout << "입력 >> ";
	cin >> str;
	cout << "\"" << str << "\"" << endl;
	return 0;
}