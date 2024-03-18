#include <iostream>
#include <string>
#include <vector>

using namespace std;

int func_a(vector<int> current_grade, vector<int> last_grade, vector<int> rank, int max_diff_grade) {
    int arr_length = current_grade.size();
    int count = 0;
    for (int i = 0; i < arr_length; i++) {
        if (current_grade[i] >= 80 && rank[i] <= arr_length / 10)
            count++;
        else if (current_grade[i] >= 80 && rank[i] == 1)
            count++;
        else if (max_diff_grade == current_grade[i] - last_grade[i])
            count++;
    }
    return count;
}

vector<int> func_b(vector<int> current_grade) {
    int arr_length = current_grade.size();
    vector<int> rank(arr_length, 1);
    for (int i = 0; i < arr_length; i++)
        for (int j = 0; j < arr_length; j++)
            if (current_grade[i] < current_grade[j])
                rank[i]++;
    return rank;
}

int func_c(vector<int> current_grade, vector<int> last_grade) {
    int max_diff_grade = 1;
    for (int i = 0; i < current_grade.size(); i++) {
        if (max_diff_grade < current_grade[i] - last_grade[i])
            max_diff_grade = current_grade[i] - last_grade[i];
    }
    return max_diff_grade;
}

int solution(vector<int> current_grade, vector<int> last_grade) {
    vector<int> rank = func_@@@(@@@);
    int max_diff_grade = func_@@@(@@@);
    int answer = func_@@@(@@@);
    return answer;
}

// 아래는 테스트케이스 출력을 해보기 위한 main 함수입니다.
int main() {
    vector<int> current_grade = {70, 100, 70, 80, 50, 95};
    vector<int> last_grade = {35, 65, 80, 50, 20, 60};
    int ret = solution(current_grade, last_grade);

    // [실행] 버튼을 누르면 출력 값을 볼 수 있습니다.
    cout << "solution 함수의 반환 값은 " << ret << " 입니다." << endl;
}