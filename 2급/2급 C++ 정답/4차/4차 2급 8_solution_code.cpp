#include <string>
#include <vector>

using namespace std;

int solution(int n, vector<int> votes) {
    int answer = 0;
    int candidate = votes[0];
    int count = 1;
    for (int i = 1; i < votes.size(); i++) {
        if (candidate == votes[i]) {
            count++;
        }
        else {
            count--;
        }
        if (count == 0) {
            candidate = votes[i];
            count = 1;
        }
    }

    int test_count = 0;
    for (int i = 0; i < votes.size(); i++) {
        if (votes[i] == candidate) {
            ++test_count;
        }
    }

    if (test_count > votes.size()/2) {
        answer = candidate;
    } else {
        answer = -1;
    }

    return answer;
}