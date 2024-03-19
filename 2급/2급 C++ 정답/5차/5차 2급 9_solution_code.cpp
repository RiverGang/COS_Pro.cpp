#include <vector>

using namespace std;

vector<int> solution(vector<int> score) {
	vector<int> answer;

	answer.resize(score.size());

	for(int i = 0; i < score.size(); i++) {
		answer[i] = 1;
		for(int j = 0; j < score.size(); j++)
			if(score[i] < score[j])
				answer[i]++;
	}

	return answer;
}