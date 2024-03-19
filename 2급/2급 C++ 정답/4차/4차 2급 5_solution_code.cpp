#include <string>
#include <vector>

using namespace std;

int solution(vector<int> calorie) {
    int answer = 0;
    
    int min = 1000;
    for(int i = 0; i < calorie.size(); i++) {
        if(min < calorie[i])
            answer += (calorie[i] - min);
        else
            min = calorie[i];
    }
    return answer;
}