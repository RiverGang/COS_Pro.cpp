#include <iostream>
#include <string>
#include <vector>

using namespace std;

int solution(vector<int> data) {
    double total = 0;
    int len = data.size();
    for(int i = 0; i < len; ++i)
        total += data[i];
    int cnt = 0;
    double average = (double)total / (double)len;
    for(int i = 0; i < len; ++i)
        if(data[i] <= average)
            cnt += 1;
    return cnt;
}