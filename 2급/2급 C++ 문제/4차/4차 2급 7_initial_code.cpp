#include <iostream>
#include <string>
#include <vector>

using namespace std;

int func_a(vector<int> scores1, vector<int> scores2) {
    int answer = 0;
    for(int i=0; i<scores1.size(); i++)
        if (answer < scores2[i] - scores1[i])
            answer = scores2[i] - scores1[i];
    return answer;
}

int func_b(vector<int> scores1, vector<int> scores2) {
    int answer = 0;
    for(int i=0; i<scores1.size(); i++)
        if (answer > scores1[i] - scores2[i])
            answer = scores2[i] - scores1[i];
    return answer;
}

vector<int> solution(vector<int> mid_scores, vector<int> final_scores) {
    vector<int> answer;
    answer.push_back(func_a(mid_scores, final_scores));
    answer.push_back(func_b(mid_scores, final_scores));
    return answer;
}

// 아래는 테스트케이스 출력을 해보기 위한 코드입니다. 아래에는 잘못된 부분이 없으니, 위의 코드만 수정하세요.
int main() {
    vector<int> mid_scores ={20, 50, 40};
    vector<int> final_scores = {10, 50, 70};
    vector<int> ret = solution(mid_scores, final_scores);
    
    // [실행] 버튼을 누르면 출력 값을 볼 수 있습니다.
    cout << "solution 함수의 반환 값은 " << ret[0] << ", " << ret[1] << " 입니다." << endl;
    
}