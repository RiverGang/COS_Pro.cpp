/*
문제 10

표준 입력으로 문자열 s를 입력받아 s에서 '1'의 개수를 출력
*/

#include <iostream>
using namespace std;


int main()
{
	string s;
	
	cout << "입력 >> ";
	cin >> s;

	int num = 0;
	for (int i = 0; i < s.size(); i++)
	{
		if (s[i] == '1')
			num += 1;
		else
			continue;
	}

	cout << "'1'의 개수: " << num << endl;
	
	return 0;
}