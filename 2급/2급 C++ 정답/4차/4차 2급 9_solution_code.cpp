#include <string>
#include <vector>

using namespace std;

int solution(vector<vector<int>> height) {
    int count = 0;
    
    int dx[4] = { -1, 1, 0, 0 };
    int dy[4] = { 0, 0, -1, 1 };
    
    for(int i = 0; i < 4; i++) {
        for(int j = 0; j < 4; j++) {
            bool is_danger = true;

            for(int k = 0; k < 4; k++) {
                if(0 <= i+dx[k] && i+dx[k] < 4 && 0 <= j+dy[k] && j+dy[k] < 4) {
                    if(height[i+dx[k]][j+dy[k]] <= height[i][j])
                        is_danger = false;
                }
            }

            if(is_danger)
                count++;
        }
    }
    
    return count;
}