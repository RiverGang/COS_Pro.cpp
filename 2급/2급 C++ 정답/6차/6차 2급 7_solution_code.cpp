#include <string>
#include <vector>
using namespace std;

int solution(int money, vector<int> chairs, vector<int> desks) {
	int answer = 0;
	
	for(int i = 0; i < chairs.size(); i++) {
		for(int j = 0; j < desks.size(); j++) {
			int price = chairs[i] + desks[j];
			if(answer < price && price <= money)
				answer = price;
		}
	}

	return answer;
}