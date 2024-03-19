#include <string>
#include <vector>

using namespace std;

int solution(vector<int> time_table, int n) {
    int answer = 0;

    vector<int> arr(n);
    
    for(int i = 0; i < time_table.size(); i++)
    	arr[i % n] += time_table[i];

    for(int i = 0; i < n; i++)
    	answer = answer > arr[i] ? answer : arr[i];
    
    return answer;
}