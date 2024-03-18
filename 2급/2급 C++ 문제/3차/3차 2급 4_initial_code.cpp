// 다음과 같이 include를 사용할 수 있습니다.
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int solution(vector<string> words, string word) {
    // 여기에 코드를 작성해주세요.
    int count = 0;
    return count;
}

// 아래는 테스트케이스 출력을 해보기 위한 main 함수입니다.
int main() {
    vector<string> words = {"CODE", "COED", "CDEO"};
    string word = "CODE";
    int ret = solution(words, word);
    
    // [실행] 버튼을 누르면 출력 값을 볼 수 있습니다.
    cout << "solution 함수의 반환 값은 " << ret << " 입니다." << endl;
}