#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector<int> func_a(vector<int> arr) {
    vector<int> counter(1001, 0); // int type "counter"���� size 1001, �� data 0 �ʱ�ȭ
    for (int i = 0; i < arr.size(); i++)
        counter[arr[i]]++;
    return counter; //�� �ڿ����� ������ ��� �迭 counter ����
}

int func_b(vector<int> arr) {
    int ret = 0;
    for (int i = 0; i < arr.size(); i++) {
        if (ret < arr[i])
            ret = arr[i];
    }
    return ret; // �迭�� ������ �� ���� ū �� ����
}

int func_c(vector<int> arr) {
    const int INF = 1001;
    int ret = INF;
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] != 0 && ret > arr[i])
            ret = arr[i];
    }
    return ret; //�迭�� ������ �� ���� ���� �� ����
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