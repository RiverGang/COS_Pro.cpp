#include <string>
#include <vector>

using namespace std;

int solution(vector<vector<int>> scores) {
	int pass_count = 0;
	int people_count = 0;
	int pass_score[3] = {80, 88, 70};

	for(int i = 0; i < scores.size(); ++i) {
		pass_count = 0;
		for(int j = 0; j < scores[i].size(); ++j) {
			if(scores[i][j] < pass_score[j]/2)
			{
				pass_count = 0;
				break;
			}
			else if(scores[i][j] >= pass_score[j])
				pass_count++;
		}
		if (pass_count >1)
			people_count++;
	}
	return people_count;
}