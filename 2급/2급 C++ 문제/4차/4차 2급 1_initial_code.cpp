#include <string>
#include <vector>
#include <iostream>

using namespace std;

vector<int> solution(vector<string> schedule) {
    vector<int> answer;
    for(int i=0; i<10; i++) {
        if( schedule[i] == @@@ ) {
             answer.push_back(@@@);
        }
    }
    return answer;
}

// 아래는 테스트케이스 출력을 해보기 위한 main 함수입니다.
int main() {
    vector<string> schedule = {"O", "X", "X", "O", "O", "O", "X", "O", "X", "X"};
    vector<int> ret = solution(schedule);

    // [실행] 버튼을 누르면 출력 값을 볼 수 있습니다.
    cout << "solution 함수의 반환 값은 ";
    for(int i=0; i<ret.size(); i++)
        cout << ret[i] << ", ";
    cout << " 입니다.";
}