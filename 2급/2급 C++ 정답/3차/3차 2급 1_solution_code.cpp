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
    int s = func_c(scores, n);
    vector<int> sorted_scores = func_b(scores);
    int answer = func_a(sorted_scores, s);
    return answer;
}