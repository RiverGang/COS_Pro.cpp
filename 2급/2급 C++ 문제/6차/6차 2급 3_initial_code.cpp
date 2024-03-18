// 다음과 같이 include를 사용할 수 있습니다.
#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> people) {
    // 여기에 코드를 작성해주세요.
    vector<int> answer(4);
    return answer;
}

// 아래는 테스트케이스 출력을 해보기 위한 main 함수입니다.
int main() {
    vector<int> people = {97, 102, 93, 100, 107};
    vector<int> ret = solution(people);

    // [실행] 버튼을 누르면 출력 값을 볼 수 있습니다.
    cout << "solution 함수의 반환 값은 {";
    for(int i = 0; i < 4; i++) {
        if(i != 0)
            cout << ", ";
        cout << ret[i];
    }
    cout << "} 입니다.\n";
}