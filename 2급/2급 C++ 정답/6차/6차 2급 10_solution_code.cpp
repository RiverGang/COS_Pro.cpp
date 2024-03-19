#include <string>
#include <vector>

using namespace std;

int solution(int weight, vector<int> boxes) {
    int answer = 0;

	for(int i = 0; i < boxes.size(); i++)
		if(boxes[i] < weight * 9 / 10 || boxes[i] > weight * 11 / 10)
			answer++;
	
    return answer;
}