#include <string>
#include <vector>
#include <iostream>

using namespace std;

string func_a(string bundle, int start, int n) {
    string answer = "";
    for(int i=0; i<n; i++)
        answer += bundle[start+i*2];
    return answer;
}

vector<int> func_b(int score1, int score2) {
    vector<int> answer;
    if(score1 > score2) {
        answer.push_back(1);
        answer.push_back(score1);
    }
    else if(score1 < score2) {
        answer.push_back(2);
        answer.push_back(score2);
    }
    else {
        answer.push_back(0);
        answer.push_back(score1);
    }
    return answer;
}

int func_c(string card) {
    int answer = 0;
    for(int i = 0; i < card.size(); i++) {
        answer += card[i] - 'a' + 1;
    }
    return answer;
}

vector<int> solution(int n, string bundle) {
    string a_cards = func_a(bundle, @@@, @@@);
    string b_cards = func_a(bundle, @@@, @@@);
    int a_score = func_c(@@@);
    int b_score = func_c(@@@);
    vector<int> answer = func_b(@@@, @@@);
    return answer;
}

// 아래는 테스트케이스 출력을 해보기 위한 main 함수입니다.
int main() {
    int n = 4;
    string bundle = "cacdbdedccbb";
    vector<int> ret = solution(n, bundle);
    
    // [실행] 버튼을 누르면 출력 값을 볼 수 있습니다.
    cout << "solution 함수의 반환 값은 {" << ret[0] << ", " << ret[1] << "} 입니다." << endl;
}