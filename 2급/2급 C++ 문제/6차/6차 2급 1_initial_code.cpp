#include <iostream>
#include <string>
#include <vector>

using namespace std;

int solution(vector<int> temperature, int A, int B) {
    int answer = 0;
    for(int i = 0; i < temperature.size(); i++) {
        if(temperature[i] > temperature[A] && temperature[i] > temperature[B])
            answer += 1;
    }
    return answer;
}

// 아래는 테스트케이스 출력을 해보기 위한 main 함수입니다. 아래에는 잘못된 부분이 없으니 위의 코드만 수정하세요.
int main() {
	vector<int> temperature = {3, 2, 1, 5, 4, 3, 3, 2};
	int A = 1;
	int B = 6;
	int ret = solution(temperature, A, B);

	// [실행] 버튼을 누르면 출력 값을 볼 수 있습니다.
	cout << "solution 함수의 반환 값은 " << ret << " 입니다." << endl;
}