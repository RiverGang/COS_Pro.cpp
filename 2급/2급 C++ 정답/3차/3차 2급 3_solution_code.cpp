#include <string>
#include <vector>

using namespace std;

int solution(vector<int> scores) {
    int answer = 0;
    
    int max = 0;
    int min = 100;
    int sum = 0;
    
    for(int i = 0; i < scores.size(); ++i) {
        if(max < scores[i])
            max = scores[i];
        if(min > scores[i])
            min = scores[i];
        
        sum = sum + scores[i];
    }
    
    sum = sum - (max + min);
    answer = sum / (scores.size() - 2);
    
    return answer;
}