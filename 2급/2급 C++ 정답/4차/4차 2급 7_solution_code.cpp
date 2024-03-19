#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> mid_scores, vector<int> final_scores) {
    vector<int> answer;
    int min =100, max=0;
    for(int i =0; i<final_scores.size();i++){
            int diff = final_scores[i]-mid_scores[i];
            min = diff < min ? diff:min;
            max = diff > max ? diff:max;
    }
    answer.push_back(max);
    answer.push_back(min);
    return answer;
}