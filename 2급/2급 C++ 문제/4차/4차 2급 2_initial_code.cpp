#include <string>
#include <vector>
#include <iostream>

using namespace std;

int func_a(int passed, int non_passed) {
    return (passed > 1 && non_passed == 0);
}

int func_b(vector<int> scores) {
    int answer = 0;
    if(scores[0] < 40) {
        answer++;
    }
    if(scores[1] < 44) {
        answer++;
    }
    if(scores[2] < 35) {
        answer++;
    }
    return answer;
}

int func_c(vector<int> scores) {
    int answer = 0;
    if(scores[0] >= 80) {
        answer++;
    }
    if(scores[1] >= 88) {
        answer++;
    }
    if(scores[2] >= 70) {
        answer++;
    }
    return answer;
}

int solution(vector<vector<int>> scores) {
    int answer = 0;
    for(int i = 0; i<scores.size(); i++) {
        int passed = func_@@@(@@@);
        int non_passed = func_@@@(@@@);
        answer += func_@@@(@@@, @@@);
    }
    return answer;
}

// 아래는 테스트케이스 출력을 해보기 위한 main 함수입니다.
int main() {
    vector<vector<int>> scores1 = {
        {30, 40, 100},
        {97, 88, 95}
    };
    int ret1 = solution(scores1);
    
    // [실행] 버튼을 누르면 출력 값을 볼 수 있습니다.
    cout << "solution 함수의 반환 값은 " << ret1 << " 입니다." << endl;
    
    vector<vector<int>> scores2 = {
        {90, 88, 70},
        {85, 90, 90},
        {100, 100, 70},
        {30, 90, 80},
        {40, 10, 20},
        {83, 88, 80}
    };
    int ret2 = solution(scores2);
    
    // [실행] 버튼을 누르면 출력 값을 볼 수 있습니다.
    cout << "solution 함수의 반환 값은 " << ret2 << " 입니다." << endl;
}