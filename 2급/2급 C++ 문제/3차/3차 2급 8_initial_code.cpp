#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(vector<vector<int>> programs) {
    int answer = 0;
    vector<int> used_tv(25);

    for(int i = 0; i < programs.size(); i++)
        for(int j = programs[i][0]; j < programs[i][1]; j++)
            used_tv[j]++;
    
    for(int i = 0; i < used_tv.size(); i++)
        if(used_tv[i] >= 1)
            answer++;

    return answer;
}

// 아래는 테스트케이스 출력을 해보기 위한 main 함수입니다. main함수는 잘못된 부분이 없으니, solution함수만 수정하세요.
int main() {
    vector<vector<int>> programs = {{1, 6}, {3, 5}, {2, 8}};
    int ret = solution(programs);
    
    // [실행] 버튼을 누르면 출력 값을 볼 수 있습니다.
    cout << "solution 함수의 반환 값은 " << ret << " 입니다." << endl;
}