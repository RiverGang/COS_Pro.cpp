/*
문제 6

표준 입력으로 숫자 두 개를 입력받아 두 숫자가 같으면 두 숫자의 합을, 다르면 차를 출력
*/

# include <iostream>
using namespace std;

int main()
{
	int num1, num2;
	cout << "첫번째 정수 입력 > ";
	cin >> num1;
	cout << "두번째 정수 입력 > ";
	cin >> num2;

	if (num1 == num2) {
		cout << "두 숫자가 같습니다" << endl;
		cout << "결과: " << num1 + num2 << endl;
	}
	else {
		cout << "두 숫자가 다릅니다" << endl;
		if (num1 > num2)
			cout << "결과: " << num1 - num2 << endl;
		else
			cout << "결과: " << num2 - num1 << endl;
	}
	return 0;
}