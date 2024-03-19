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
    int max_diff_grade = 1
    for (int i = 0; i < current_grade.size(); i++) {
        if (max_diff_grade < current_grade[i] - last_grade[i])
            max_diff_grade = current_grade[i] - last_grade[i];
    }
    return max_diff_grade;
}

int solution(vector<int> current_grade, vector<int> last_grade) {
    vector<int> rank = func_b(current_grade);
    int max_diff_grade = func_c(current_grade, last_grade);
    int answer = func_a(current_grade, last_grade, rank, max_diff_grade);
    return answer;
}
