/*
문제 3

별("*")로 밑변과 높이가 N인 직각삼각형을 거꾸로 출력
표준 입력으로 자연수 N을 입력받아 밑변과 높이가 N인 직각삼각형을 거꾸로 출력

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
	
	cout << "자연수를 입력하세요 >> ";
	cin >> num;

	for (int i = 0; i < num; i++) // 입력한 자연수만큼의 높이
	{
		for (int j = (num-i); j > 0; j--) // 입력한 자연수만큼의 밑변과 거꾸로 출력
			cout << "*";
		cout << endl;
	}

	return 0;
}