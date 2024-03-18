#include <iostream>
#include <string>
#include <vector>

using namespace std;

int solution(vector<int> socks) {
	int answer = 0;

	vector<int> count(10, 0);
	for(int i = 0; i < socks.size(); i++)
		count[socks[i]]++;

	for(int i = 0; i < 10; i++)
		answer += (count[i] % 2);

	return answer;
}

// 아래는 테스트케이스 출력을 해보기 위한 main 함수입니다. 아래에는 잘못된 부분이 없으니 위의 코드만 수정하세요.
int main() {
	vector<int> socks = {1, 2, 1, 3, 2, 1};
	int ret = solution(socks);

	// [실행] 버튼을 누르면 출력 값을 볼 수 있습니다.
	cout << "solution 함수의 반환 값은 " << ret << " 입니다." << endl;
}