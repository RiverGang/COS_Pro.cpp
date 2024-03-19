#include <string>
#include <vector>

using namespace std;

int solution(vector<int> scores, int cutline) {
    int answer = 0;
    for(int i = 0; i < scores.size(); ++i)
        if(scores[i] >= cutline)
            answer += 1;
    return answer;
}