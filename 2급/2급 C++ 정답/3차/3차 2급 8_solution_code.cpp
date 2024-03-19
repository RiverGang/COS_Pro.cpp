#include <string>
#include <vector>

using namespace std;

int solution(vector<vector<int>> tv) {
    int answer = 0;
    
    vector<int> used_tv(25);
    for(int i = 0; i < tv[i].size(); i++) {
        for(int j = tv[i][0]; j < tv[i][1]; j++) {
            used_tv[j]++;
        }
    }
    
    for(int i = 0; i < used_tv.size(); i++) {
        if(used_tv[i] >= 2) {
            answer++;
        }
    }
    return answer;
}