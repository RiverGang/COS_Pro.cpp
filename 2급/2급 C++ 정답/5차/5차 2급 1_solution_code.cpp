#include <string>
#include <vector>

using namespace std;

int solution(vector<vector<int>> ladders, int win) {
    int answer = 0;
    
    vector<int> player = { 1, 2, 3, 4, 5, 6 };
    
    for(int i = 0; i < ladders.size(); i++) {
        int temp = player[ladders[i][0]-1];
        player[ladders[i][0]-1] = player[ladders[i][1]-1];
        player[ladders[i][1]-1] = temp;
    }
    
    answer = player[win-1];
    
    return answer;
}