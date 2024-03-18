#include <iostream>
#include <string>
#include <vector>

using namespace std;

bool solution(string password) {
	bool answer;

	int capital_count = 0, small_count = 0, digit_count = 0;
	for(int i = 0; i < password.length(); i++) {
		if(password[i] >= 'A' && password[i] <= 'Z')
			capital_count++;
		else if(password[i] >= 'a' && password[i] <= 'z')
			small_count++;
		else if(password[i] >= @@@ && password[i] <= @@@)
			digit_count++;
	}

	if(@@@)
		answer = true;
	else
		answer = false;

	return answer;
}

// 아래는 테스트케이스 출력을 해보기 위한 main 함수입니다.
int main() {
	string password1 = "helloworld";
	bool ret1 = solution(password1);

	// [실행] 버튼을 누르면 출력 값을 볼 수 있습니다.
	cout << "solution 함수의 반환 값은 " << (ret1 ? "true" : "false") << " 입니다." << endl;

	string password2 = "Hello123";
	bool ret2 = solution(password2);

	// [실행] 버튼을 누르면 출력 값을 볼 수 있습니다.
	cout << "solution 함수의 반환 값은 " << (ret2 ? "true" : "false") << " 입니다." << endl;
}