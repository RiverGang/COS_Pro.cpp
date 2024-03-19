#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector<int> func_a(vector<int> arr) {
    vector<int> counter(1001, 0); // int type "counter"벡터 size 1001, 각 data 0 초기화
    for (int i = 0; i < arr.size(); i++)
        counter[arr[i]]++;
    return counter; //각 자연수의 갯수가 담긴 배열 counter 생성
}

int func_b(vector<int> arr) {
    int ret = 0;
    for (int i = 0; i < arr.size(); i++) {
        if (ret < arr[i])
            ret = arr[i];
    }
    return ret; // 배열의 데이터 중 가장 큰 수 리턴
}

int func_c(vector<int> arr) {
    const int INF = 1001;
    int ret = INF;
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] != 0 && ret > arr[i])
            ret = arr[i];
    }
    return ret; //배열의 데이터 중 가장 작은 수 리턴
}

int solution(vector<int> arr) {
    vector<int> counter = func_a(arr);
    int max_cnt = func_b(counter);
    int min_cnt = func_c(counter);
    return max_cnt / min_cnt;
}

// The following is main function to output testcase.
int main() {
    vector<int> arr = { 1, 2, 3, 3, 1, 3, 3, 2, 3, 2 };
    int ret = solution(arr);

    // Press Run button to receive output.
    cout << "Solution: return value of the function is " << ret << " ." << endl;
}