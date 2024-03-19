#include <string>
#include <vector>

using namespace std;

int solution(vector<int> votes, int N, int K) {
    int counter[11] = {0};
    for(int i = 0; i < votes.size(); ++i)
        counter[votes[i]] += 1;
    int answer = 0;
    for(int i = 0; i <= N; ++i)
        if(counter[i] == K)
            answer += 1;
    return answer;
}