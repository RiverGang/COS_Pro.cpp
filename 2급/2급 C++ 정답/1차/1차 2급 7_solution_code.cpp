#include <iostream>
#include <string>
#include <vector>

using namespace std;

int solution(vector<int> scores) {
	int count = 0;
	for (int i = 0; i < scores.size(); i++)
		if (650 <= scores[i] && scores[i] < 800) 
			count += 1;
	return count;
}