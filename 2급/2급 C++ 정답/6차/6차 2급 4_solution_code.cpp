#include <string>
#include <vector>

using namespace std;

int solution(vector<vector<string>> cards) {
	int answer = 0;

	vector<int> count(3, 0);
	for(int i = 0; i < cards.size(); i++) {
		if(cards[i][0].compare("black") == 0)
			count[0]++;
		else if(cards[i][0].compare("blue") == 0)
			count[1]++;
		else if(cards[i][0].compare("red") == 0)
			count[2]++;
		answer += stoi(cards[i][1]);
	}

	if(count[0] == 3 || count[1] == 3 || count[2] == 3)
		answer *= 3;
	else if(count[0] == 2 || count[1] == 2 || count[2] == 2)
		answer *= 2;

	return answer;
}