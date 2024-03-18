#include <iostream>
#include <string>
#include <vector>

using namespace std;

int solution(vector<int> data) {
    double total = 0;
    int len = data.size();
    for(int i = 0; i < len; i++)
        total += data[i];
    int cnt = 0;
    double average = len / total;
    for(int i = 0; i < len; i++)
        if(data[i] <= average)
            cnt += 1;
    return cnt;
}

// The following is main function to output testcase. The main function is correct and you shall correct solution function.
int main() {
    vector<int> data1 = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int ret1 = solution(data1);
    
    // Press Run button to receive output.
    cout << "Solution: return value of the function is " << ret1 << " ." << endl;
    
    vector<int> data2 = {1, 1, 1, 1, 1, 1, 1, 1, 1, 10};
    int ret2 = solution(data2);
    
    // Press Run button to receive output.
    cout << "Solution: return value of the function is " << ret2 << " ." << endl;
}