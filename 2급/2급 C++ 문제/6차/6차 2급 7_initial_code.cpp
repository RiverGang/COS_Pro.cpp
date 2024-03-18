#include <iostream>
#include <string>
#include <vector>
using namespace std;

int solution(int money, vector<int> chairs, vector<int> desks) {
	int answer = 0;
	
	for(int i = 0; i < chairs.size(); i++) {
		for(int j = 0; j < desks.size(); j++) {
			int price = @@@;
			if(answer < price && @@@)
				answer = price;
		}
	}

	return answer;
}

// 아래는 테스트케이스 출력을 해보기 위한 main 함수입니다.
int main() {
	int money1 = 7;
	vector<int> chairs1 = {2, 5};
	vector<int> desks1 = {4, 3, 5};
	int ret1 = solution(money1, chairs1, desks1);

	// [실행] 버튼을 누르면 출력 값을 볼 수 있습니다.
	cout << "solution 함수의 반환 값은 " << ret1 << " 입니다." << endl;

	int money2 = 7;
	vector<int> chairs2 = {3};
	vector<int> desks2 = {5};
	int ret2 = solution(money2, chairs2, desks2);

	// [실행] 버튼을 누르면 출력 값을 볼 수 있습니다.
	cout << "solution 함수의 반환 값은 " << ret2 << " 입니다." << endl;	
}