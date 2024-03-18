#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector<int> func_a(vector<int> arr){
    vector<int> counter(1001, 0);
    for(int i = 0; i < arr.size(); i++)
        counter[arr[i]]++;
    return counter;
}

int func_b(vector<int> arr){
    int ret = 0;
    for(int i = 0; i < arr.size(); i++){
        if(ret < arr[i])
            ret = arr[i];
    }
    return ret;
}

int func_c(vector<int> arr){
    const int INF = 1001;
    int ret = INF;
    for(int i = 0; i < arr.size(); i++){
        if(arr[i] != 0 && ret > arr[i])
            ret = arr[i];
    }
    return ret;
}

int solution(vector<int> arr) {
    vector<int> counter = func_@@@(@@@);
    int max_cnt = func_@@@(@@@);
    int min_cnt = func_@@@(@@@);
    return max_cnt / min_cnt;
}

// The following is main function to output testcase.
int main() {
    vector<int> arr = {1, 2, 3, 3, 1, 3, 3, 2, 3, 2};
    int ret = solution(arr);

    // Press Run button to receive output.
    cout << "Solution: return value of the function is " << ret << " ." << endl;
}