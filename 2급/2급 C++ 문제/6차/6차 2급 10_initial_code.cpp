// 다음과 같이 include를 사용할 수 있습니다.
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int solution(int weight, vector<int> boxes) {
    int answer = 0;

	for(int i = 0; i < boxes.size(); i++)
		if(@@@)
			answer++;
	
    return answer;
}

// 아래는 테스트케이스 출력을 해보기 위한 main 함수입니다.
int main() {
    int weight = 600;
    vector <int> boxes = {653, 670, 533, 540, 660};
    int ret = solution(weight, boxes);
    
    // [실행] 버튼을 누르면 출력 값을 볼 수 있습니다.
    cout << "solution 함수의 반환 값은 " << ret << " 입니다." << endl;
}