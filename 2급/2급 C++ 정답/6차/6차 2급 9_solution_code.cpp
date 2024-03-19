#include <string>
#include <vector>

using namespace std;

int solution(vector<int> socks) {
	int answer = 0;

	vector<int> count(10, 0);
	for(int i = 0; i < socks.size(); i++)
		count[socks[i]]++;

	for(int i = 0; i < 10; i++)
		answer += (count[i] / 2);

	return answer;
}