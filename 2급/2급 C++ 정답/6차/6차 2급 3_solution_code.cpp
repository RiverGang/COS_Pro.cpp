#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> people) {
	vector<int> answer(4, 0);

	for(int i = 0; i < people.size(); i++)
		if(people[i] < 95)
			answer[0]++;
		else if(people[i] >= 95 && people[i] < 100)
			answer[1]++;
		else if(people[i] >= 100 && people[i] < 105)
			answer[2]++;
		else if(people[i] >= 105)
			answer[3]++;

	return answer;
}