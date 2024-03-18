#include <iostream>
#include <string>
#include <vector>
#include <functional>
#include <algorithm>

using namespace std;

int func_a(vector<int> scores, int score){
    int length = scores.size();
    for(int rank = 0; rank < length; rank++)
        if(scores[rank] == score)
            return rank + 1;
    return 0;
}

vector<int> func_b(vector<int> arr){
    sort(arr.begin(), arr.end(), greater<int>());
    return arr;
}

int func_c(vector<int> arr, int n){
    return arr[n];
}

int solution(vector<int> scores, int n) {
    int score = func_@@@(@@@);
    vector<int> sorted_scores = func_@@@(@@@);
    int answer = func_@@@(@@@);
    return answer;
}

// 아래는 테스트케이스 출력을 해보기 위한 main 함수입니다.
int main() {
    vector<int> scores = {20, 60, 98, 59};
    int n = 3;
    int ret = solution(scores, n);

    // [실행] 버튼을 누르면 출력 값을 볼 수 있습니다.
    cout << "solution 함수의 반환 값은 " << ret << " 입니다." << endl;
}